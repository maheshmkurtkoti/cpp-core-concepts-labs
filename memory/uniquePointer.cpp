#include <iostream>
#include <memory>

class Dog
{
public:
    Dog()
    {
        std::cout << "Dog born\n";
    }

    ~Dog()
    {
        std::cout << "Dog gone\n";
    }

    void bark()
    {
        std::cout << "Woof!\n";
    }
};

int main()
{
    std::unique_ptr<Dog> d = std::make_unique<Dog>();

    d->bark();

}   // automatic destruction happens here