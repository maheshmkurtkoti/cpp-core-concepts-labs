#include <iostream>
#include <memory>

class Animal
{
public:
    virtual void speak()
    {
        std::cout << "Animal speaks\n";
    }

    virtual ~Animal() = default;
};

class Dog : public Animal
{
public:
    void speak() override
    {
        std::cout << "Dog barks\n";
    }
};

int main()
{
    std::unique_ptr<Animal> a = std::make_unique<Dog>(); //Smart pointers

    a->speak();

    return 0;
}

