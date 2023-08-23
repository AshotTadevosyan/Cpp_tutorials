//
//  ex1.cpp
//  OOP
//
//  Created by Ashot Tadevosyan on 23.08.23.
//

#include "ex1.hpp"
#include <iostream>

Box::Box(double lv, double wv, double hv)
: length {lv}, width {wv}, height {hv}
{}

Box::Box(double side) : Box(side, side, side)
{}

double Box::volume()
{
    return length * width * height;
}


