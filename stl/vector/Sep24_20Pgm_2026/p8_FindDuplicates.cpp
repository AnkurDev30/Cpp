//Find duplicates
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
int main()
{
    std::vector<int>vec;
    std::map<int,int>mp;
    for(int i=0;i<20;i++)
    {
        if(i%5==0)vec.push_back(5);
        else vec.push_back(i);
    }
    std::cout<<"print data\n";

    for(auto f:vec)
    {
        std::cout<<f<<" ";
    }
    std::cout<<"\n";
    for(int i=0;i<vec.size()-1;i++)
    {
        int k=vec[i];
        mp[k]++;
    }
    std::cout<<"duplicate element : \n";
    for(auto m:mp)
    {
        if(m.second>1)
        {
            std::cout<<m.first<<" "<<m.second<<std::endl;
        }
    }
    std::cout<<"\n";
}
