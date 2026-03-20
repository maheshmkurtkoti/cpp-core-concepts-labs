#include <iostream>

class Animal
{
public:
    virtual void speak()
    {
        std::cout << "Animal speaks\n";
    }
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
    Dog d;

    Animal* a = &d;

    a->speak();

    return 0;
}