#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <fmt/core.h>

class Array
{
private:
    int *arr;

public:
    int size;

public:
    Array(int size);

public:
    void setArray();
    void printArray(int start = 0);
    void sortArray(int i, int j);

    ~Array()
    {
        delete[] arr;
    }
};

#endif