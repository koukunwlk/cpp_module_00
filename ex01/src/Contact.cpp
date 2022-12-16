#include "Contact.hpp"

Contact::~Contact() {}

void Contact::setFirstName(std::string firstName)
{
	if (firstName.empty())
	{
		std::cout << "First name cannot be empty" << std::endl;
	}
	else
	{
		this->firstName = firstName;
	}
}

void Contact::setLastName(std::string lastName)
{
	if (lastName.empty())
	{
		std::cout << "Last name cannot be empty" << std::endl;
	}
	else
	{
		this->lastName = lastName;
	}
}

void Contact::setNickname(std::string nickname)
{
	if (nickname.empty())
	{
		std::cout << "Nickname cannot be empty" << std::endl;
	}
	else
	{
		this->nickname = nickname;
	}
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	if (phoneNumber.empty())
	{
		std::cout << "Phone number cannot be empty" << std::endl;
	}
	else
	{
		this->phoneNumber = phoneNumber;
	}
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	if (darkestSecret.empty())
	{
		std::cout << "Darkest secret cannot be empty" << std::endl;
	}
	else
	{
		this->darkestSecret = darkestSecret;
	}
}

std::string Contact::getFirstName()
{
	return this->firstName;
}

std::string Contact::getLastName()
{
	return this->lastName;
}

std::string Contact::getNickname()
{
	return this->nickname;
}

std::string Contact::getPhoneNumber()
{
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret()
{
	return this->darkestSecret;
}
