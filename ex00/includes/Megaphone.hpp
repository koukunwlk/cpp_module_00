
#ifndef MEGAPHONE_H
# define MEGAPHONE_H
# include <iostream>

class Megaphone
{
private:
	std::string message;
	std::string errorMessage;

	std::string makeItLouder();
	void throwErrorMessage();

public:
	void speak();
	Megaphone(char* message)
	{
		if(!message) {
			this->message = "";
		}
		else {
			this->message = message;
		}
		this->errorMessage = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
};

#endif
