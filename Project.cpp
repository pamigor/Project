#include <cassert>
#include <chrono>
#include <ctime>
#include <iostream>
#include <iterator>
#include <mutex>
#include <string>
#include <thread>
#include <queue>
#include <vector>

std::mutex stopOrder;

class Order {
	int numberOrder = 0;
	std::string dish;
	std::string statusOrder;

public:

	Order(int inNumberOrder): numberOrder(inNumberOrder) {
		std::string menu[] = { "pizza", "soup", "steak", "salad", "sushi" };
		int j = std::rand() % 5;
		dish = menu[j];
		statusOrder = "received";
	}

	std::string get_dish() {
		return dish;
	}

	int get_number_order() {
		return numberOrder;
	}

	Order* get_this() {
		return this;
	}

	void set_status_order(std::string inStatusOrder) {
		statusOrder = inStatusOrder;
	}

	std::string get_status_order() {
		return statusOrder;
	}

};

class Waiter {
	std::vector<Order*> orders;

public:

	void accepting_orders() {
		int number = 1;
		std::srand(std::time(nullptr));
		while (true) {
			int time = std::rand() % 5 + 6;
			std::this_thread::sleep_for(std::chrono::seconds(time));
			stopOrder.lock();
			Order* order = new Order(number);
			orders.push_back(order);
			std::cout << number << " order was received: " << order->get_dish() << ".\n";
			stopOrder.unlock();
			number++;
		}
	}

	void transfer_kitchen_order(int i) {
		if (!orders.empty()) {
			stopOrder.lock();
			std::cout << orders[i]->get_number_order() << " the order has been transferred to the kitchen.\n";
			orders[i]->set_status_order("production");
			stopOrder.unlock();
		}
	}

	Order* get_orders(int i) {
		if (i < 0 || i > orders.size()) {
			return nullptr;
		}
		return orders[i];
	}

	int number_orders() {
		return orders.size();
	}

	void delete_orders() {
		for (int i = 0; i < orders.size(); i++) {
			delete orders[i];
		}
	}
};

class Kitchen {

public:

	void making_dish(int i, Waiter* inWaiter) {
		inWaiter->transfer_kitchen_order(i);
		std::srand(std::time(nullptr));
		int time = std::rand() % 10 + 6;
		std::this_thread::sleep_for(std::chrono::seconds(time));
		stopOrder.lock();
		std::cout << inWaiter->get_orders(i)->get_number_order() << " order is ready.\n";
		inWaiter->get_orders(i)->set_status_order("ready");
		stopOrder.unlock();
	}

	void transfer_delivery_order(int i, Waiter* inWaiter) {
		making_dish(i, inWaiter);
		stopOrder.lock();
		std::cout << inWaiter->get_orders(i)->get_number_order() << " the order was sent to the courier.\n";
		inWaiter->get_orders(i)->set_status_order("courier");
		stopOrder.unlock();
	}

};

class Courier {
	int numberDeliveryOrders = 0;

public:

	void ready_orders(int i, Waiter* inWaiter) {
			Kitchen* kitchen = new Kitchen();
			kitchen->transfer_delivery_order(i, inWaiter);
			delete kitchen;
	}

	void production_orders(Waiter* inWaiter) {
		int i = 0;
		while (i < inWaiter->number_orders()) {
			ready_orders(i, inWaiter);
			i++;
		}
	}

	void delivery_ready_orders(Waiter* inWaiter) {
		std::this_thread::sleep_for(std::chrono::seconds(30));
		stopOrder.lock();
		for (int i = 0; i < inWaiter->number_orders(); i++) {
			if (inWaiter->get_orders(i)->get_status_order() == "courier") {
				std::cout << inWaiter->get_orders(i)->get_number_order() << " the order has been delivered.\n";
				inWaiter->get_orders(i)->set_status_order("delivered");
				numberDeliveryOrders++;
			}
		}
		stopOrder.unlock();
	}

	void delivery_orders(Waiter* inWaiter) {
		while (true) {
			delivery_ready_orders(inWaiter);
			if (get_number_delivery_orders() >= 10) {
				exit(0);
			}
		}
	}

	int get_number_delivery_orders() {
		return numberDeliveryOrders;
	}

	Courier* get_this() {
		return this;
	}
};

int main() {
	std::cout << "Id: " << std::this_thread::get_id() << "\n";
	Waiter* waiter = new Waiter();
	Courier* courier = new Courier();

	std::thread acceptingOrders(&Waiter::accepting_orders, waiter);

	std::thread productionOrders(&Courier::production_orders, courier, waiter);

	std::thread deliveryOrders(&Courier::delivery_orders, courier, waiter);

	if (acceptingOrders.joinable()) {
		acceptingOrders.join();
	}
	if (productionOrders.joinable()) {
		productionOrders.join();
	}
	if (deliveryOrders.joinable()) {
		deliveryOrders.join();
	}
	
	waiter->delete_orders();
	delete waiter;
	waiter = nullptr;
	delete courier;
	courier = nullptr;
}
