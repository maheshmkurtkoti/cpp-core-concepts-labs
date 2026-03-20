#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5};

    for(size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";

        if(v[i] == 3)
        {
            v.push_back(10);
        }
    }
}

//  Using Index