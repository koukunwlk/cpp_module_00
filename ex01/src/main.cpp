#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <stdlib.h>


void showOptions() {
	std::cout << std::endl << "ADD: Add a new contact" << std::endl;
	std::cout << "SEARCH: Show contacts list" << std::endl;
	std::cout << "EXIT: exit from IncaBook" << std::endl;
	std::cout << "Type an option: ";
}

Contact createNewContact() {
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string darkestSecret;
	std::string phoneNumber;

	std::cout << "\nEnter infos of contact below" << std::endl;
	std::cout << "First name" << std::endl;
	std::cin >> firstName;
	std::cout << "Last name" << std::endl;
	std::cin >> lastName;
	std::cout << "Nickname" << std::endl;
	std::cin >> nickName;
	std::cout << "Phone number(only numbers)" << std::endl;
	std::cin >> phoneNumber;
	std::cout << "Darkest secret" << std::endl;
	std::cin >> darkestSecret;

	return Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
}

void dramaticPause(int clear) {
	system("sleep 2");
	if(clear) {
		system("clear");
	}
}

int main(void) {
	std::string choice = "";
	PhoneBook incaBook = PhoneBook();
	Contact newContact;

	system("clear");
	std::cout << "\33[0;95mWelcome to IncaBook this is the future of century XII\033[0m" << std::endl;
	std::cout << "\33[4;92mType in UPPERCASE one of followings options\033[0m" << std::endl;
	dramaticPause(0);
	while(choice.compare("EXIT")) {
		showOptions();
		std::cin >> choice;

		if(!choice.compare("ADD")) {
			newContact = createNewContact();
			incaBook.addNewContact(newContact);
			dramaticPause(1);
			continue ;
		}

		if(!choice.compare("SEARCH")) {
			incaBook.searchContacts();
			continue ;
		}

		if(choice.compare("EXIT")) {
			std::cout << "\33[0;31m \nINVALID OPTION FOOL TRY TYPING IN UPPERCASE\033[0m" << std::endl;
		}
		std::cin.clear();
	}
	std::cout << "\33[0;95mBYE!! <3\033[0m" << std::endl;
	return (0);
}