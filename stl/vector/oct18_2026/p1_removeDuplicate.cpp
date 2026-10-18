#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        if(i%2==0)
            vec.push_back(rand()%100);
        else
        vec.push_back(5);
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