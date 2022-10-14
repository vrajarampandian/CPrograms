#include "../src/functions.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("ADD") {
    int result = addition(3,5);
    REQUIRE(result == 8);
}

TEST_CASE("SUB") {
    int result = subraction(5,3);
    REQUIRE(result == 3);
}

TEST_CASE("MUT") {
    int result = multiplication(10, 10);
    REQUIRE(result == 100);
}