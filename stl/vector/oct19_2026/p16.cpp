/*
Remove duplicate elements
Input: {1, 2, 2, 3, 3, 4}.
Expected: {1, 2, 3, 4}.
Algorithms: std::sort(), std::unique(), erase()
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;
    for(int i=0;i<10;i++)
    {
        if(i%3==0)vec.push_back(2);
        else
        vec.push_back(rand()%100);
    }

    std::cout<<"print vector\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::sort(vec.begin(),vec.end());
    auto m = std::unique(vec.begin(),vec.end());

    vec.erase(m,vec.end());
    std::cout<<"print vector after remove duplicate\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}