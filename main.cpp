#include <iostream>
#include "List.h"
#include "OList.h"

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

    OList *l2 = new OList();
    l2->insert(10);
    l2->insert(0);
    l2->insert(13);
    std::cout << "Print linked list: " << l2->toString() << "\n";
    std::cout << "Contains '13': " << l2->contains(13) << "\n";
    l2->remove(1);
    std::cout << "Contains '10' after removal: " << l2->contains(10) << "\n";
    std::cout << "Item at index 1: " << l2->get(1) << "\n";
    l2->insert(21);
    l2->insert(-4);
    l2->insert(-8);
    l2->insert(111);
    l2->reverse();
    std::cout << "Print linked list after reversal: " << l2->toString() << "\n";

    //std::cout << "Print linked list: " << l2->toString() << "\n";



    delete l1;
    delete l2;


}