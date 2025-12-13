#pragma once
#include <iostream>
class Animal
{
    /* data */
    public:
    Animal()=delete;
    Animal(std::string specis,int age,int hp);
    void killedAnimal();
    private:
        std::string specis;
        int age;
        int hp;
};


