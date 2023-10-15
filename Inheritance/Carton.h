//
//  Carton.h
//  Inheritance
//
//  Created by Ashot Tadevosyan on 22.09.23.
//

#ifndef Carton_h
#define Carton_h

#include <string>
#include <string_view>
#include "Box.h"

class Carton : public Box
{
private:
  std::string material {"Cardboard"};

public:
  Carton(double lv, double wv, double hv, std::string_view mat)
    : Box{lv, wv, hv}, material{mat}
  {
    std::cout << "Carton(double,double,double,string_view) called.\n";
  }
  explicit Carton(std::string_view mat)
    : material{mat}
  {
    std::cout << "Carton(string_view) called.\n";
  }
  Carton(double side, std::string_view mat)
    : Box{side}, material{mat}
  {
    std::cout << "Carton(double,string_view) called.\n";
  }
  Carton()
  {
    std::cout << "Carton() called.\n";
  }
};
#endif /* Carton_h */
