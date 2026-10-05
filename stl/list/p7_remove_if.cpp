/**Remove all occurrences of a value */

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
        if(i%3==0)
        s1.m=1000;
        else
        s1.m=2000;

        s1.k=500;

        l.push_back(s1);
    }

    std::cout<<"print before data\n";

    for(auto m:l)
    {
        std::cout<<m.m<<" "<<m.k<<std::endl;
    }

    std::cout<<"remove after\n";
    l.remove_if([](const stu s2){
        return s2.m==1000;
    });

   /*l.sort();*/ 

 //   auto f = std::unique(l.begin(),l.end());4

  /*  l.erase(std::remove_if(l.begin(),l.end(),[](const stu s2){
        return s2.m==1000;
    }),l.end());*/

  //  std::cout<<"print  data after\n";

    for(auto m:l)
    {
        std::cout<<m.m<<" "<<m.k<<std::endl;
    }

}