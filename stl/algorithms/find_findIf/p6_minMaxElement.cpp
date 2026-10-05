#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;
    for(int i =1;i<100;i++)
    {
        vec.push_back(i);
    }

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<" \n";

    auto it = min_element(vec.begin(),vec.end());
    auto im = max_element(vec.begin(),vec.end());

    if(it!=vec.end())
    {
        std::cout<<"min = "<<*it<<std::endl;
    }

    if(im!=vec.end())
    {
        std::cout<<"min = "<<*im<<std::endl;
    }
}