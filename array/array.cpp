#include "array.h"
#include <iostream>
#include <fmt/core.h>

Array::Array(int size)
{
    this->size = size + 1;
    arr = new int[size];
}

void Array::setArray()
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
}

void Array::printArray(int start)
{
    fmt::print("[ ");
    for (int i = start; i < size; i++)
    {
        if (i < size - 1)
        {
            fmt::print("{}, ", arr[i]);
        }
        else
        {
            fmt::print("{} ", arr[i]);
        }
    }
    fmt::println("]");
}

void Array::sortArray(int i, int j)
{
    int pivot, temp;
    if (size > 1)
    {
        pivot = arr[size - 1] / 2;
        i = 0;
        j = size - 1;

        while (i < j)
        {
            while (arr[i] < pivot)
            {
                i++;
            }
            while (arr[j] > pivot)
            {
                j--;
            }
            if (i < j)
            {
                std::swap(arr[i], arr[j]);
            }
        }
        sortArray(i, j);
    }
}
