//
//  Box.h
//  Truckload
//
//  Created by Ashot Tadevosyan on 08.09.23.
//

#ifndef Box_h
#define Box_h
#include <iostream>
#include <iomanip>

class Box
{
private:
    double length {1.0};
    double width {1.0};
    double height {1.0};
    
public:
    Box() = default;
    Box(double lv, double wv, double hv) : length{lv}, width{wv}, height{hv} {};
    
    double Volume() const {return length * width * height;}
    
    int Compare(const Box& box) const
    {
        if (Volume() < box.Volume()) return -1;
        if (Volume() == box.Volume()) return 0;
        return +1;
    }
    
    void listBox() const
    {
        std::cout << " Box(" << std::setw(2) << length << ","
                             << std::setw(2) << width << ","
                             << std::setw(2) << height << ")";
    }
    
    bool operator>(const Box& box) const {return this->Volume() > box.Volume();}
};
#endif /* Box_h */
