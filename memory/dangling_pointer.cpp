#include <iostream>
//✅Includes the input-output stream library
//✅ Needed for cout and endl
//✅ Comes from the C++ standard library

using namespace std;
//✅ Allows us to write cout instead of std::cout
//⚠️ In production code, often avoided in headers to prevent namespace pollution
//This brings standard library names into the global namespace.

int* getDanglingPointer() //function definition
//✅ Function returns a pointer to int
//👉 Return type = int*
//👉 Meaning: function promises to return an address of an integer
{
    int x = 10;
    //✅ x is created on the stack
    //✅ Lifetime = only inside this function
    //✅ Memory is automatically destroyed when function ends
    return &x;  // ❌ returning address of local variable
    //✅ Gets the address of local variable x
}

int main() {
    int* ptr = getDanglingPointer();//pointer assignment
    //Step-by-step:
    //Function is called
    //It returns address of destroyed variable
    //ptr now holds invalid address
    cout << *ptr << endl; // undefined behavior
    //Breakdown:
    //  *ptr → dereference pointer
    //  Program tries to read memory at invalid location
    //Result:
    //  ❗ Undefined Behavior
    //Possible outcomes:
    //  prints garbage
    //  prints 10 (sometimes — dangerous illusion)
    //  crashes
    //  works today, fails tomorrow
}