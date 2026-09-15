#include<iostream>
#include<vector>
int main()
{
    std::vector<int>vec = {1,2,3,4,5};

    [&vec]()
    {
        std::cout<<vec[0]<<std::endl;
        std::cout<<vec[1]<<std::endl;
        std::cout<<vec[2]<<std::endl;
        std::cout<<vec[3]<<std::endl;
        std::cout<<vec[4]<<std::endl;
        vec[0]=5;
        std::cout<<vec[0]<<std::endl;
    }();
}