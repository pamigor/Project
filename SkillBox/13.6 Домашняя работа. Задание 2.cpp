#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>
#include <deque>        
#include <iterator>
#include <vector>
#include <map>
#include <locale.h> 

//using namespace std;

int main()
{
	int productQuantity;
	float price = 0;
	std::vector<float> collectionPrices;
	std::cout << "Enter the product quantity: ";
	std::cin >> productQuantity;
	std::cout << "\n";
	for (int i = 0; i < productQuantity; i++) {
		std::cout << "Enter the product price: ";
		std::cin >> price;
		collectionPrices.push_back(price);
	} 
	std::cout << "\n";
	
	std::cout << "Product price:\n";
	if (collectionPrices.empty()) {
		std::cout << "NULL";
	}
	else {
		for (int i = 0; i < collectionPrices.size(); i++) {
			std::cout << collectionPrices[i] << " ";
		}
	}

	int numberPurchases, product;
	std::vector<int> setPurchases;
	std::cout << "\n\nEnter the total number of purchases: ";
	std::cin >> numberPurchases;
	std::cout << "\n";
	for (int i = 0; i < numberPurchases; i++) {
		std::cout << "Enter product: ";
		std::cin >> product;
		setPurchases.push_back(product);
	}
	std::cout << "\n";

	std::cout << "Select purchases:\n";
	if (setPurchases.empty()) {
		std::cout << "NULL";
	}
	else {
		for (int i = 0; i < setPurchases.size(); i++) {
			std::cout << setPurchases[i] << " ";
		}
	}

	float purchasePrice = 0;
	for (int i = 0; i < setPurchases.size(); i++) {
		purchasePrice += collectionPrices[setPurchases[i]];
	}
	std::cout << "\n\nTotal cost of purchases: " << purchasePrice << "\n";
}