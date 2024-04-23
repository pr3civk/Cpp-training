#ifndef MERCEDES_H
#define MERCEDES_H

#include "machine.h"
#include <fmt/core.h>

// Virtual class 

class Mercedes : public Machine
{
protected:
    const std::string brand = "Mercedes";
    std::string type = "standard";

public:
    Mercedes(int year_of_Production, int max_speed, std::string color, std::string engine, std::string type_of_fuel, int amout_of_wheels, std::string type_of_drive);
    virtual void info()
    {
        fmt::println("This is a Mercedes car, it has no special features.");
    };
    void drive() override;
    void stop() override;
    void accelerate_to_max_speed() override;
    void engine_sound() override;
    void get_brand();
    void get_type();
};

#endif // MERCEDES_H
