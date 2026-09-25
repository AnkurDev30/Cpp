//erasing with help of iterator.

#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        vec.push_back(i);
    }
    std::cout<<"print data before\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";


    int a=0;
    std::cout<<"enter data for erase\n";
    std::cin>>a;

    auto f  = std::find(vec.begin(),vec.end(),a);

    for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        if(it==f)
        {
            it =vec.erase(it);
        }
    }
    std::cout<<"print data after erase\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}