
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
	Megaphone(char* message);
};

#endif
