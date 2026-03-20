//  Modern C++ Extension — Rule of 5
//  
//  With move semantics we add:
//  
//  Move Constructor
//  Move Assignment Operator
//  
//  So total:
//  
//  Destructor
//  Copy Constructor
//  Copy Assignment
//  Move Constructor
//  Move Assignment
//  
//  This is called Rule of 5.

#include <iostream>

class Buffer
{
    int* data;

public:

    Buffer()
    {
        data = new int[5];
        std::cout << "Allocated\n";
    }

    // Copy constructor
    Buffer(const Buffer& other)
    {
        data = new int[5];
        std::cout << "Copied\n";
    }

    // Move constructor
    Buffer(Buffer&& other)
    {
        data = other.data;
        other.data = nullptr;
        std::cout << "Moved\n";
    }

    ~Buffer()
    {
        delete[] data;
        std::cout << "Destroyed\n";
    }
};

int main()
{
    Buffer b1;

    Buffer b2 = std::move(b1);

    return 0;
}