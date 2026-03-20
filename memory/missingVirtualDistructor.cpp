#include <iostream>

class Animal
{
public:
    ~Animal() // Base class distructor is missing Virtual Keyword
    // virtual ~Animal() // corrected line of code
    {
        std::cout << "Animal destructor\n";
    }
};

class Dog : public Animal
{
public:
    ~Dog()
    {
        std::cout << "Dog destructor\n";
    }
};

int main()
{
    Animal* a = new Dog();  // Dog object

    delete a;               // deleting through base pointer

    return 0;
}