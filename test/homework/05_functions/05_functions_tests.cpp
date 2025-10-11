#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h" // Add this line to include function declarations

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test get_gc_content")
{
    REQUIRE(get_gc_content("AGCTATAG") == Approx(0.375));
    REQUIRE(get_gc_content("CGCTATAG") == Approx(0.50));
}

TEST_CASE("Test get_reverse_string")
{
    REQUIRE(reverse_string("AGCTATAG") == "GATATCGA");
    REQUIRE(reverse_string("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Test get_dna_complement")
{
    REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
    REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}


