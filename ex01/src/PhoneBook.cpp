#include "PhoneBook.hpp"

void PhoneBook::addNewContact(Contact& contact)
{
	if (contactCount < 8)
	{
		this->contacts[this->contactCount] = contact;
		contactCount++ ;
		std::cout << "\33[1;32mNEW CONTACT ADDED TO YOUR INCABOOK\033[0m" << std::endl;
		return ;
	}
	std::cout << "\33[1;31mINCABOOK ALREADY FULL\033[0m" << std::endl;
}

std::string PhoneBook::parseInfo(std::string info)
{
	std::string parsedInfo;

	parsedInfo = info.substr(0, 10);
	return parsedInfo;
}

void PhoneBook::printInfo(std::string info) {
	std::cout << info << "\t";
	if(info.size() < 6) {
		std::cout << "\t";
	}
	std::cout << "| " ;
}

int PhoneBook::showContacts()
{
	Contact currenctContact;
	if (this->contactCount == 0)
	{
		std::cout << "\33[1;31mEmpty list\033[0m" << std::endl;
		return false;
	}
	std::cout << "index\t| first name\t| last name\t| nickname\t|" << std::endl;
	for (int index = 0; index < this->contactCount; index++)
	{
		currenctContact = this->contacts[index];
		std::cout << "[ " << index + 1 << " ]\t| ";
		printInfo(this->parseInfo(currenctContact.getFirstName()));
		printInfo(this->parseInfo(currenctContact.getLastName()));
		printInfo(this->parseInfo(currenctContact.getNickname()));
		std::cout << std::endl;
	}
	return true;
};
void PhoneBook::showContact(int index)
{
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

void PhoneBook::searchContacts()
{
	int index; 
	if(!this->showContacts()) {
		return ;
	}
	std::cout << "Select a contact by index: ";
	std::cin >> index;
	if (index < 1 || index > 8)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	index--;
	this->showContact(index);
}
