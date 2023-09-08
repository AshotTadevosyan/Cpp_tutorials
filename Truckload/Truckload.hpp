//
//  Truckload.hpp
//  Truckload
//
//  Created by Ashot Tadevosyan on 08.09.23.
//

#ifndef Truckload_hpp
#define Truckload_hpp
#include "Package.h"
#include <iostream>
#include <vector>

class Truckload
{
private:
    Package* pHead;
    Package* pCurrent;
    Package* pTail;
    
public:
    Truckload() = default;
    
    Truckload(SharedBox pBox) {pHead = pTail = new Package{pBox};}
    
    Truckload(const std::vector<SharedBox>& boxes);
    
    Truckload(const Truckload& src);
    
    ~Truckload() {delete pHead;}
    
    SharedBox getFirstBox();
    SharedBox getNextBox();
    void addBox(SharedBox pBox);
    bool removeBox(SharedBox pBox);
    void listBoxes() const;
    
};
#endif /* Truckload_hpp */
