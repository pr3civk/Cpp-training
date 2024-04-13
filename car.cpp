#include "car.h"
#include <fmt/core.h>

Car::Car(string brand, string model, string color, string fuel_type, string car_type, uint year, uint price_in_usd)
    : brand(brand), model(model), color(color), fuel_type(fuel_type), car_type(car_type), year(year), price_in_usd(price_in_usd)
{
    fmt::println("Creating a car");
}

void Car::convertToPln()
{
    float price_in_pln = price_in_usd * 3.95;
    fmt::println("Price: {}PLN", price_in_pln);
}

Car::~Car()
{
    fmt::println("Destroying a car");
}
