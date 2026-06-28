//auto keyword.
#include<iostream>
#include<vector>
int main()
{
    std::vector<int>vec;
    for(auto i=0;i<5;i++)
    {
        vec.push_back(i*3);
    }
    for(auto &u:vec)
    {
        std::cout<<"auto demo: "<<u<<std::endl;
    }
}