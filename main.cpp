#include <iostream>
#include "ferrari.h"

typedef unsigned int uint;

int main()
{

    // uint i = 30;
    // println("i = {}", i);

    Ferrari ferrari("Ferrari", "F8 Tributo", "Red", "Gasoline", "Sport", 2020, 300000);

    ferrari.getData();
    ferrari.convertToPln();
    ferrari.setColor("Blue");
    ferrari.getColor();

    return 0;
}