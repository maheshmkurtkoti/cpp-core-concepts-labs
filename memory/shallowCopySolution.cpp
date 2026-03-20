//  ✔ Correct Solution — Rule of 3
//  
//  If a class manages resources, define:
//  
//  Destructor
//  Copy Constructor
//  Copy Assignment Operator

#include <iostream>

class Buffer
{
    int* data;

public:

    Buffer()
    {
        data = new int[5];
        std::cout << "Memory allocated\n";
    }

    // Copy constructor (deep copy)
    Buffer(const Buffer& other)
    {
        data = new int[5];

        for(int i=0;i<5;i++)
            data[i] = other.data[i];

        std::cout << "Deep copy created\n";
    }

    ~Buffer()
    {
        delete[] data;
        std::cout << "Memory deleted\n";
    }
};

int main()
{
    Buffer b1;

    Buffer b2 = b1;   // deep copy now

    return 0;
}