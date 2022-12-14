#ifndef CONTACT_HPP
#define CONTACT_HPP
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
	Contact() {}
	Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret) {
		setFirstName(firstName);
		setLastName(lastName);
		setNickname(nickname);
		setPhoneNumber(phoneNumber);
		setDarkestSecret(darkestSecret);
	}
	~Contact();

	void setFirstName(std::string firstName) {
		if (firstName.empty()) {
			std::cout << "First name cannot be empty" << std::endl;
		}
		else {
			this->firstName = firstName;
		}
	}

	void setLastName(std::string lastName) {
		if (lastName.empty()) {
			std::cout << "Last name cannot be empty" << std::endl;
		}
		else {
			this->lastName = lastName;
		}
	}

	void setNickname(std::string nickname) {
		if (nickname.empty()) {
			std::cout << "Nickname cannot be empty" << std::endl;
		}
		else {
			this->nickname = nickname;
		}
	}

	void setPhoneNumber(std::string phoneNumber) {
		if (phoneNumber.empty()) {
			std::cout << "Phone number cannot be empty" << std::endl;
		}
		else {
			this->phoneNumber = phoneNumber;
		}
	}

	void setDarkestSecret(std::string darkestSecret) {
		if (darkestSecret.empty()) {
			std::cout << "Darkest secret cannot be empty" << std::endl;
		}
		else {
			this->darkestSecret = darkestSecret;
		}
	}

	std::string getFirstName() {
		return this->firstName;
	}

	std::string getLastName() {
		return this->lastName;
	}

	std::string getNickname() {
		return this->nickname;
	}

	std::string getPhoneNumber() {
		return this->phoneNumber;
	}

	std::string getDarkestSecret() {
		return this->darkestSecret;
	}
	
};

#endif