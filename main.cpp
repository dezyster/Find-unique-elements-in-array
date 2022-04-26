#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

void findUnique(std::vector<int> vec)
{
    int i = 0;
    while(true)
    {
        auto vecSize = vec.size();

        if(i == vecSize)
        {
            return;
        }

        for(; i < vecSize; i++)
        {
            vec.erase(std::remove(vec.begin() + i + 1, vec.end(), vec[i]), vec.end());
            if(vecSize != vec.size())
            {
                i++;
                break;
            }
            else
            {
                std::cout << vec[i] << " is Unique!" << std::endl;
            }
        }
    }
}

int main()
{
    std::vector<int> vec{ 19,3,6,3,7,9,4,21,8,7,5,9,5,9,3,13};

    findUnique(vec);
    return 0;
}
