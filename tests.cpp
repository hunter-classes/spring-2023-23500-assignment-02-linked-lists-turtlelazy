#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <string>
#include "OList.h"

TEST_CASE("insert, remove, get, toString")
{
    OList *l2 = new OList();
    l2->insert(10);
    l2->insert(0);
    l2->insert(13);

    CHECK("0-->10-->13-->nullptr" == l2->toString());
    
    l2->insert(100);
    CHECK(l2->get(3) == 100);
    l2->insert(100);
    CHECK(l2->get(4) == 100);

    l2->remove(0);
    CHECK(l2->get(0) == 10);
    l2->remove(3);
    CHECK(l2->get(3) == 100);
    l2->remove(0);
    CHECK(l2->get(0) == 13);
    l2->remove(0);
    CHECK(l2->get(0) == 100);
    l2->remove(0);
    l2->remove(0);

    CHECK("nullptr" == l2->toString());
}

TEST_CASE("reverse, contains"){
    OList *l2 = new OList();
    l2->insert(10);
    l2->insert(0);
    l2->insert(13);
    l2->reverse();
    CHECK( l2->toString() == "13-->10-->0-->nullptr");

    l2->remove(0);
    l2->remove(0);
    l2->remove(0);
    l2->reverse();
    CHECK("nullptr" == l2->toString());
    CHECK(l2->contains(0) != true);
    l2->insert(0);
    CHECK(l2->contains(0) == true);

    l2->insert(100);
    l2->reverse();
    CHECK("100-->0-->nullptr" == l2->toString());
}
