//
//  LinkedList.cpp
//  LinkedList
//
//  Created by Ashot Tadevosyan on 06.09.23.
//

#include "LinkedList.hpp"
#include <iostream>

List::List()
{
    head = nullptr;
    curr = nullptr;
    temp = nullptr;
}

void List::addNode(int addData)
{
    nodePtr n = new node;
    n->next = nullptr;
    n->data = addData;
    
    if (head != nullptr)
    {
        curr = head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = n;
    }
    else
    {
        head = n;
    }
}

void List::deleteNode(int delData)
{
    nodePtr delPtr = nullptr;
    temp = head;
    curr = head;
    while (curr != nullptr && curr->data != delData)
    {
        temp = curr;
        curr = curr->next;
    }
    if (curr == nullptr)
    {
        std::cout << delData << "was not in the list" << std::endl;
        delete delPtr;
    }
    else
    {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
        std::cout << "The value " << delData << "was deleted." << std::endl;
        
    }
}

void List::printList()
{
    curr = head;
    while (curr != nullptr)
    {
        std::cout << curr->data << std::endl;
        curr = curr->next;
    }
}
