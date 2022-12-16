#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"


void showOptions() {
	std::cout << std::endl << "1: Add a new contact" << std::endl;
	std::cout << "2: Show contacts list" << std::endl;
	std::cout << "3: exit from IncaBook" << std::endl;
	std::cout << "Select an option: ";
}

Contact createNewContact() {
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string darkestSecret;
	std::string phoneNumber;

	std::cout << "Enter infos of contact below" << std::endl;
	std::cout << "First name" << std::endl;
	std::cin >> firstName;
	std::cout << "Last name" << std::endl;
	std::cin >> lastName;
	std::cout << "Nickname" << std::endl;
	std::cin >> nickName;
	std::cout << "Phone number" << std::endl;
	std::cin >> phoneNumber;
	std::cout << "Darkest secret" << std::endl;
	std::cin >> darkestSecret;

	return Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
}

int main(void) {
	int choice = 0;
	PhoneBook incaBook = PhoneBook();
	Contact newContact;

	std::cout << "Welcome to IncaBook this is the future of century XII" << std::endl;
	while(choice != 3) {
		showOptions();
		std::cin >> choice;

		if(choice == 1) {
			newContact = createNewContact();
			incaBook.addNewContact(newContact);
			system("pause");
			system("clear");
		}

		if(choice == 2) {
			incaBook.showContacts();
		}
		std::cin.clear();
	}

	return (0);
}