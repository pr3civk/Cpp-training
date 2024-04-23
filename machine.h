#ifndef MACHINE_H
#define MACHINE_H

#include <iostream>
#include <string>

// Abstract class

class Machine
{
public:
    virtual void drive() = 0;
    virtual void stop() = 0;
    virtual void accelerate_to_max_speed() = 0;
    virtual void engine_sound() = 0;

protected:
    Machine(int year_of_Production, int max_speed, std::string color, std::string engine, std::string type_of_fuel, int amount_of_wheels, std::string type_of_drive);

    int year_of_Production;
    int max_speed;
    std::string brand;
    std::string model;
    std::string color;
    std::string engine;
    std::string type_of_fuel;

    int amout_of_wheels;
    int get_amout_of_wheels();
    std::string type_of_drive;

    void set_type_of_drive(std::string type_of_drive);
    std::string get_type_of_drive();
};

#endif // MACHINE_H
