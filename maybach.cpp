#include "maybach.h"

Maybach::Maybach(int year_of_Production, int max_speed, std::string color, std::string engine, std::string type_of_fuel, int amout_of_wheels, std::string type_of_drive)
    : Mercedes(year_of_Production, max_speed, color, engine, type_of_fuel, amout_of_wheels, type_of_drive)
{
    fmt::println("Maybach is being created");
}

void Maybach::info()
{
    fmt::println("This is a Maybach car, it has luxury features.");
}

void Maybach::showOff()
{
    fmt::println("This Maybach is showing off its luxury!");
}

void Maybach::get_model()
{
    fmt::println("The model of this car is {} and it is a {}", model, brand);
}
