#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Car.h"

    using namespace MyCar;

TEST_CASE("Basic tests") {

    Car test("Porsche","Panamera",2020,"Black","CCC222","jbsajbc2211s",350,2000);

    CHECK(test.getColor() == "Black");
    test.setColor("Blue");
    CHECK(test.getColor() == "Blue");
}
