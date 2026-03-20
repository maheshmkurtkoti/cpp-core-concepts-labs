#include <iostream>

int& f()
{
    int x = 10;      // local variable on stack
    return x;        // ❌ returning reference to local variable
}

int main()
{
    int& ref = f();  // ref now refers to destroyed memory

    std::cout << "Value: " << ref << std::endl;

    return 0;
}