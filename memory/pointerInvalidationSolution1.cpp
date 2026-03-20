#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;

    v.push_back(10);
    v.push_back(20);

    v.push_back(30);

    int* p = &v[0];   // get pointer AFTER modifications

    std::cout << *p << std::endl;
}