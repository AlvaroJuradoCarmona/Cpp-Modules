#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main()
{
    // Test default constructor
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;

    // Test constructor with size parameter
    Array<int> numbers(MAX_VAL);
    std::cout << "Numbers array size: " << numbers.size() << std::endl;

    // Test element assignment and access
    for (unsigned int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = i;
    }

    // Test copy constructor
    Array<int> copy(numbers);
    std::cout << "Copy array size: " << copy.size() << std::endl;

    // Test assignment operator
    Array<int> assigned;
    assigned = numbers;
    std::cout << "Assigned array size: " << assigned.size() << std::endl;

    // Verify that modifying the original array does not affect the copy
    numbers[0] = 999;
    std::cout << "Original array first element: " << numbers[0] << std::endl;
    std::cout << "Copy array first element: " << copy[0] << std::endl;
    std::cout << "Assigned array first element: " << assigned[0] << std::endl;

    // Test out-of-bounds access
    try
    {
        numbers[-1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}