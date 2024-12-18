#include "Animal.hpp"
#include <ostream>

Animal::Animal() {
    this->_name = "default";
    this->_type = "default";
	std::cout << "This is the default constructor" << std::endl;
}

Animal::Animal(std::string name) {
    this->_name = name;
	this->_type = "default";
	std::cout << "This is the constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "This is the destructor" <<std::endl;
}

void Animal::setName(std::string name) {
	this->_name = name;
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::setAnounce()
{
	std::cout << "Hi my name is " << this->_name << " and I am a " << this->_type << std::endl;
}
