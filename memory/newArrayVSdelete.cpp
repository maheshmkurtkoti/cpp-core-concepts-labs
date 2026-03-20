#include <iostream>

int main()
{
    int* arr = new int[5];

    delete arr;   // ❌ WRONG

    //delete[] arr; // Correct

    return 0;
}

//  delete is used for memory allocated with new, while delete[] must be used for memory allocated with new[]. 
//  Using delete on an array leads to undefined behavior because destructors for all elements may not be called correctly.