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
	this->_numContacts = 0;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void PhoneBook::printPhoneBook()
{
	int i = 0;

	std::cout << std::string(50, '_') << "\n";
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
	if (this->_numContacts > 0)
	{
		for (int i = 7; i > 0; i--)
			this->_contacts[i] = this->_contacts[i - 1];
	}
	this->_contacts[0].setContact(name, lastName, nickname, phone, darkestSecret);
	if (this->_numContacts < 8)
		this->_numContacts++;
}

void PhoneBook::searchContact(int index)
{
    if (index < 0 || index > 8 || index > this->_numContacts || (this->_numContacts == 0 && index== 0))
    {
        std::cout << "Invalid Input" << std::endl;
        return;
    }
    this->_contacts[index].printContact();
}