//
//  main2.cpp
//  OOP
//
//  Created by Ashot Tadevosyan on 27.08.23.
//

#include <iostream>
#include "integer.hpp"

int main()
{
    Integer i {10};
    i.show();
    
    i.setvalue(15);
    i.show();
    
    const Integer j {150 * i.getvalue()};
    j.show();
    
    Integer k {789};
    k.show();
    k.setvalue(i.getvalue() + j.getvalue());
    k.show();
    
    std::cout << "Result of comparing i and j is " << i.compare(j) << std::endl;
    std::cout << "Result of comparing k and j is " << k.compare(j) << std::endl;
}
