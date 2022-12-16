#include "PhoneBook.hpp"

void PhoneBook::addNewContact(Contact& contact)
{
	if (contactCount < 8)
	{
		this->contacts[this->contactCount] = contact;
		contactCount++ ;
		return;
	}
	std::cout << "PhoneBook is Already full" << std::endl;
}

std::string PhoneBook::parseInfo(std::string info)
{
	std::string parsedInfo;

	parsedInfo = info.substr(0, 10);
	return parsedInfo;
}

void PhoneBook::printInfo(std::string info) {
	std::cout << info << "\t";
	if(info.size() < 10) {
		std::cout << "\t";
	}
	std::cout << "| ";
}

void PhoneBook::showContacts()
{
	Contact currenctContact;
	if (this->contactCount == 0)
	{
		std::cout << "Empty list";
		return ;
	}
	std::cout << "index\t| first name\t| last name\t| nickname\t|" << std::endl;
	for (int index = 0; index < this->contactCount; index++)
	{
		currenctContact = this->contacts[index];
		std::cout << "[ " << index << " ]\t| ";
		printInfo(this->parseInfo(currenctContact.getFirstName()));
		printInfo(this->parseInfo(currenctContact.getLastName()));
		printInfo(this->parseInfo(currenctContact.getNickname()));
	}
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
	this->showContacts();
	std::cout << "Select a contact by index: ";
	std::cin >> index;
	if (index < 1 || index > 8)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	this->showContact(index);
}
