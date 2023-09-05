//
//  Carton.h
//  Cpp_tutorials
//
//  Created by Ashot Tadevosyan on 05.09.23.
//

#ifndef Carton_h
#define Carton_h

#include <string>
#include <string_view>
#include "Inheritance.hpp"

class Carton : public Box
{
private:
  std::string material;

public:
  explicit Carton(std::string_view mat = "Cardboard") : material {mat}{}   // Constructor
  //  double carton_volume() const { return length*width*height; }        // Uncomment for an error!
};

#endif /* Carton_h */
