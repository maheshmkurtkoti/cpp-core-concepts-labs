#include <iostream>

int main()
{
    int x = 0;

    // set bit 3
    x = x | (1 << 3);

    std::cout << "After setting bit 3: " << x << std::endl;

    // check bit
    if(x & (1 << 3))
        std::cout << "Bit 3 is set\n";

    // toggle bit
    x = x ^ (1 << 3);

    // clear bit
    x = x & ~(1 << 3);

    std::cout << "After toggle: " << x << std::endl;

    return 0;
}