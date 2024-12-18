#include "Contact.hpp"

Contact::Contact(){

}

Contact::~Contact(){

}

void Contact::setContact(std::string name, std::string lastName, std::string nickname,std::string phone, std::string _darkestSecret){
  this->_name = name;
  this->_lastName = lastName;
  this->_nickname = nickname;
  this->_phone = phone;
  this->_darkestSecret = _darkestSecret;
}

