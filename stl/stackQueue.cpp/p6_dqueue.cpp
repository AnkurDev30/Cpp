#include<iostream>
#include<deque>
int main()
{
    std::deque<int>dq;

    for(int i=0;i<10;i++)
    {
        dq.push_front(i);
    }
    for(auto m:dq)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    for(int i=0;i<10;i++)
    {
        dq.push_back(i);
    }
    for(auto m:dq)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
        for(int i=0;i<10;i++)
    {
        dq.pop_back();
    }
    for(auto m:dq)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    std::cout<<"\n";

    std::cout<<"size = "<<dq.size()<<std::endl;
    for(int i=0;i<10;i++)
    {
        dq.pop_front();
    }
    for(auto m:dq)
    {
        std::cout<<m<<" ";
    }

    if(dq.empty())
    {
        std::cout<<"deque id empty\n";
    }
}