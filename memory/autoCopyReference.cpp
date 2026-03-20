#include <iostream>
#include <vector>

class Dog
{
public:
    Dog() { std::cout << "Dog created\n"; }

    Dog(const Dog&)
    {
        std::cout << "Dog copied\n";
    }
};

int main()
{
    std::vector<Dog> dogs(3);

    std::cout << "\nLoop starting\n";

    for (auto d : dogs)   // ❌ copy happens
    //for (auto& d : dogs)  // ✅ reference :no copying happens
    {
        std::cout << "Inside loop\n";
    }
}

//  Using const auto& avoids copying objects while also preventing accidental modification,
//  making iteration more efficient and safer.