#include "../include/Contact.hpp"

Contact::Contact(){
  return ;
}

Contact::~Contact(){
  return ;
}

std::string Contact::trimAndFormat(const std::string &str)
{
  if (str.length() > 9) {
    return str.substr(0, 8) + ".";
  }
  return str;
}


void Contact::printLine(int i)
{
  std::cout << std::setw(10) << i << "|"
    << std::setw(10) << trimAndFormat(this->_name) << "|"
    << std::setw(10) << trimAndFormat(this->_lastName) << "|"
    << std::setw(10) << trimAndFormat(this->_nickname) << std::endl;
}

void Contact::setContact(std::string name, std::string lastName, std::string nickname, std::string phone, std::string darkestSecret) {
  this->_name = name;
  this->_lastName = lastName;
  this->_nickname = nickname;
  this->_phone = phone;
  this->_darkestSecret = darkestSecret;
}

void Contact::printContact(){
  std::cout << std::string(50, '_') << "\n";
  std::cout << "First Name: " << _name << std::endl;
  std::cout << "Last Name: " << _lastName << std::endl;
  std::cout << "Nickname: " << _nickname << std::endl;
  std::cout << "Phone: " << _phone << std::endl;
  std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
  std::cout << std::string(50, '_') << "\n";
}
