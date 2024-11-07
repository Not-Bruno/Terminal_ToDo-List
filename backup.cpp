#include <string>
#include <vector>
#include <iostream>

class Backup {
public:
	void testFunc() {
		bool running = true;

		while (running) {
			std::cout << "Test" << std::endl;
		}
	}
};


/*
int drawBackupMenue();

	std::vector<std::vector<std::string>> backups;

	public:
		void loadBackupMenue(std::vector<std::string> todoList) {
			bool running = true;

			while (running) {
				int option = drawBackupMenue();
				std::cout << option << std::endl;
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
*/