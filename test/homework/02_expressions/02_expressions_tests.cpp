#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Verify get_sales_tax_amount function") {
    REQUIRE(get_sales_tax_amount(20.0) == 1.35);
    REQUIRE(get_sales_tax_amount(50.0) == 3.375);
    REQUIRE(get_sales_tax_amount(0.0) == 0.0);
}

TEST_CASE("Verify get_tip_amount function") {
    REQUIRE(get_tip_amount(20.0, 15.0) == 3.0);
    REQUIRE(get_tip_amount(50.0, 20.0) == 10.0);
    REQUIRE(get_tip_amount(0.0, 10.0) == 0.0);
}
TEST_CASE("Verify get_sales_tax_amount function")
{
	// Test with typical meal amounts
	REQUIRE(get_sales_tax_amount(20.0) == Approx(1.35));
	REQUIRE(get_sales_tax_amount(100.0) == Approx(6.75));
	
	// Test with zero
	REQUIRE(get_sales_tax_amount(0.0) == Approx(0.0));
	
	// Test with decimal amounts
	REQUIRE(get_sales_tax_amount(15.50) == Approx(1.04625));
	REQUIRE(get_sales_tax_amount(7.25) == Approx(0.489375));
}

TEST_CASE("Verify get_tip_amount function")
{
	// Test with 15% tip rate (0.15)
	REQUIRE(get_tip_amount(20.0, 0.15) == Approx(3.0));
	REQUIRE(get_tip_amount(50.0, 0.15) == Approx(7.5));
	
	// Test with 20% tip rate (0.20)
	REQUIRE(get_tip_amount(25.0, 0.20) == Approx(5.0));
	REQUIRE(get_tip_amount(100.0, 0.20) == Approx(20.0));
	
	// Test with zero tip
	REQUIRE(get_tip_amount(30.0, 0.0) == Approx(0.0));
	
	// Test with zero meal amount
	REQUIRE(get_tip_amount(0.0, 0.15) == Approx(0.0));
	
	// Test with decimal amounts
	REQUIRE(get_tip_amount(12.75, 0.18) == Approx(2.295));
}

