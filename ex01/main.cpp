#include "include/PhoneBook.hpp"

void fields(std::string str, std::string *dest)
{
  std::cout << str;
  std::getline(std::cin, *dest);
}

void add_handler(PhoneBook *phoneBook)
{
  std::string name, lastName, nickname, phone, darkestSecret;
  fields("Enter the contact information: ", &name);
  fields("Last Name: ", &lastName);
  fields("Nickname: ", &nickname);
  fields("Phone: ", &phone);
  fields("Darkest Secret: ", &darkestSecret);
  phoneBook->addContact(name, lastName, nickname, phone, darkestSecret);
}

void search_handler(PhoneBook *phoneBook)
{
  std::string input;
  int index = 0;
  fields("Enter the index of the contact you want to search: ", &input);
  index = std::stoi(input) - 1;
  if (index > 0 && index <= 8)
  {
    std::cout << "Invalid Input" << std::endl;
    return;
  }
  phoneBook->searchContact(index);
}

int command_handler(std::string command, PhoneBook *phoneBook)
{
  if (command == "ADD")
    add_handler(phoneBook);
  else if (command == "SEARCH")
    search_handler(phoneBook);
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
    if (command_handler(command, &phoneBook) == 1)
      break;
  }
  return 0;
}
