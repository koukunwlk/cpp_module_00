#ifndef CONTACT_H
#define CONTACT_H
#include<iostream>
#include <string>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	Contact(/* args */);
	~Contact();
};

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}



#endif