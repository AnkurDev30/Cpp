//15. Move zeros to end
#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<20;i++)
    {
        if(i%2==0)vec.push_back(4);
        else if(i%5==0)vec.push_back(0);
        else vec.push_back(i);
    }
    std::cout<<"print data\n";
    for(auto m:vec)
    {
        std::cout<<m<< " ";
    }
    std::cout<<"\nmove one side zero\n";

    std::stable_partition(vec.begin(),vec.end(),[](int x){
        return x!=0;
    });

    std::cout<<"print data after partition\n";
    for(auto m:vec)
    {
        std::cout<<m<< " ";
    }
    std::cout<<"\n";
}