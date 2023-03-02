#pragma once
#include "Node.h"
#include <string>

class List{
    private:
        Node *head;
        Node *tail;


    public:
        List();
        void insert(std::string data);
        std::string toString();


        bool contains(std::string item);
        void remove(int loc);
};