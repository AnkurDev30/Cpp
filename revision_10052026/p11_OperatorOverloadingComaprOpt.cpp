/*
11. Object Comparison
Concepts:
== operator overloading
*/
#include<iostream>
class objectCompare 
{
    public:
        int num;
    objectCompare(int a)
    {
        num = a;
    }
    bool operator ==(objectCompare &opt)
    {
        if(opt.num == this->num)
        {
            std::cout<<"equal to\n";
            return true;
        }
        else
        {
            std::cout<<"not equal to\n";
            return false;
        }
    }
};
int main()
{
    int a;

    std::cout<<"enter a num for object 1\n";
    std::cin>>a;
    objectCompare ob1(a);

    std::cout<<"enter a num for object 2\n";
    std::cin>>a;
    objectCompare ob2(a);

    ob1==ob2;
    return 0;
}