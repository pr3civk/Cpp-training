#ifndef MAYBACH_H
#define MAYBACH_H

#include "mercedes.h"

// class normal inheritance

class Maybach : protected Mercedes
{
private:
    const std::string model = "Maybach";

public:
    Maybach(int year_of_Production, int max_speed, std::string color, std::string engine, std::string type_of_fuel, int amout_of_wheels, std::string type_of_drive);
    void info() override;
    void showOff();
    void get_model();
};

#endif // MAYBACH_H