#include <iostream>
#include "Node.h"

Node::Node() : next(nullptr)
{

}

Node::Node(std::string data){
    this->data = data;
    this->next = nullptr;
}

Node::Node(std::string data, Node *next){
    this->data = data;
    this->next = next;
}

void Node::setData(std::string data){
    this->data = data;
}

Node::Node(int value){
    this->value = value;
    this->next = nullptr;
}

Node::Node(int value, Node *next)
{
    this->value = value;
    this->next = next;
}

void Node::setData(int value)
{
    this->value = value;
}

void Node::setNext(Node* next){
    this->next = next;
}

std::string Node::getData(){
    return this->data;
}

int Node::getValue()
{
    return this->value;
}

Node *Node::getNext(){
    return this->next;
}
