#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    try
    {
        std::cout << "Found: " << easyfind(vec, 2) << std::endl;
    }
    catch (const OcurrenceNotFoundException &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        std::cout << "Found: " << easyfind(vec, 9) << std::endl;
    }
    catch (const OcurrenceNotFoundException &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}