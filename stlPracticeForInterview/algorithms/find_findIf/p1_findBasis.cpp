//find algorithm practice.
#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;
    for(int i=9;i>=0;i--)
    {
        vec.push_back(i*3);
    }
    for(auto m:vec)
    {
        std::cout<<m<<std::endl;
    }
    //std::vector<int>::iterator it;
    auto it=find(vec.begin(),vec.end(),21);

    if(it!=vec.end())
    {
        std::cout<<"find "<<*it<<std::endl;
    }
    else
    {
        std::cout<<"not found\n";
    }
}