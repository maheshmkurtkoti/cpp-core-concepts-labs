#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr = {10, 20, 30, 40, 50};

    for (size_t i = 0; i < arr.size(); i++)
    {
        std::cout << "Index " << i 
                  << " Value " << arr[i] 
                  << std::endl;
    }

    return 0;
}