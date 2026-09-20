#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        vec.push_back(i);
    }
    std::cout<<"before \n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;

    std::replace(vec.begin(),vec.end(),5,11);

    std::cout<<"after \n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;
}