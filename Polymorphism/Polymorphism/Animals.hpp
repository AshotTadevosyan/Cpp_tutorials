//
//  Animals.hpp
//  Polymorphism
//
//  Created by Ashot Tadevosyan on 30.09.23.
//

#ifndef Animals_hpp
#define Animals_hpp

#include <string>
#include <string_view>

class Animal
{
private:
  std::string name;
  unsigned weight;

public:
  Animal(std::string_view theName, unsigned wt) : name{theName}, weight{wt} {}
    
  virtual ~Animal() = default;
    
  virtual std::string who() const
    {
        return "My name is " + name + ". My weight is " + std::to_string(weight) + " lbs.";
    }
    
  virtual std::string_view sound() const = 0;
};

class Sheep : public Animal
{
public:
  using Animal::Animal;
  std::string_view sound() const override
    {
        return "Baaaa!!";
    }
};

class Dog : public Animal
{
public:
  using Animal::Animal;
  std::string_view sound() const override
    {
        return "Woof Woof!!";
    }
};

class Cow : public Animal
{
public:
  using Animal::Animal;
  std::string_view sound() const override
    {
        return "Moooo!!";
    }
};


#endif /* Animals_hpp */
