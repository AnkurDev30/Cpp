//Delete an element

#include<iostream>
#include<set>

int main()
{
    std::set<char> s;

    for(int i=0;i<10;i++)
    {
        s.insert('A'+i);
    }
    std::cout<<"print set\n";

    for(auto se:s)
    {
        std::cout<<se<<" ";
    }
    std::cout<<"\n";

    char eraseC;
    std::cout<<"enter a character for delete\n";
    std::cin>>eraseC;

    s.erase(eraseC);
    std::cout<<"print set after delete\n";

    for(auto se:s)
    {
        std::cout<<se<<" ";
    }
    std::cout<<"\n";

}
