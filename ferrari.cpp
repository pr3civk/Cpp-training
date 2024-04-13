#include "ferrari.h"

using namespace std;

Ferrari::Ferrari(string brand, string model, string color, string fuel_type, string car_type, uint year, uint price_in_usd)
    : Car(brand, model, color, fuel_type, car_type, year, price_in_usd)
{
    cout << "Ferrari constructor called" << endl;
}

void Ferrari::getData()
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Fuel type: " << fuel_type << endl;
    cout << "Car type: " << car_type << endl;
    cout << "Year: " << year << endl;
    cout << "Price : " << price_in_usd << "USD" << endl;
}

void Ferrari::getBrand()
{
    cout << "brand: " << brand << endl;
}

void Ferrari::getModel()
{
    cout << "model: " << model << endl;
}

void Ferrari::getColor()
{
    cout << "color: " << color << endl;
}

string Ferrari::setColor(string new_color)
{
    color = new_color;
    return color;
}
