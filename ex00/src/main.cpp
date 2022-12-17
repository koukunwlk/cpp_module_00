#include "Megaphone.hpp"

int main(int argc, char *argv[])
{
	int index = 1;

	do {
		Megaphone megaphone = Megaphone(argv[index]);
		megaphone.speak();
		index++;
	} while(index < argc);
	std::cout << "\n";
	return (0);
}