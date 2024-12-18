//
// Created by anoukan on 18/12/24.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
  private :
    std::string _name;
    std::string _type;
  public:
    Animal();
    Animal(std::string name);
    void setName(std::string name);
    void setType(std::string type);
    ~Animal();
	void setAnounce();
};

#endif //ANIMAL_HPP
