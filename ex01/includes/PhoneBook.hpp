# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include<iostream>
# include "Contact.hpp"

class PhoneBook {
private:
	Contact contacts[8];
	int contactCount;
public:
	PhoneBook(){}
	PhoneBook() {
		this->contactCount = 0;
	}

	~PhoneBook();

	void addNewContact(Contact contact) {
		if(contactCount < 8) {
			this->contacts[this->contactCount] = contact;
			return ;
		}
		std::cout << 'PhoneBook is Already full' << '\n';
	}

	std::string parseInfo(std::string info) {
		std::string parsedInfo;

		parsedInfo = info.substr(0, 10);
	}

	void showContacts() {
		Contact currenctContact;
		std::cout << "index\t|\tfirst name\t|\tlast name\t|\tnickname" << '\n';
		for(int index = 0; index < this->contactCount; index++) {
			currenctContact = this->contacts[index];
			std::cout << "[ " << index << " ]";
			std::cout << this->parseInfo(currenctContact.getFirstName());
			std::cout << this->parseInfo(currenctContact.getLastName());
			std::cout << this->parseInfo(currenctContact.getNickname());
		}
	};
	void showContact(int index) {

	};

	void searchContacts(int index) {
		if(index < 1 || index > 8) {
			std::cout << 'Invalid index' << '\n';
			return ;
		}
		this->showContacts();
		this->showContact(index);
	}
}
# endif