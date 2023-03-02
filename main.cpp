#include <iostream>
#include "List.h"

int main(){
    List *l1 = new List();

    l1->insert("a");
    l1->insert("b");
    l1->insert("c");

    std::cout << l1->toString() << "\n";
    
}