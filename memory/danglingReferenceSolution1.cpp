#include <iostream>

int f()
{
    int x = 10;
    return x;
}

int main()
{
    int value = f();

    std::cout << value << std::endl;
}

//  Return by value