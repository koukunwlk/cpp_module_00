#include "Megaphone.hpp"


Megaphone::Megaphone(char* message)
	{
		if(!message) {
			this->message = "";
		}
		else {
			this->message = message;
		}
		this->errorMessage = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}

void Megaphone::speak()
{
	if (this->message.length() < 1)
	{
		this->throwErrorMessage();
		return ;
	}
	std::cout << this->makeItLouder();
}

std::string Megaphone::makeItLouder()
{ 
	std::string louderMessage;
	int stringLen = this->message.length();

	for (int index = 0; index < stringLen; index++)
	{
		louderMessage.append(1, (char)std::toupper(this->message[index]));
	}

	return louderMessage;
}

void Megaphone::throwErrorMessage() {
		std::cout << errorMessage;
}