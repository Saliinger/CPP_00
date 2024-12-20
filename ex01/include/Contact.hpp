#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
  private:
    std::string _name;
    std::string _lastName;
    std::string _nickname;
    std::string _phone;
    std::string _darkestSecret;

  public:
    Contact();
    void setContact(std::string name, std::string lastName, std::string nickname,std::string phone, std::string _darkestSecret);
    void printContact();
    void printLine(int i);
    std::string trimAndFormat(const std::string &str);
    ~Contact();
};

#endif //CONTACT_HPP
