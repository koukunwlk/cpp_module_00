#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
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
	std::getline(std::cin, firstName);
	std::cout << "Last name" << std::endl;
	std::getline(std::cin, lastName);
	std::cout << "Nickname" << std::endl;
	std::getline(std::cin, nickName);
	std::cout << "Phone number(only numbers)" << std::endl;
	std::getline(std::cin, phoneNumber);
	std::cout << "Darkest secret" << std::endl;
	std::getline(std::cin, darkestSecret);

	return Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
}

void dramaticPause(bool clear) {
	system("sleep 2");
	if(clear) {
		system("clear");
	}
}

bool hasSpecialCharacter(std::string str) {
	const std::string special_chars = "!@#$%^&*()_+-=[]{}|\\:;\"'<>,.?/~`";
	return str.find_first_of(special_chars) != std::string::npos;
}

bool hasSpaceCharacter(std::string str) {
	return str.find_first_of(" ") != std::string::npos;
}


bool isValidChoice(std::string choice) {
	return !(hasSpecialCharacter(choice) || hasSpaceCharacter(choice));
}

int main(void) {
	std::string choice = "";
	PhoneBook incaBook = PhoneBook();
	Contact newContact;

	system("clear");
	std::cout << "\33[0;95mWelcome to IncaBook this is the future of century XII\033[0m" << std::endl;
	std::cout << "\33[4;92mType in UPPERCASE one of followings options\033[0m" << std::endl;
	dramaticPause(false);

	while(choice.compare("EXIT")) {
		showOptions();
		std::getline(std::cin, choice);

		if(!isValidChoice(choice)) {
			std::cout << "\33[0;31m \nINVALID CHARACTER INSERTED\033[0m" << std::endl;
			continue ;
		}

		if(!choice.compare("ADD")) {
			newContact = createNewContact();
			incaBook.addNewContact(newContact);
			dramaticPause(true);
			continue ;
		}

		if(!choice.compare("SEARCH")) {
			incaBook.searchContacts();
			continue ;
		}

		if(choice.compare("EXIT")) {
			std::cout << "\33[0;31m \nINVALID OPTION FOOL TRY TYPING IN UPPERCASE\033[0m" << std::endl;
		}
	}
	std::cout << "\33[0;95mBYE!! <3\033[0m" << std::endl;
	return (0);
}