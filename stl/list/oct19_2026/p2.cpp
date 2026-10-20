//Insert elements at the front and back using push_front() and push_back().
#include<iostream>
#include<list>

int main()
{
    std::list<int>lis;

    for(int i=0;i<10;i++)
    {
        lis.push_back(i+9);
    }
    std::cout<<"print data\n";

    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    int front = 0;
    int back =0;
    std::cout<<"enter data for push front\n";
    std::cin>>front;
    std::cout<<"enter data for push back\n";
    std::cin>>back;

    lis.push_front(front);
    lis.push_back(back);

    std::cout<<"print data after push back and front\n";

    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}