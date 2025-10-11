#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

#include "repetition.h"
#include <catch.hpp>

TEST_CASE("Test get_factorial function")
{
    REQUIRE(get_factorial(5) == 120);
    REQUIRE(get_factorial(3) == 6);
    REQUIRE(get_factorial(1) == 1);
}

TEST_CASE("Test sum_of_squares function")
{
    REQUIRE(sum_of_squares(3) == 14);  // 1^2 + 2^2 + 3^2 = 14
    REQUIRE(sum_of_squares(5) == 55);  // 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
}
