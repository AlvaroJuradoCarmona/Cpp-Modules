#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T const *array, int length, void (*f)(T const &))
{
    for (int i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>
void iter(T *array, int length, void (*f)(T &))
{
    for (int i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>
void printNumberMultiplyByFive(T const &i)
{
    std::cout << i * 5 << " ";
}

#endif