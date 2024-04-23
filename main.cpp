#include <iostream>
#include "mercedes.h"
#include "amg.h"
#include "maybach.h"

typedef unsigned int ui;
typedef int i;

int main()
{

    AMG amg(2023, 300, "Black", "V8", "Petrol", 4, "4x4", 18, 1000000);
    Maybach maybach(2023, 300, "Black", "V8", "Petrol", 4, "4x4");

    amg.get_price();

    // amg.size_of_wheels;
    // amg++;
    // amg.get_size_of_wheels();

    return 0;
}
