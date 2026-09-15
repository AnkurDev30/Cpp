#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;
    int a;
    for(int i=100;i>=1;i--)
    {
        vec.push_back(i);
    }
    std::cout<<"before shorting\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;
    std::sort(vec.begin(),vec.begin()+70);
    std::cout<<"after shorting\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;
}