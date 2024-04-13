#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <fmt/core.h>

using namespace std;

typedef unsigned int uint;

class Car
{
public:
    string brand;
    string model;
    string color;
    string fuel_type;
    string car_type;
    uint year;
    uint price_in_usd;

public:
    Car(string brand, string model, string color, string fuel_type, string car_type, uint year, uint price_in_usd);

    void convertToPln();

    virtual void getData() = 0;
    virtual void getBrand() = 0;
    virtual void getModel() = 0;
    virtual void getColor() = 0;

    virtual string setColor(string) = 0;
    virtual ~Car();
};

#endif