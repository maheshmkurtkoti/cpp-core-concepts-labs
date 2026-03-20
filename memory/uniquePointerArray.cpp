#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int[]> arr = std::make_unique<int[]>(5);

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for(int i = 0; i < 5; i++)
    {
        std::cout << "Index " << i
                  << " Value " << arr[i]
                  << std::endl;
    }

    return 0;
}