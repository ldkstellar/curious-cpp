#include "Animal.hpp"

Animal::Animal(std::string specis, int age, int hp)
    : specis(specis), age(age), hp(hp) {}
void Animal::killedAnimal() {
  this->age = 0;
  this->hp = 0;
  std::cout << "I am zombie!!" << std::endl;
}
