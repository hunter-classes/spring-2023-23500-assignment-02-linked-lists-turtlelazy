#pragma once
#include <string>
class Node{
    private:
        int value;
        std::string data;
        Node *next;

    public:
        Node();
        Node(std::string data);
        Node(std::string data, Node* next);

        void setData(std::string data);
        void setNext(Node* next);

        Node(int value);
        Node(int value, Node *next);

        void setData(int value);

        std::string getData();
        int getValue();

        Node *getNext();


};