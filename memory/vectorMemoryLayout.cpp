#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {10,20,30,40};

    std::cout << "Vector size: " << v.size() << std::endl;
    std::cout << "Vector capacity: " << v.capacity() << std::endl;

    std::cout << "First element address: " << &v[0] << std::endl;

    for(int i=0;i<v.size();i++)
    {
        std::cout << "Index " << i 
                  << " Address " << &v[i]
                  << " Value " << v[i] << std::endl;
    }
}

//  A vector contains three pointers internally: start, finish, and end_of_capacity. 
//  The actual elements are stored in contiguous memory on the heap, 
//  which allows random access like an array while supporting dynamic resizing.