#include <iostream>
//  What it does:
//      Includes the input-output stream library
//      Gives access to cout, cin, endl
//  Interview tip:
//      iostream provides stream-based I/O in C++.

using namespace std;
//  What it does:
//      Allows using cout instead of std::cout
//      Brings standard library names into global scope
//  ⚠️ Interview note (good to mention):
//      In production code we usually avoid this in headers to prevent name pollution.

int* getSafePointer()
//  Meaning:
//      Function returns a pointer to int
//      Return type = int*
//  Important interviewer point:
//      This function will return an address, not a value.
{
    int* x = new int(10);
    //  Step 1 — Heap allocation
    //    Allocates memory on the heap
    //    Stores value 10
    //    Returns address of allocated memory
    //  Step 2 — Pointer creation
    //    x is a pointer variable (on stack)
    //    It stores the heap address
    return x;
    //  What happens:
    //    Returns heap memory address to caller
    //    Only the pointer variable x dies
    //    Heap memory remains alive
}

int main() {
    int* ptr = getSafePointer();
    //  What happens:
    //    Function is called
    //    Heap memory created inside function
    //    Address returned
    //    ptr stores that address
    
    cout << *ptr << endl;
    //  🔍 Breakdown
    //  *ptr
    //      Dereferences pointer
    //      Reads value stored at heap location
    //      Value = 10
    //  cout
    //      Prints the value.

    delete ptr; // ✅ prevent memory leak
    // 🔍 What delete does
    //      Frees heap memory
    //      Prevents memory leak
}