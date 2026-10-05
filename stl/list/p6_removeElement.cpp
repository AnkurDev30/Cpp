
/*
Remove one element using iterator

Find the first 20.
Erase only that element.
*/
#include<iostream>
#include<list>

#include<algorithm>

int main()
{
    struct Lmabda
    {
        int m,k;
    };

    Lmabda a;

    std::list<Lmabda>l;
    int s=1000;
    int k=200;
    for(int i=0;i<10;i++)
    {
        a.m=s++;
        a.k=k--;

        l.emplace_back(a);
    }
    std::cout<<"print data\n";

    for(auto m:l)
    {
        std::cout<<m.m<<" "<<m.k<<std::endl;
    }

    auto f = std::find_if(l.begin(),l.end(),[](const Lmabda li){
        return li.m==1003;
    });


    if(f!=l.end())
    {
        f=l.erase(f);
    }

    std::cout<<"print data after remove\n";

    for(auto m:l)
    {
        std::cout<<m.m<<" "<<m.k<<std::endl;
    }  
}