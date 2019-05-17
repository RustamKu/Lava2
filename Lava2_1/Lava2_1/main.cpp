
#include <iostream>
#include "Header.h"

int main() {
	setlocale(LC_ALL, "Russian");
	void(*pointer)();
	int choice;
	std::cout << "What do you want to do with your array? " << "\n";
	std::cout << "1 - Increase " << "\n";
	std::cout << "0 - Descending " << "\n";
	std::cin >> choice;
	switch (choice)
	{
	case 1: pointer = Increase;
		pointer();
		break;
	case 0: pointer = descending;
		pointer();
		break;
	}
	return 0;
}