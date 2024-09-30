#pragma once
#include <iostream>
#include <cstring> // For std::memcpy

class DynamicArray {
private:
    int* data;  // Pointer to dynamic memory
    int size;   // Size of the array

public:
    // Constructor
    DynamicArray(int size);

    // Copy constructor
    DynamicArray(const DynamicArray& other);

    // Move constructor
    DynamicArray(DynamicArray&& other) noexcept;

    // Copy assignment operator
    DynamicArray& operator=(const DynamicArray& other);

    // Move assignment operator
    DynamicArray& operator=(DynamicArray&& other) noexcept;

    // Destructor
    ~DynamicArray();

    // Overload [] operator
    int& operator[](int index);

    // Get the size
    int getSize() const;

    // Stream insertion operator (optional)
    friend std::ostream& operator<<(std::ostream& os, const DynamicArray& arr);
};