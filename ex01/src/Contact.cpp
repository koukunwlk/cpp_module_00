#include "Contact.hpp"

Contact::~Contact() {}

void Contact::setFirstName(std::string firstName)
{
	std::string retryFirstName;
	if (firstName.empty())
	{
		std::cout << "First name cannot be empty" << std::endl;
		std::cout << "Please insert a first name: ";
		std::cin >> retryFirstName;
		this->setLastName(retryFirstName);

	}
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	std::string retryLastName;
	if (lastName.empty())
	{
		std::cout << "Last name cannot be empty" << std::endl;
		std::cout << "Please insert a last name: ";
		std::cin >> retryLastName;
		this->setLastName(retryLastName);
		
	}
	this->lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
	std::string retryNickname;
	if (nickname.empty())
	{
		std::cout << "Nickname cannot be empty" << std::endl;
		std::cout << "Please insert a nickname: ";
		std::cin >> retryNickname;
		this->setLastName(retryNickname);
	}
	this->nickname = nickname;
}

bool Contact::isValidPhoneNumber(std::string phoneNumber) {
	for(std::size_t index = 0; index < phoneNumber.length(); index++) {
		if(std::isdigit(phoneNumber[index])) {
			continue ;
		}
		return false;
	}
	return true;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	std::string retryPhoneNumber;
	if (phoneNumber.empty() || !this->isValidPhoneNumber(phoneNumber))
	{
		std::cout << "Phone number cannot be empty" << std::endl;
		std::cout << "Please enter a valid phone number: " << std::endl;
		std::cin >> retryPhoneNumber;
		this->setPhoneNumber(retryPhoneNumber);
		return ;
	}
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	std::string retryDarkestSecret;
	

	if (darkestSecret.empty())
	{
		std::cout << "Darkest secret cannot be empty" << std::endl;
		std::cout << "Please insert a Darkest secret: ";
		std::cin >> retryDarkestSecret;
		this->setLastName(retryDarkestSecret);
	}
	this->darkestSecret = darkestSecret;
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
