#include <iostream>
#include <cstdlib>

class Car {
public:
    Car() {
        std::cout << "Constructor called\n";
    }
};

Car* c = new Car();// constructor is called with new

delete c;

Car* c = (Car*) malloc(sizeof(Car));// constructor is NOT called

delete c;
//free(c);