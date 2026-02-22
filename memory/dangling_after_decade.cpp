#include <iostream>

int main()
{
    int* p = new int(10);
    delete p;
    // p = nullptr; //fix
    std::cout << "pointer value after deletion:" << *p << std::endl; // ❌ dangling pointer
}

// 🎯 Interview line
// Always nullify pointers after delete to avoid dangling access.