#include <iostream>
#include <memory>

class Car
{
public:
    Car() { std::cout << "Car created\n"; }
    ~Car() { std::cout << "Car destroyed\n"; }
};

int main()
{
    std::shared_ptr<Car> c1 = std::make_shared<Car>();

    {
        std::shared_ptr<Car> c2 = c1;
        std::cout << "Two owners\n";
    }

    std::cout << "One owner left\n";
}