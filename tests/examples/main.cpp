#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "include/add.h"

TEST_CASE("TEST DEMO"){
    CHECK(1 == 1);
    CHECK(1 == 1);
}

TEST_CASE("Test add"){
    Add add(1,2);
    CHECK(add.res() == 3);
}