#include "machine.h"
#include <fmt/core.h>

using namespace std;

Machine::Machine(int year_of_Production, int max_speed, std::string color, std::string engine, std::string type_of_fuel, int amount_of_wheels, std::string type_of_drive)
{
}

void Machine::drive()
{
    fmt::println("{} is driving", model);
}

void Machine::stop()
{
    fmt::println("{} is stopping", model);
}

int Machine::get_amout_of_wheels()
{
    return amout_of_wheels;
}

std::string Machine::get_type_of_drive()
{
    return type_of_drive;
}

void Machine::set_type_of_drive(std::string type_of_drive)
{
    this->type_of_drive = type_of_drive;
}
