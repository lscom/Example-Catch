#define CATCH_CONFIG_MAIN
#include "catch/catch.hpp"

#include <random>

const int THRESHOLD = 8;

int generateNumber()
{
    static std::random_device rd;
    static std::default_random_engine gen(rd());
    static std::uniform_int_distribution<> dis(0, 9);

    return dis(gen);
}

TEST_CASE("Test case 1")
{
    CHECK(generateNumber() < THRESHOLD);
}

TEST_CASE("Test case 2")
{
    CHECK(generateNumber() < THRESHOLD);
}

TEST_CASE("Test case 3")
{
    CHECK(generateNumber() < THRESHOLD);
}

TEST_CASE("Test case 4")
{
    CHECK(generateNumber() < THRESHOLD);
}

TEST_CASE("Test case 5")
{
    CHECK(generateNumber() < THRESHOLD);
}
