//
//  integer.hpp
//  OOP
//
//  Created by Ashot Tadevosyan on 27.08.23.
//

#ifndef integer_hpp
#define integer_hpp

#include <iostream>

class Integer
{
private:
    int n;
    
public:
    Integer(int m);
    Integer() = default;
    Integer(const Integer& object); // copy constructor
    int compare(const Integer& object) const;
    int getvalue() const {return n;}
    void setvalue(int m) {n = m;}
    void show() const;
    
    int add(Integer& object);
    int subtract(Integer& object);
    int multiply(Integer& object);
    
};

#endif /* integer_hpp */
