//
//  ex1.hpp
//  OOP
//
//  Created by Ashot Tadevosyan on 23.08.23.
//

#ifndef ex1_hpp
#define ex1_hpp

class Box
{
private:
    double length {1};
    double width {1};
    double height {1};
    
public:
    Box() = default;
    Box(double lv, double wv, double hv);
    explicit Box(double side);
    
    double volume();
    bool isBigger(Box aBox);
};
#endif /* ex1_hpp */
