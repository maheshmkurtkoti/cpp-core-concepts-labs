#include <iostream>

int main()
{
    int x = 4;

    if(x & 1 == 0)
        std::cout << "Even\n";
    else
        std::cout << "Odd\n";

    return 0;
}