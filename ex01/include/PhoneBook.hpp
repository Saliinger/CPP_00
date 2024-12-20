#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "../include/Contact.hpp"

class PhoneBook {
  private:
  Contact _contacts[8];
  int _numContacts;
  public:
  PhoneBook();
  ~PhoneBook();
  void addContact();
  void searchContact();
  void printPhoneBook();
  void fields(std::string str, std::string dest);
} ;



#endif //PHONEBOOK_HPP
