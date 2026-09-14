/**
Erase all even numbers using iterators
*/
#include<iostream>
#include<vector>
int main()
{
    std::vector<int>vec;
    int a;
    for(int i=0;i<500;i++)
    {
        vec.push_back(i);
    }
    for(auto it:vec)
    {
        std::cout<<it<<" ";
    }
    std::cout<<"\n";
    for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        if(*it%2==0)
        {
            it = vec.erase(it);
        }
    }
    std::cout<<"remove even\n";
    for(auto it:vec)
    {
        std::cout<<it<<" ";
    }
    std::cout<<"\n";
}