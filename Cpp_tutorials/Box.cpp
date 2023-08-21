//
//  Box.cpp
//  Cpp_tutorials
//
//  Created by Ashot Tadevosyan on 21.08.23.
//

#include "Box.hpp"
#include <iostream>

Box::Box(double lv, double wv, double hv)
 : length{lv}, width{wv}, height{hv}
{
}

double Box::volume() const
{
    return length * width * height;
}
