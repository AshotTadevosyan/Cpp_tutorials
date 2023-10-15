//
//  Zoo.hpp
//  Polymorphism
//
//  Created by Ashot Tadevosyan on 30.09.23.
//

#ifndef Zoo_hpp
#define Zoo_hpp

#include "Animals.hpp"
#include <iostream>
#include <vector>
#include <memory>

using AnimalPtr = std::shared_ptr<Animal>;         

class Zoo
{
private:
  std::vector<AnimalPtr> animals;

public:
  Zoo() = default;
    
  Zoo(const std::vector<AnimalPtr>& new_animals) : animals{new_animals} {}
    
  virtual ~Zoo() = default;
                                                 
  void addAnimal(AnimalPtr animal)
  {
    animals.push_back(animal);
  }
    
  void showAnimals() const
  {
    for (auto animal : animals)
    {
        std::cout << animal->who() << ' ' << animal->sound() << std::endl;
    }
  }
    
};
#endif /* Zoo_hpp */
