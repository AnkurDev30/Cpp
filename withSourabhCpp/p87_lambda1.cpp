/**
 [=]->=
[&]-> as refrence
[this]->inside class use


[](parameters )


[]()->datatype() return type

example

[=](int x)->int
{

}();

*/
#include<iostream>
    int x=40;
    int y=45;
int main()
{
    int x=20;
    int y=20;
    [&]()
    {
        std::cout<<"hello\n";
        std::cout<<"x = "<<::x<<"\n";
        std::cout<<"y = "<<::y<<"\n";
        ::x++;
        ::y++;
        std::cout<<"AI x = "<<::x<<"\n";
        std::cout<<"AI y = "<<::y<<"\n";
    }();




}