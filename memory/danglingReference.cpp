#include <iostream>

int& f()
{
    int x = 10;
    return x;     // dangerous
}

void disturbStack()
{
    int a = 100;
    int b = 200;
    int c = 300;
}

int main()
{
    int& ref = f();

    disturbStack();   // stack memory reused

    std::cout << "Value: " << ref << std::endl;

    return 0;
}