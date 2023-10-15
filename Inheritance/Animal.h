//
//  Animal.h
//  Inheritance
//
//  Created by Ashot Tadevosyan on 25.09.23.
//

#ifndef Animal_h
#define Animal_h

#include <iostream>
#include <string>

class Animal
{
private:
    std::string name;
    int weight {};
    
public:
    Animal(std::string _name, int _weight)
    : name{_name}, weight{_weight} {}
    
    void who() { std::cout << name << ", " << weight << std::endl; }
};


class Lion : public Animal
{
public:
    Lion(std::string name, int weight)
    : Animal{name, weight} {}
};

class Aardvark : public Animal
{
public:
    using Animal::Animal;
};

#endif /* Animal_h */
