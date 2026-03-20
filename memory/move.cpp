#include <iostream>
#include <string>

int main()
{
    std::string a = "Hello";
    
    std::string b = std::move(a);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}

//  Why this matters in real systems
//  
//  In systems like:
//  perception pipelines
//  robotics
//  high-frequency trading
//  game engines
//  
//  Copying large containers repeatedly can destroy performance.
//  Move semantics help transfer ownership cheaply.