#pragma once
#include "Node.h"
#include <string>

class OList
{
private:
    Node *head;

public:
    OList();
    ~OList();
    void insert(int value);
    std::string toString();

    bool contains(int item);
    void remove(int loc);
    int get(int loc);
    void reverse();
};