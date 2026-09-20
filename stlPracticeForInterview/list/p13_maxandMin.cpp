//Find minimum and maximum
#include<iostream>
#include<list>
#include<algorithm>

int main()
{
    std::list<int>l;

    for(int i=0;i<10;i++)
    {
        l.push_back(i*19);
        l.push_front(i*10);
    }

    std::cout<<"print data\n";

    for(auto m:l)
    {
        std::cout<<m<<" ";
    }
    std::cout<<" \n";

    auto min = std::min_element(l.begin(),l.end());
    auto max = std::max_element(l.begin(),l.end());

    std::cout<<"max = "<<*max<<" min "<<*min<<std::endl;
}