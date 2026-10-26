//Count occurrences of an element

#include<iostream>
#include<set>

int main()
{
    std::set<int>se;

    for(int i=0;i<10;i++)
    {
        se.insert(5*i);
    }
    std::cout<<"print data\n";

    for(auto x:se)
    {
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    int countID=0;
    std::cout<<"enter count id\n";
    std::cin>>countID;


    int countVar = se.count(countID);

    std::cout<<"number of times = "<<countVar<<std::endl;
}