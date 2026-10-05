/*
this program for vector sort, stable sort,count count if min element max element 
*/

#include<iostream>
#include<vector>
#include<algorithm>

class AB
{
    public:
        int a,b;
};
class str{

    public:
        std::string name;
        int a;
};
int main()
{
    AB a1;
    std::vector<AB>vec;

    for(int i=1;i<10;i++)
    {
        a1.a=i*17;
        a1.b=i*19;
        vec.push_back(a1);
    }

    for(auto d:vec)
    {
        std::cout<<"data-> "<<d.a<<" "<<d.b<<std::endl;
    }

    //sort algorithm

    std::sort(vec.begin(),vec.end(),[](const AB a1,const AB a2){
        return a1.a > a2.a;
    });
    std::cout<<"After desending\n";
    for(auto m:vec)
    {
        std::cout<<"data-> "<<m.a<<" "<<m.b<<std::endl;
    }

    str s1;
    std::vector<str>svec;
    std::cout<<"enter student name and marks\n";
    for(int i=0;i<3;i++)
    {
        std::cout<<"enter name \n";
        std::cin>>s1.name;
        std::cout<<"enter marks\n";
        std::cin>>s1.a;


        svec.push_back(s1);
    }
    for(auto m:svec)
    {
        std::cout<<"marks : "<<m.a<<" name : "<<m.name<<std::endl;
    }

    std::stable_sort(svec.begin(),svec.end(),[](const str ax,const str ay){
        return ax.a>ay.a;
    });

    std::cout<<"after stable sort\n";
    for(auto m:svec)
    {
        std::cout<<"marks : "<<m.a<<" name : "<<m.name<<std::endl;
    }

    //find 

    auto it = std::find_if(vec.begin(),vec.end(),[](const AB a1){
        return a1.a==85;
    });

    if(it!=vec.end())
    {
        std::cout<<"find\n";
    }

    int countNum = std::count_if(svec.begin(),svec.end(),[](const str s1){
        return s1.a==45;
    });

    std::cout<<"marks == 45 "<<countNum<<std::endl;

    auto max = std::maximum()


}