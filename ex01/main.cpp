#include "include/PhoneBook.hpp"

// need to check if the char are printable or not and else
// need to add a while the fild is empty keep asking for it
// no empty fileds
// if len > 9 substr .

bool is_valid_input(std::string input, int type)
{
  for (int i = 0; i < input.length(); i++)
    if (!std::isprint(input[i]))
      return std::cout << "Error: "<< input[i] << " is not printable" << std::endl, false;
  if (type == 0)
  {
    for (int i = 0; i < input.length(); i++)
      if (!std::isalpha(input[i]))
        return std::cout << "Error: "<< input[i] << " is not a letter" << std::endl, false;
    //check text fields
  }
  if (type == 1)
  {
    for (int i = 0; i < input.length(); i++)
      if (!std::isdigit(input[i]))
        return std::cout << "Error: "<< input[i] << " is not a number" << std::endl, false;
    // check number only
  }
  return true;
}

void fields(std::string str, std::string *dest, int type)
{
  while ( !is_valid_input(*dest, type))
  {
    std::cout << str;
    std::getline(std::cin, *dest);
  }
}

void add_handler(PhoneBook *phoneBook)
{
  std::string name, lastName, nickname, phone, darkestSecret;
  fields("Enter the contact information: ", &name,0);
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
  fields("Enter the index of the contact you want to search: ", &input, 1);
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
