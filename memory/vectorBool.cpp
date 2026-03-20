#include <iostream>
#include <vector>

int main()
{
    std::vector<bool> v = {true, false, true};

    auto x = v[0];

    std::cout << x << std::endl;
}