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
    LinkedList(const LinkedList& obj);
    ~LinkedList();
    LinkedListNode* GetHead() {return head;}
    void Prepend(int data);
    void Print() const;
    LinkedList& operator=(const LinkedList &obj);
};

LinkedList::LinkedList(const LinkedList& obj) {
    if (obj.head == nullptr) {
        this->head = nullptr;
    } else {
        head = new LinkedListNode(obj.head->data);
        
        LinkedListNode* current = head;
        LinkedListNode* currentObj = obj.head;
        
        while(currentObj->next != nullptr) {
            current->next = new LinkedListNode(currentObj->next->data);
            currentObj = currentObj->next;
            current = current->next;
        }
    }
}

LinkedList& LinkedList::operator=(const LinkedList &obj) {
    if (this != &obj) {
        // delete old data
        if (head != nullptr) {
            LinkedListNode *current = head;
            LinkedListNode *next;
            
            while(current != nullptr) {
                next = current->next;
                delete current;
                current = next;
            }
        }
        // copy list from the source
        if (obj.head == nullptr) {
            this->head = nullptr;
        } else {
            head = new LinkedListNode(obj.head->data);
            
            LinkedListNode* current = head;
            LinkedListNode* currentObj = obj.head;
            
            while(currentObj->next != nullptr) {
                current->next = new LinkedListNode(currentObj->next->data);
                currentObj = currentObj->next;
                current = current->next;
            }
        }
    }
    return *this;
}

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
    //LinkedListNode n1(1);
    //LinkedListNode n2(n1);
    //cout << "n1: " << n1.GetData() << endl;
    //cout << "n2: " << n2.GetData() << endl;
    //n2.SetData(10);
    //cout << "n1: " << n1.GetData() << endl;
    //cout << "n2: " << n2.GetData() << endl;
    
    
    // Copy Constructor
    //LinkedList list;
    //list.Prepend(1); list.Prepend(2); list.Prepend(3); list.Prepend(4);
    
    //LinkedList l2(list);
    
    //cout << "l1: "; list.Print();
    //cout << "l2: "; l2.Print();
    
    //(*(l2.GetHead())).SetData(40);
    //l2.GetHead()->SetData(40);
    
    //cout << "l1: "; list.Print();
    //cout << "l2: "; l2.Print();
    
    // Copy Assignment Operator
    LinkedList list;
    list.Prepend(1); list.Prepend(2); list.Prepend(3); list.Prepend(4);
    
    LinkedList l2;
    l2.Prepend(100);
    
    l2 = list;
    cout << "l1: "; list.Print();
    cout << "l2: "; l2.Print();
    
    l2.GetHead()->SetData(40);
    cout << "l1: "; list.Print();
    cout << "l2: "; l2.Print();

    return 0;
}
