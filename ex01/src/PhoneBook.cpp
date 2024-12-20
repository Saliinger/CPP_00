// detailed
// 8 contact max
// a contact = firstName lastName nickname number darkestSecret
// Functions

// ADD : create a contact if empty fields doesn't create it
// Search :
//   -  display:
//           - index
//           - firstName
//           - lastName
//           - nickname
//   - table :
//           - wide 10 char per column
//           - 4 colums
//           - if string to wide last char is trunc to a "."
//           - prompt the user to get an entry for the contact idex and then dispolay it one field per line
// EXIT : close the program

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void PhoneBook::printPhoneBook()
{
	int i = 0;

	std::cout << "this is the PhoneBook" << std::endl;
	std::cout << std::setw(10) << "Index" << "|"
		  << std::setw(10) << "First Name" << "|"
		  << std::setw(10) << "Last Name" << "|"
		  << std::setw(10) << "Nickname" << std::endl;
	std::cout << std::string(50, '_') << "\n";
	while ( i < 8)
	{
		this->_contacts[i].printLine(i + 1);
		i++;
	}
}

void PhoneBook::addContact(std::string name, std::string lastName, std::string nickname, std::string phone, std::string darkestSecret)
{
	this->_contacts[0].setContact(name, lastName, nickname, phone, darkestSecret);
	this->_numContacts += 1;
}

void PhoneBook::searchContact()
{
	std::string index;
	std::cout << "Enter the index of the contact you want to search: ";
	std::getline(std::cin, index);
	// if (stoi(index) > 0 && (stoi(index) - 1 <= 0 ))
	// {
	// 	std::cout << "Index out of range" << std::endl;
	// 	return;
	// }
	std::cout << index <<std::endl;
	this->_contacts[0].printContact();
}