#include <iostream>
#include "OList.h"
#include <string>

OList::OList()
{
    head = nullptr;
}

OList::~OList()
{
    Node *walker = head;
    Node *trailer = nullptr;
    while (walker != nullptr)
    {
        trailer = walker;
        walker = walker->getNext();
        delete trailer;
    }
}

void OList::insert(int value)
{
    //create a new node
    Node *new_node = new Node(value);

    //length 0 case
    if (head == nullptr)
    {
        head = new_node;
        return;
    }

    //length 1 & value is less than current case
    else if(head->getNext() == nullptr && head->getValue() > value){
        new_node->setNext(head);
        head = new_node;
        return;
    }

    //rest cases
    Node *walker = head;
    while (walker != nullptr && walker->getNext() != nullptr)
    {
        if(walker->getValue() >= value ){
            break;
        }
        walker = walker->getNext();
    }
    new_node->setNext(walker->getNext());
    walker->setNext(new_node);
}

std::string OList::toString()
{
    Node *walker = head;
    std::string s = "";
    while (walker != nullptr)
    {
        s = s + std::to_string(walker->getValue()) + "-->";
        walker = walker->getNext();
    }
    s = s + "nullptr";
    return s;
}

bool OList::contains(int item)
{
    Node *walker = head;
    while (walker != nullptr)
    {
        if (walker->getValue() == item)
        {
            return true;
        }
        walker = walker->getNext();
    }
    return false;
}

void OList::remove(int loc)
{
    if (loc == 0 && head->getNext() != nullptr)
    {
        Node *next = head->getNext();
        delete head;
        head = next;
        return;
    }

    Node *walker = head;
    Node *prev;
    int iter = 0;

    while (iter < loc && walker->getNext() != nullptr)
    {
        iter += 1;
        prev = walker;
        walker = walker->getNext();
    }

    if (walker->getNext() != nullptr)
    {
        prev->setNext(walker->getNext());
        delete walker;
    }

}

int OList::get(int loc){
    int count = 0;
    Node *walker = head;
    while (walker != nullptr && count < loc)
    {
        walker = walker->getNext();
        count++;
    }
    if(count != loc || walker == nullptr){
        return -1;
    }
    return walker->getValue();
}

void OList::reverse(){
    Node *walker = head;
    Node *prev = nullptr;
    while (walker != nullptr)
    {
        Node *temp = walker->getNext();
        walker->setNext(prev);
        prev = walker;
        walker = temp;
    }
    head = prev;
}
