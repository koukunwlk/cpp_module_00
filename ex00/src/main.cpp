#include "Megaphone.hpp"

int main(int argc, char *argv[])
{
	for(int index = 0; index < argc; index++) {
		Megaphone megaphone(argv[index + 1]);
		megaphone.speak();
	}
	std::cout << "\n";
	return (0);
}