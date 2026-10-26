//. Insert and display elements

#include<iostream>
#include<set>

int main()
{
    std::set<int>s;

    std::cout<<"enter element\n";
    for(int i=0;i<10;i++)
    {
        s.insert(rand()%20);
    }
    for(auto x : s)
    {
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
}