#include <iostream>

int main()
{
    int arr[5] = {10,20,30,40,50};
    int* p = arr;
    std::cout << "Index 0 :" <<  *p      << std::endl;   
    std::cout << "Index 2 :" << *(p + 2) << std::endl;
    std::cout << "Index 3 :" << *(p + 3) << std::endl;
}


//  🎯 Interview line
//  Pointer arithmetic advances by sizeof(pointed type), not by bytes.