#include <string>
#include <vector>
#include <iostream>

int drawBackupMenue();
void displayBackups();

std::vector<std::vector<std::string>> backups;

void loadBackupMenue(std::vector<std::string> todoList) {
	bool running = true;
	system("cls");

	while (running) {
		switch (drawBackupMenue()) {
		case 1: 
			break;
		case 2: 
			backups.push_back(todoList);
			break;
		case 4:
			running = false;
			break;
		default:
			break;
		}
	}
}

int drawBackupMenue() {
	system("cls");

	int option = 0;
	
	std::cout << "| Backupmenue" << std::endl;
	std::cout << "|--------------------------------" << std::endl;
	std::cout << "|  (1) - Backup anzeigen" << std::endl;
	std::cout << "|  (2) - Backups erstellen" << std::endl;
	std::cout << "|  (3) - Backup entfernen" << std::endl;
	std::cout << "|  (4) - Beenden" << std::endl;
	std::cout << std::endl;

	std::cin >> option;

	return option;
}

void displayBackups() {
	system("cls");


}