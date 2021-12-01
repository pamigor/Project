#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>

int main() {
	std::ofstream file("cinema.json");
	if (!file.is_open()) {
		std::cerr << "The file was not found. Check the file path and try again.\n";
		return 0;
	}
	nlohmann::json dict, document, document1;

	dict["country"] = "Canada-Irish";
	dict["date"] = "21.03.2013";
	dict["studio"] = "MGM Television";
	dict["authorScript"] = "Michael Hurst";
	dict["director"] = "Michael Hurst";
	dict["producer"] = "Steve Wykefield";

	dict["lead_role_one"] = "Ragnar Lothbrok";
	dict["actor_one"] = "Travis Fimmel";
	dict["lead_role_two"] = "Lagertha";
	dict["actor_two"] = "Catherine Winnick";

	document["Vikings"] = dict;

	dict["country"] = "Russia";
	dict["date"] = "23.09.2002";
	dict["studio"] = "Avatar movie";
	dict["authorScript"] = "Alexey Sidorov";
	dict["director"] = "Alexey Sidorov";
	dict["producer"] = "Alexander Akopov";

	dict["lead_role_one"] = "Sasha White";
	dict["actor_one"] = "Sergey Bezrukov";
	dict["lead_role_two"] = "Olga Surikova";
	dict["actor_two"] = "Ekaterina Guseva";

	document["The Brigade"] = dict;

	dict["country"] = "Russia";
	dict["date"] = "11.05.2000";
	dict["studio"] = "STV";
	dict["authorScript"] = "Alexey Balabanov";
	dict["director"] = "Alexey Balabanov";
	dict["producer"] = "Sergey Selyanov";

	dict["lead_role_one"] = "Danila Bagrov";
	dict["actor_one"] = "Sergey Bodrov Jr.";
	dict["lead_role_two"] = "Victor Bodrov";
	dict["actor_two"] = "Victor Sukhorukov";

	document["Brother 2"] = dict;

	dict["country"] = "Russia";
	dict["date"] = "12.12.1997";
	dict["studio"] = "STV";
	dict["authorScript"] = "Alexey Balabanov";
	dict["director"] = "Alexey Balabanov";
	dict["producer"] = "Sergey Selyanov";

	dict["lead_role_one"] = "Danila Bagrov";
	dict["actor_one"] = "Sergey Bodrov Jr.";
	dict["lead_role_two"] = "Victor Bodrov";
	dict["actor_two"] = "Victor Sukhorukov";

	document["Brother"] = dict;

	dict["country"] = "USA";
	dict["date"] = "25.01.2014";
	dict["studio"] = "Cape Town Film Studios";
	dict["authorScript"] = "Neil Marshall";
	dict["director"] = "Neil Marshall";
	dict["producer"] = "Jonathan E. Steinberg";

	dict["lead_role_one"] = "James Flint";
	dict["actor_one"] = "Toby Stevens";
	dict["lead_role_two"] = "John Silver";
	dict["actor_two"] = "Luke Arnold";

	document["Black Sails"] = dict;

	file << document;

	file.close();
}