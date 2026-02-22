//  🧨 Case 2 — Const Pointer
//  👉 Meaning
//      int* const p = &x;
//      ✔ pointer is fixed
//      ✔ data can change
//      ❌ pointer cannot move

#include <iostream>

int main()
{
    int x = 10;
    int y = 20;

    int* const p = &x;  // const pointer

    std::cout <<"value in pointer when initialised:"<< *p << std::endl;
    *p = 15;   // ✅ allowed — data can change

    // p = &y; ❌ ERROR — pointer cannot change

    std::cout <<"value in pointer after reassigning new data:"<< *p << std::endl;  // prints 15
}

//  🎯 Interview one-liner
//  Const pointer means the pointer address cannot change after initialization.