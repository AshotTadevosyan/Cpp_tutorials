//
//  LinkedList.hpp
//  LinkedList
//
//  Created by Ashot Tadevosyan on 06.09.23.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <iostream>

class List
{
private:
    
    typedef struct node
    {
        int data;
        node* next;
    }* nodePtr;
    
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    
public:
    List();
    void addNode(int addData);
    void deleteNode(int delData);
    void printList();
    
};

#endif /* LinkedList_hpp */
