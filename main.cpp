#include <vector>
#include <iostream>
#include <string>

int menue();
void displayList(std::vector<std::string> list);
std::vector<std::string> addEntry(std::vector<std::string> list);
std::vector<std::string> removeEntry(std::vector<std::string> list);

std::vector<std::string> todoList = { "Object 1", "Object 2" };

int main() {
	while (true) {
		int option = menue();

		switch (option) {
		case 1:
			displayList(todoList);
			break;
		case 2:
			todoList = addEntry(todoList);
			break;
		case 3:
			todoList = removeEntry(todoList);
			break;
		case 4:
			return false;
			break;
		default:
			break;
		}
	}
}

int menue() {
	system("cls");
	int option = 0;

	std::cout << "Menue" << std::endl;
	std::cout << "(1) - Dispaly List" << std::endl;
	std::cout << "(2) - Add Entry" << std::endl;
	std::cout << "(3) - Remove Entry" << std::endl;
	std::cout << "(4) - Exit" << std::endl;
	std::cout << std::endl;
	
	std::cin >> option;

	return option;
}

void displayList(std::vector<std::string> list) {
	system("cls");
	int index = 0;
	for (std::string entry : list) {
		std::cout << "(" << index << ") - " << entry << std::endl;
		index++;
	}
	std::cout << std::endl;
	system("pause");
}

std::vector<std::string> addEntry(std::vector<std::string> list) {
	system("cls");
	
	std::string input;
	std::cout << "(+) Hinzuf\x81gen" << std::endl;
	std::cout << "(+) Eingabe: ";
	std::cin.ignore();
	std::getline(std::cin, input);
	
	list.push_back(input);
	
	std::cout << "(+) Wurde der liste hinzugef\x81gt" << std::endl;
	
	system("pause");

	return list;
}

std::vector<std::string> removeEntry(std::vector<std::string> list) {
	system("cls");
	
	int index = 1;
	std::cout << "(-) Entfernen" << std::endl;
	std::cout << std::endl;
	
	for(std::string entry : list) {
		std::cout << "(" << index << ") - " << entry << std::endl;
		index++;
	}
	
	std::cout << std::endl;
	std::cout << "(-) Welcher eintrag soll entfernt werden (Index Nummer)" << std::endl;
	std::cin >> index;
	
	list.erase(std::next(list.begin(), index-1));
	
	std::cout << "(-) Das Element an der Position " << index << " wurde Entfernt!" << std::endl;
	
	system("pause");
	
	return list;
}