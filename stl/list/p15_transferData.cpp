#include<iostream>
#include<list>
#include<algorithm>

int main()
{
    std::list<int>l1;
    std::list<int>l2;

    for(int i=0;i<10;i++)
    {
        l1.push_back(i);
    }

    std::cout<<"print data\n";

    for(auto m:l1)
    {
        std::cout<<m<<std::endl;
    }

    auto it=l1.begin();
    for(it;it!=l1.end();it++)
    {
        if(*it%2==0)
        {
            l2.push_back(*it);
            it=l1.erase(it);
        }

    }

    std::cout<<"print data l1 \n";

    for(auto m:l1)
    {
        std::cout<<m<<std::endl;
    }
    std::cout<<"print data l2 \n";
    for(auto m:l2)
    {
        std::cout<<m<<std::endl;
    }
}