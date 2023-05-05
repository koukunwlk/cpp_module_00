#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->contactCount = 0;
	currentContactIndex = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addNewContact(Contact& contact) {
	if(currentContactIndex == 8) {
		currentContactIndex = 0;
	}
	
	this->contacts[currentContactIndex++] = contact;
	if(contactCount != 8) {
		contactCount++;
	} 
	std::cout << "\33[1;32mNEW CONTACT ADDED TO YOUR INCABOOK\033[0m" << std::endl;
	return;
}


void PhoneBook::printInfo(std::string info) {
	if (info.length() <= 10)
        std::cout << std::left << std::setw(10) << info;
    else
    {
        info =  info.substr(0,9) + ".";
        std::cout << std::left << std::setw(10) << info;
    }
	std::cout << "\t| ";
}

int PhoneBook::showContacts() {
	Contact currentContact;
	if (this->contactCount == 0)
	{
		std::cout << "\33[1;31mEmpty list\033[0m" << std::endl;
		return false;
	}
	std::cout << "index\t| first name\t| last name\t| nickname\t|" << std::endl;
	for (int index = 0; index < this->contactCount; index++)
	{
		currentContact = this->contacts[index];
		std::cout << "[ " << index + 1 << " ]\t| ";
		 printInfo(currentContact.getFirstName());
		 printInfo(currentContact.getLastName());
		 printInfo(currentContact.getNickname());
		 std::cout << std::endl;
	}
	return true;
};
void PhoneBook::showContact(int index) {
	Contact selectedContact = contacts[index];
	std::cout << "First name" << std::endl;
	std::cout << selectedContact.getFirstName() << std::endl;
	std::cout << "Last name" << std::endl;
	std::cout << selectedContact.getLastName() << std::endl;
	std::cout << "Nick name" << std::endl;
	std::cout << selectedContact.getNickname() << std::endl;
	std::cout << "Darkest secret" << std::endl;
	std::cout << selectedContact.getDarkestSecret() << std::endl;
	std::cout << "Phone number" << std::endl;
	std::cout << selectedContact.getPhoneNumber() << std::endl;
};

void PhoneBook::searchContacts() {
	int index;
	std::string choice;
	if (!this->showContacts()) {
		return;
	}
	std::cout << "Select a contact by index: ";
	std::getline(std::cin, choice);
	index = std::atoi(choice.c_str());
	if (index < 1 || index > 8)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	index--;
	this->showContact(index);
}
