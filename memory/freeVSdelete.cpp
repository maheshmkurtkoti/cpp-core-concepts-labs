#include <iostream>

class Car {
public:
    Car() {
        std::cout << "Constructor called\n";
    }

    ~Car() {
        std::cout << "Destructor called\n";
    }
};

int main()
{
    Car* c = new Car();

    delete c;
    //free(c);
}

// delete is a C++ operator that calls the object's destructor and then deallocates memory, 
// while free is a C function that only releases the memory without invoking destructors.