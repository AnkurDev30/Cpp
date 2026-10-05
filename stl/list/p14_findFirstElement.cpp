//Find first element satisfying a condition

#include<iostream>
#include<list>
#include<algorithm>

int main()
{
    std::list<int>l;

    for(int i=0;i<10;i++)
    {
        l.push_back(i*100);
    }


    for(auto m:l)
    {
        std::cout<<m<<" ";
    }

    std::cout<<"\n";

    auto it=std::find_if(l.begin(),l.end(),[](int x){
        return x==200;
    });

    if(it!=l.end())
    {
        std::cout<<"found\n";
        std::cout<<"index "<<std::distance(l.begin(),it)<<std::endl;
    }
    else
    {
        std::cout<<"not found\n";
    }
}

