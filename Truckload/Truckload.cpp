//
//  Truckload.cpp
//  Truckload
//
//  Created by Ashot Tadevosyan on 08.09.23.
//

#include "Truckload.hpp"

Truckload::Truckload(const std::vector<SharedBox>& boxes)
{
    for (const auto& pBox : boxes)
    {
        addBox(pBox);
    }
}

Truckload::Truckload(const Truckload& src)
{
    for (Package* package(src.pHead); package; package = package->getNext())
    {
        addBox(package->getBox());
    }
}

void Truckload::listBoxes() const
{
    const size_t boxesPerLine {5};
    size_t count {};
    Package* currentPackage {pHead};
    while (currentPackage)
    {
        currentPackage->getBox()->listBox();
        if (! (++count % boxesPerLine)) std::cout << std::endl;
    }
    if (count % boxesPerLine) std::cout << std::endl;
}


SharedBox Truckload::getNextBox()
{
    if (!pCurrent)
        return getFirstBox();
    
    pCurrent = pCurrent->getNext();
    
    return pCurrent? pCurrent->getBox() : nullptr;
}

SharedBox Truckload::getFirstBox()
{
    pCurrent = pHead;
    return pCurrent? pCurrent->getBox() : nullptr;
}

void Truckload::addBox(SharedBox pBox)
{
  auto pPackage = new Package{pBox};

  if (pTail)
    pTail->setNext(pPackage);
  else
    pHead = pPackage;

  pTail = pPackage;
}

bool Truckload::removeBox(SharedBox boxToRemove)
{
  Package* previous {nullptr};
  Package* current {pHead};
  while (current)
  {
    if (current->getBox() == boxToRemove)
    {
      if (previous)
      {
        previous->setNext(current->getNext());
      }
      else
      {
        pHead = current->getNext();
      }
      
      current->setNext(nullptr);
      delete current;
      
      return true;
    }
                                              
    previous = current;
    current = current->getNext();         
  }

  return false;                               
}

