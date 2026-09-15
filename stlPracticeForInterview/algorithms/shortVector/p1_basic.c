#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;
    for(int i=0;i<5;i++)
    {
        int p;
        std::cout<<"enter var"<<std::endl;
        std::cin>>p;
        vec.push_back(p);
    }
    std::cout<<"before shorting\n";
    for(auto p:vec)
    {
        std::cout<<p<<" ";
    }
    std::cout<<std::endl;

    //now shorting.
    std::sort(vec.begin(),vec.end());

    std::cout<<"after shorting\n";
    for(auto p:vec)
    {
        std::cout<<p<<" ";
    }
    std::cout<<std::endl;    
}