#include <iostream>
#include "List.h"

int main(){
    List *l1 = new List();

    l1->insert("a");
    l1->insert("b");
    l1->insert("c");

    std::cout << "Print linked list: " << l1->toString() << "\n";
    std::cout << "Contains 'a': " << l1->contains("a") << "\n";
    std::cout << "Contains 'd': " << l1->contains("d") << "\n";

    l1->insert("d");
    l1->insert("e");
    std::cout << "Print linked list: " << l1->toString() << "\n";
    l1->remove(0);
    std::cout << "Remove first element: " << l1->toString() << "\n";
    l1->remove(1);
    std::cout << "Remove second element: " << l1->toString() << "\n";
}