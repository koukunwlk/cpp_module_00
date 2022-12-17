#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int contactCount;

public:
	PhoneBook(){
		this->contactCount = 0;
	}

	~PhoneBook(){};

	void addNewContact(Contact& contact);

	std::string parseInfo(std::string info);

	int showContacts();
	void showContact(int index);
	void printInfo(std::string info);

	void searchContacts();
};

#endif