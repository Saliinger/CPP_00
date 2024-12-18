#include "Contact.hpp"

Contact::Contact(){
  return ;
}

Contact::~Contact(){
  return ;
}

void Contact::setContact(std::string name, std::string lastName, std::string nickname,std::string phone, std::string _darkestSecret){
  this->_name = name;
  this->_lastName = lastName;
  this->_nickname = nickname;
  this->_phone = phone;
  this->_darkestSecret = _darkestSecret;
}

void Contact::printContact(){
  std::cout << this->_name << std::endl;
  std::cout << this->_lastName << std::endl;
  std::cout << this->_nickname << std::endl;
  std::cout << this->_phone << std::endl;
  std::cout << this->_darkestSecret << std::endl;
}

