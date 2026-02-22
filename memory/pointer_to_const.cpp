//🧨Case 1 — Pointer to Const
//  const int* p;
//    ✔ data is constant
//    ✔ pointer can move
//    ❌ cannot modify value through pointer

#include <iostream>

int main()
{
    int x = 10;
    int y = 20;

    const int* p = &x; // pointer to const
    std::cout<<"value held by pointer before changing:"<<*p<<std::endl;
    // *p = 15; ❌ ERROR — cannot modify data
    p = &y;  // ✅ allowed — pointer can change

    std::cout<<"value held by pointer:"<<*p<<std::endl;
}

//  🎯 Interview one-liner
//  Pointer to const means the pointed data cannot be modified through the pointer.