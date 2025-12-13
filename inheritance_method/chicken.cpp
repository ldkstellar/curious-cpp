#include "Chicken.hpp"
void Chicken::friedChicken() {
  {
    this->killedAnimal();
  };
}

Chicken::Chicken(std::string word) : name(word), Animal("bird", 2, 3) {}