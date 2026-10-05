//find missing number

#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;

    for(int i=0;i<20;i++)
    {
        vec.push_back(rand()%20);
    }
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;
    std::sort(vec.begin(),vec.end());
    std::cout<<"first sort\n"<<std::endl;
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;

    auto un = std::unique(vec.begin(),vec.end());

    vec.erase(un,vec.end());
    std::cout<<"remove duplicate\n"<<std::endl;
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;

    //find mising num.

    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]+1!=)
    }
}