//find >= and >

#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    std::vector<int>vec;
    static int a;
    for(int i=0;i<20;i++)
    {
        vec.push_back(a);
        if(i%2==0)a++;
        if(i%3==0)a=90;
        if(i%4==0)a=a*2;
        if(i%5==0)a=a/2;
        if(i%6==0)a=a+10;
    }
    std::cout<<"print data\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::sort(vec.begin(),vec.end());

    std::cout<<"print data after sort\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    auto it =std::unique(vec.begin(),vec.end());
    vec.erase(it,vec.end());
    std::cout<<"print data removing duplicate\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";    

    auto im = std::lower_bound(vec.begin(),vec.end(),100);

    std::cout<<"lower bound = "<<*im<<std::endl;

    auto ic = std::upper_bound(vec.begin(),vec.end(),182);

    std::cout<<"lower bound = "<<*ic<<std::endl;

    vec.insert(im,101);
    vec.insert(ic,191);

    std::cout<<"print data insert data\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n"; 
}