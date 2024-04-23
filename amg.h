#ifndef AMG_H
#define AMG_H

#include "mercedes.h"

class AMG : public Mercedes
{
private:
    const std::string model = "AMG";
    int price;

public:
    AMG(int year_of_Production, int max_speed, std::string color, std::string engine, std::string type_of_fuel, int amout_of_wheels, std::string type_of_drive, int size_of_wheels, int price);

    int size_of_wheels;

    AMG &operator+=(int value);

    

    void info() override;
    void get_price();
    void showOff();
    void get_model();
    void get_size_of_wheels();
    AMG &operator++(int);
    AMG &operator++();
};

#endif // AMG_H