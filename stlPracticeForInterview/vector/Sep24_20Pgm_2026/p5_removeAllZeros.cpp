//Remove duplicates → sort() + unique() + erase()

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        if(i%2==0)vec.push_back(3);
        else vec.push_back(i);
    }
    std::cout<<"print data\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::sort(vec.begin(),vec.end());

    auto un = std::unique(vec.begin(),vec.end());

    vec.erase(un,vec.end());

    std::cout<<"print data after erase\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}