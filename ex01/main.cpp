#include "include/PhoneBook.hpp"

int command_handler(std::string command, PhoneBook phoneBook)
{
  if (command == "ADD")
    phoneBook.addContact();
  else if (command == "SEARCH")
    phoneBook.searchContact();
  else if (command == "EXIT")
    return 1;
  return 0;
}

int main(){
  std::string command;
  PhoneBook phoneBook;


  while (true)
  {
    phoneBook.printPhoneBook();
    std::cout << "Enter a command: ";
    getline(std::cin, command);
    if (command_handler(command, phoneBook) == 1)
      break;
  }
  return 0;
}
