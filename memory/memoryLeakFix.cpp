#include <iostream>
#include <memory>

std::unique_ptr<int> f()
{
    return std::make_unique<int>(10);
}

int main()
{
    auto value = f();

    std::cout << *value << std::endl;

    return 0;
}