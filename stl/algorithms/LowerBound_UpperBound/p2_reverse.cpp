#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        vec.push_back(i);
    }

    std::cout<<"print data\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::reverse(vec.begin(),vec.end());

    std::cout<<"after reverse print data\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";  
}