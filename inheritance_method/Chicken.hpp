
#include "Animal.hpp"
class Chicken : public Animal {
 public:
  void friedChicken();
  Chicken(std::string word);

 private:
  Chicken();
  std::string name;
};
