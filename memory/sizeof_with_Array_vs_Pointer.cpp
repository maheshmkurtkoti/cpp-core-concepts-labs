#include <iostream>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int* p = arr;

    std::cout << sizeof(arr) << std::endl;
    std::cout << sizeof(p) << std::endl;
}

//  🧠 Why
//  array → total memory
//  
//  pointer → address size
//  🎯 Interview line
//  
//  sizeof(array) gives total array size, sizeof(pointer) gives address size.