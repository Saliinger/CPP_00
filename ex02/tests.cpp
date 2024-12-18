#include "Animal.hpp"


int main(void)
{
	Animal Cat;

	Cat.setName("bonjour");
	Cat.setAnounce();

	std::string name;

	std::cin >> name;

	Animal *Cat2 = new Animal(name);
	Cat2->setAnounce();
	delete Cat2;
	return 0;
}
