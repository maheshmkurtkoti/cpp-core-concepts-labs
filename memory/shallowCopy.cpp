//  🧨 Trap 27 — Rule of 3 / Rule of 5 Violation
//  If a class manages dynamic memory, you must define special functions.
//  Otherwise shallow copies occur.

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

    ~Buffer()
    {
        delete[] data;
        std::cout << "Memory deleted\n";
    }
};

int main()
{
    Buffer b1;

    Buffer b2 = b1;   // ❌ shallow copy happens

    return 0;
}