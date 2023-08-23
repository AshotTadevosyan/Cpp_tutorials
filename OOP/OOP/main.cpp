//
//  main.cpp
//  OOP
//
//  Created by Ashot Tadevosyan on 23.08.23.
//

#include <iostream>
#include "ex1.hpp"

int main(int argc, const char * argv[])
{
    Box box1 {3.0, 2.0, 2.0};
    Box box2 {5.0};
    
    std::cout << "The volume of the first box is " << box1.volume() << std::endl;
    std::cout << "The volume of the second box is " << box2.volume() << std::endl;
    
    return 0;
}
