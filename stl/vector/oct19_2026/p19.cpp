/*
Find lower and upper bounds
For sorted vector {10, 20, 20, 20, 30, 40}, find the range of 20.
Expected: first position 1, one-past-last position 4.
Algorithms: std::lower_bound(), std::upper_bound()
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<20;i++)
    {
        vec.push_back(rand()%100);
    }
    std::cout<<"print vector data\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::sort(vec.begin(),vec.end());
    std::cout<<"print vector after sort data\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    int val;
    std::cout<<"enter value for lower bound find\n";
    std::cin>>val;

    auto lower = std::lower_bound(vec.begin(),vec.end(),val);

    std::cout<<"lower bound value : "<<*lower<<" position : "<<lower -vec.begin()<<std::endl;


    std::cout<<"enter value for upper bound find\n";
    std::cin>>val;

    auto uper = std::upper_bound(vec.begin(),vec.end(),val);

    std::cout<<"uper bound value : "<<*lower<<" position : "<<uper -vec.begin()<<std::endl;
}