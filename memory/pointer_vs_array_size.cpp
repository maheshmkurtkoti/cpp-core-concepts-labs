#include <iostream>

void printSize(int* arr)
{
    std::cout <<"size of array through printsize:"<< sizeof(arr) << std::endl;
}

int main()
{
    int arr[10];
    printSize(arr);
    std::cout<<"size of array:"<<sizeof(arr)<<std::endl;
}

//  🧠 Why
//  Array decays to pointer when passed to function.
//  Inside function:
//  arr is int*

//  🎯 Interview one-liner
//  Arrays decay to pointers when passed to functions, so sizeof gives pointer size.