//Search for an element

#include<iostream>
#include<set>
int main()
{
    std::set<int>s;

    std::cout<<"enter data:\n";

    for(int i=0;i<10;i++)
    {
        s.insert(rand()%200);
    }
    for(auto x:s)
    {
        std::cout<<x<<" ";
    }
    std::cout<<"\n";

    std::cout<<"search the element\n";

    int id;
    std::cout<<"enter element for search\n";
    std::cin>>id;

    auto se = s.find(id);

    if(se!=s.end())
    {
        std::cout<<"find "<<*se<<std::endl;
    }
    else 
    {
        std::cout<<"not find\n";
    }
}