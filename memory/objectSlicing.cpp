#include <iostream>

class Animal
{
public:
    int age = 5;

    void speak()
    {
        std::cout << "Animal speaks\n";
    }
};

class Dog : public Animal
{
public:
    int teeth = 42;

    void speak()
    {
        std::cout << "Dog barks\n";
    }
};

int main()
{
    Dog d;

    Animal a = d;  // slicing

    std::cout << "Animal age: " << a.age << std::endl;

    // Dog-specific data lost
}