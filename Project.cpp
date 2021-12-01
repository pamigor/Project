#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>

int main() {
	std::ifstream file1("cinema.json");
	if (!file1.is_open()) {
		std::cerr << "The file was not found. Check the file path and try again.\n";
		return 0;
	}
	
	nlohmann::json document;
	file1 >> document;
	
	std::cout << "Enter the actor: ";
	std::string actor;
	std::getline(std::cin, actor);
	for (auto& json_element : document.items()) {
		nlohmann::json val = json_element.value();
		if (val["actor_one"] == actor) {
			std::cout << "\nThe name of the movie: " << json_element.key() << ". The role of the actor " << val["lead_role_one"];
		}
		else if (val["actor_two"] == actor) {
			std::cout << "\nThe name of the movie: " << json_element.key() << ". The role of the actor " << val["lead_role_two"];
		}
	}
	std::cout << "\n";
	file1.close();
}
