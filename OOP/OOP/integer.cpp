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

int Integer::compare(const Integer& object) const
{
    if (n < object.n) {return -1;}
    else if (n == object.n) {return 0;}
    else {return 1;}
}

int Integer::add(Integer object&)
{
    
}
