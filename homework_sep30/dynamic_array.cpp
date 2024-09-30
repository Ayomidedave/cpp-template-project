#include "dynamic_array.h"
#include <iostream>
#include <algorithm> 

// Constructor
DynamicArray::DynamicArray(int size) : size(size) {
    data = new int[size](); 
}

// Copy constructor
DynamicArray::DynamicArray(const DynamicArray& other) : size(other.size) {
    data = new int[size];   
    std::memcpy(data, other.data, size * sizeof(int)); 
}

// Move constructor
DynamicArray::DynamicArray(DynamicArray&& other) noexcept : data(nullptr), size(0) {
    std::swap(data, other.data);
    std::swap(size, other.size);
}

// Copy assignment operator
DynamicArray& DynamicArray::operator=(const DynamicArray& other) {
    if (this != &other) {  
        delete[] data;     
        size = other.size; 
        data = new int[size]; 
        std::memcpy(data, other.data, size * sizeof(int)); 
    }
    return *this;
}

// Move assignment operator
DynamicArray& DynamicArray::operator=(DynamicArray&& other) noexcept {
    if (this != &other) {  
        delete[] data; 
        data = nullptr;
        size = 0;

        std::swap(data, other.data); 
        std::swap(size, other.size);
    }
    return *this;
}

// Destructor
DynamicArray::~DynamicArray() {
    delete[] data;  
}

// Overload [] operator
int& DynamicArray::operator[](int index) {
    return data[index];  
}

// Determine the size of the array.
int DynamicArray::getSize() const {
    return size;
}

