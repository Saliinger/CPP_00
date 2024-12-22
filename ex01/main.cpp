#include "include/PhoneBook.hpp"
#include <cstdlib>

// need to check if the char are printable or not and else
// need to add a while the fild is empty keep asking for it
// no empty fileds
// if len > 9 substr .

bool is_valid_input(std::string input, int type)
{
  if (input.length() == 0)
    return std::cout << "Error: Empty input" << std::endl, false;
  for (unsigned int i = 0; i < input.length(); i++)
    if (!std::isprint(input[i]))
      return std::cout << "Error: "<< input[i] << " is not printable" << std::endl, false;
  if (type == 0)
  {
    for (unsigned int i = 0; i < input.length(); i++)
      if (!std::isalpha(input[i]))
        return std::cout << "Error: "<< input[i] << " is not a letter" << std::endl, false;
  }
  if (type == 1)
  {
    for (unsigned int i = 0; i < input.length(); i++)
      if (!std::isdigit(input[i]))
        return std::cout << "Error: "<< input[i] << " is not a number" << std::endl, false;
  }
  return true;
}

void fields(std::string str, std::string *dest, int type)
{
  do {
    std::cout << str;
    std::getline(std::cin, *dest);
    if (std::cin.eof() == true)
    {
      std::cout << "Exiting PhoneBook now." << std::endl;
      exit(0);
    }
  } while (!is_valid_input(*dest, type));
}


void add_handler(PhoneBook *phoneBook)
{
  std::string name, lastName, nickname, phone, darkestSecret;
  fields("Name: ", &name,0);
  fields("Last Name: ", &lastName, 0);
  fields("Nickname: ", &nickname, 0);
  fields("Phone: ", &phone, 1);
  fields("Darkest Secret: ", &darkestSecret, 0);
  phoneBook->addContact(name, lastName, nickname, phone, darkestSecret);
}

void search_handler(PhoneBook *phoneBook)
{
  std::string input;
  int index = 0;

  phoneBook->printPhoneBook();
  fields("Enter the index of the contact you want to search: ", &input, 1);
  index = atoi(input.c_str()) - 1;
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

void print_menu()
{
  std::cout << "ADD: Add a contact" << std::endl;
  std::cout << "SEARCH: Search a contact" << std::endl;
  std::cout << "EXIT: Exit the program" << std::endl;
}

int main(){
  std::string command;
  PhoneBook phoneBook;

  while (true)
  {
    print_menu();
    std::cout << "Enter a command: ";
    if (std::cin.eof() == true)
    {
      std::cout << "Exiting PhoneBook now." << std::endl;
      break;
    }
    getline(std::cin, command);
    if (command_handler(command, &phoneBook) == 1) {
        std::cout << "Exiting PhoneBook now." << std::endl;
        break;
    }
  }
  return 0;
}
