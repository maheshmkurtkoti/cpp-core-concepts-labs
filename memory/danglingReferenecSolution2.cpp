#include <iostream>

int& f()
{
    static int x = 10;
    return x;
}

int main()
{
    int& ref = f();

    std::cout << ref << std::endl;
}

//  Static keyword
