#include <iostream>

int* f()
{
    int* p = new int(10);   // heap allocation
    return p;
}

int main()
{
    int* value = f();

    std::cout << "Value = " << *value << std::endl;

    delete value;   // important if missed memory leak occurs

    return 0;
}