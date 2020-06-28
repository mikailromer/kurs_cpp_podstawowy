#include "vectorFunctions.hpp"
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int const count)
{
    std::vector<std::shared_ptr<int>> vec;
    for(int i = 0; i <= count; i++)
    {
        vec.push_back(std::make_shared<int>(i));
    }

    return vec;
}

void print(std::vector<std::shared_ptr<int>>& vec)
{
    for(std::vector<std::shared_ptr<int>>::iterator it = vec.begin(); it!= vec.end(); it++)
    {
        printf("%i", **it);
    }
    printf("\n");
}