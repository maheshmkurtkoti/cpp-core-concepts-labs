//  🧨 Case 3 — Const Pointer to Const (ultimate boss)
//  👉 Meaning
//      const int* const p = &x;
//      
//      ❌ cannot change data
//      ❌ cannot change pointer

#include <iostream>

int main()
{
    int x = 10;
    int y = 20;

    const int * const p = &x;

    // *p = 30; ❌ not allowed
    // p = &y;  ❌ not allowed

    std::cout << *p << std::endl;  // prints 10
}

//  🎯 Interview one-liner
//  Const pointer to const means neither the pointer nor the pointed data can be modified.