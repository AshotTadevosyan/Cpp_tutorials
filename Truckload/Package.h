//
//  Package.h
//  Truckload
//
//  Created by Ashot Tadevosyan on 08.09.23.
//

#ifndef Package_h
#define Package_h
#include "Box.h"

using SharedBox = std::shared_ptr<Box>;

class Package
{
private:
    SharedBox pBox;
    Package* pNext;

public:
    Package(SharedBox pb) : pBox{pb}, pNext(nullptr) {};
    ~Package() {delete pNext;}
    
    SharedBox getBox() const {return pBox;}
    
    Package* getNext() {return pNext;}
    
    void setNext(Package* pPackage) {pNext = pPackage;}
};

#endif /* Package_h */
