//
//  integer.cpp
//  OOP
//
//  Created by Ashot Tadevosyan on 27.08.23.
//

#include "integer.hpp"
#include <iostream>

Integer::Integer(int m) : n{m}
{std::cout << "Constructor 1 called." << std::endl;}

void Integer::show() const
{
    std::cout << "Value is " << n << std::endl;
}
