#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;

    v.push_back(10);
    v.push_back(20);

    int* p = &v[0];   // pointer to first element

    std::cout << "Before push_back\n";
    std::cout << "Pointer value: " << *p << std::endl;

    v.push_back(30);   // may cause reallocation

    std::cout << "After push_back\n";
    std::cout << "Pointer value: " << *p << std::endl;  // ❌ dangerous
}

//I mportant Rule

// Pointers / references become invalid when:

// vector
//     push_back
//     resize
//     reserve
//     insert
// 
// may cause reallocation.