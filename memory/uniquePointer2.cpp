#include <iostream>
#include <memory>

class Cat
{
public:
    Cat() { std::cout << "Cat created\n"; }
    ~Cat() { std::cout << "Cat destroyed\n"; }
};

void test()
{
    std::unique_ptr<Cat> c = std::make_unique<Cat>();
}

int main()
{
    test();

    std::cout << "Back in main\n";
}