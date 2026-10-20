//Copy one list into another and modify the copy without changing the original.
#include<iostream>
#include<list>

int main()
{
    std::list<char>lis;

    for(char i='A';i<'k';i++)
    {
        lis.push_back(i);
    }
    std::cout<<"print list\n";
    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::list<char>lis2;
    lis=lis2;
    std::cout<<"print list2\n";
    for(auto m:lis2)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::cout<<"modify list 1 and list 2\n";

    for(std::list<char>::iterator it = lis.begin();it!=lis.end();it++)
    {
        *it = *it+5;
    }

    std::cout<<"print list2 after modify\n";
    for(auto m:lis2)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";  

}