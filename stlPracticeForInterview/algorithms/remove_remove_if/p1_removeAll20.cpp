#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;
    int a;

    for(int i=0;i<20;i++)
    {
        if(i%4==0)
        {
            vec.push_back(20);
        }
        else
        {
            vec.push_back(i);
        }
    }

    std::cout<<"befor remove\n";
    for(auto m: vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

   vec.erase(remove(vec.begin(),vec.end(),20),vec.end());

    std::cout<<"after remove\n";
    for(auto m: vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}