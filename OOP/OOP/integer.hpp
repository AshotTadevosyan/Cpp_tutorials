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
    
    int getvalue() const {return n;}
    void setvalue(int m) {n = m;}
    void show() const;
};

#endif /* integer_hpp */
