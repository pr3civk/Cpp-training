#include "amg.h"
#include <fmt/core.h>

AMG::AMG(int year_of_Production, int max_speed, std::string color, std::string engine, std::string type_of_fuel, int amout_of_wheels, std::string type_of_drive, int size_of_wheels, int price)
    : Mercedes(year_of_Production, max_speed, color, engine, type_of_fuel, amout_of_wheels, type_of_drive)
{
    this->size_of_wheels = size_of_wheels;
    this->price = price;
    fmt::println("AMG is being created");
}

AMG &AMG::operator+=(int value)
{
    price += value;
    return *this;
}

void AMG::info()
{
    fmt::println("This is an AMG car, it has high performance features.");
}

void AMG::get_price()
{
    fmt::println("The price of this car is {}", price);
}

void AMG::showOff()
{
    fmt::println("This AMG is showing off its power!");
}

void AMG::get_model()
{
    fmt::println("The model of this car is {}", model);
}

void AMG::get_size_of_wheels()
{
    fmt::println("The size of the wheels of this car is {}", size_of_wheels);
}

AMG &AMG::operator++(int)
{
    this->size_of_wheels++;
    return *this;
}

AMG &AMG::operator++()
{
    this->size_of_wheels++;
    return *this;
}