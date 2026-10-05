/*
Count an element

Count how many times a number occurs using std::count().
*/

#include<iostream>
#include<list>
#include<algorithm>

int main()
{
    std::list<int>l;

    for(int i=0;i<10;i++)
    {
        if(i%2==0)l.emplace_back(6);
        else l.emplace_back(i);
    }
    for(auto m:l)
    {
        std::cout<<"data : "<<m<<" ";
    }
    std::cout<<"\n";

    int counT = std::count_if(l.begin(),l.end(),[](int x){
        return x ==6;
    });

    std::cout<<"no of count = "<<counT<<std::endl;
}