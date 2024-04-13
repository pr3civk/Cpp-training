#ifndef FERRARI_H
#define FERRARI_H
#include <iostream>
#include "car.h"
#include <fmt/core.h>

using namespace std;

typedef unsigned int uint;

class Ferrari : public Car
{
public:
    Ferrari(string brand, string model, string color, string fuel_type, string car_type, uint year, uint price_in_usd);

public:
    void getData() override;
    void getBrand() override;
    void getModel() override;
    void getColor() override;

    string setColor(string new_color) override;
};

#endif