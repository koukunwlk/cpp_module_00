#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int contactCount;
	int currentContactIndex;

	int showContacts();
	void showContact(int index);
	void printInfo(std::string info);


public:
	PhoneBook();
	~PhoneBook();

	void addNewContact(Contact& contact);

	void searchContacts();
};

#endif