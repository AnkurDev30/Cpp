//how can we check duplicate element

#include<iostream>


#include<map>

int main()
{
    
    std::map<int,int>m;
    int id=1000;
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            m[id++]=7;
        }
        else
        {
            m[id++]=i;
        }
    }

    std::cout<<"data1\n";
    for(auto p:m)
    {
        std::cout<<p.first<<" "<<p.second<<std::endl;
    }

    m.insert({1010,6});
    std::cout<<"data2\n";
    m[1000]=12;
    for(auto p:m)
    {
        std::cout<<p.first<<" "<<p.second<<std::endl;
    }
    m.erase(1000);
    std::cout<<"data2\n";
    for(auto p:m)
    {
        std::cout<<p.first<<" "<<p.second<<std::endl;
    }
}