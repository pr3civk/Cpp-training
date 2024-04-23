#include "mercedes.h"
#include <fmt/core.h>
#include "machine.h"

Mercedes::Mercedes(int year_of_Production, int max_speed, std::string color, std::string engine, std::string type_of_fuel, int amout_of_wheels, std::string type_of_drive)
    : Machine(year_of_Production, max_speed, color, engine, type_of_fuel, amout_of_wheels, type_of_drive)
{
    
}

void Mercedes::drive()
{
    fmt::println("standard Mercedes is driving");
}

void Mercedes::stop()
{
    fmt::println("{} is stopping", brand);
}

void Mercedes::accelerate_to_max_speed()
{
    fmt::println("{} is accelerating to max speed", brand);
}

void Mercedes::engine_sound()
{
    fmt::println("{} is making engine sound", brand);
}

void Mercedes::get_brand()
{
    fmt::println("The brand of this car is {}", brand);
}

void Mercedes::get_type()
{
    fmt::println("{}: The type of this car is {}", brand, type);
}
