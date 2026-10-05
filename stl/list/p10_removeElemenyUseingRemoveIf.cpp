//remove element using remove if

#include<iostream>
#include<list>
#include<algorithm>
int main()
{
    struct stu
    {
        int m,k;

    };
    stu s1;
    std::list<stu>l;

    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            s1.m=9;
            s1.k=10;
        }
        else
        {
            s1.m=i;
            s1.k=i+1;
        }
        l.push_back(s1);
    }

    std::cout<<"print data\n";

    for(auto m:l)
    {
        std::cout<<m.m<<" "<<m.k<<std::endl;
    }

    l.remove_if([](const stu &s){
        return s.m==9;
    });

    std::cout<<"after remove :print data\n";

    for(auto m:l)
    {
        std::cout<<m.m<<" "<<m.k<<std::endl;
    }
}