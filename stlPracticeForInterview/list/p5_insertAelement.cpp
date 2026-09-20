/**6. Insert at a specific position */

#include<iostream>
#include<list>
#include<algorithm>

struct Abc
{
    int m;
    int r;
};
int main()
{
    Abc c;

    std::list<Abc>l;
    int a=100;
    int b=200;
    for(int i=0;i<5;i++)
    {
        c.m=a++;
        c.r=b++;
        l.push_back(c);
    }

    Abc insertData = {500,5000};

    auto f = std::find_if(l.begin(),l.end(),[](const Abc a){
        return a.m==101;
    });

   // if(f!=l.end())
    {
        l.insert(f,insertData);
    }
    

    std::cout<<"print data\n";

    for(auto m:l)
    {
        std::cout<<m.m<<" "<<m.r<<std::endl;
    }
}