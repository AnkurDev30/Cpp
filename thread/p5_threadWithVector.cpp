#include<iostream>
#include<thread>
#include<vector>
#include<list>
void newline()
{
    std::cout<<"\n";
}
int main()
{
    std::vector<int>vec;
    std::list<std::vector<int>>l;

    for(int i=0;i<10;i++)
    {
        vec.push_back(i);
    }

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    
    newline();

    for(int i=0;i<10;i++)
    {
        l.push_back(vec);
    }

    for(auto m:l)
    {
        for(auto x:m)
        std::cout<<x<<" ";

        newline();
    }

}