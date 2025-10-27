//
//  LinkedList.cpp
//  cs2370-004-2025f
//
//  Created by Rita Kuo on 10/23/25.
//

#include <iostream>
#include "LinkedListNode.h"
using namespace std;

class LinkedList {
private:
    LinkedListNode *head;
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList();
    void Prepend(int data);
    void Print() const;
};

LinkedList::~LinkedList() {
    LinkedListNode *next = nullptr;
    while(head != nullptr) {
        next = head->next;
        delete head;
        head = next;
    }
}

void LinkedList::Prepend(int data) {
    LinkedListNode *newNode = new LinkedListNode(data);
    newNode->next = head;
    head = newNode;
}

void LinkedList::Print() const {
    if (head == nullptr) {
        cout << "Empty List" << endl;
    } else {
        LinkedListNode *node = head;
        for (; node != nullptr; node = node->next) {
            cout << node->data << " ";
        }
        cout << endl;
    }
}


int main() {
    LinkedList list;
    list.Prepend(1);
    list.Prepend(2);
    list.Prepend(3);
    list.Prepend(4);
    
    list.Print();
    list.Print();
    return 0;
}
