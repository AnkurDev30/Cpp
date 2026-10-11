#include<iostream>
//#include<stdexcptr>
int main()
{
    int a,b;

    std::cout<<"enter a and b\n";
    std::cin>>a>>b;

    try 
    {
        if(b==0)
        {
            throw std::string ("b should not zero!");
        }
        a = a/b;
        std::cout<<"division = "<<a<<std::endl;
    }
    catch(std::string &MSG)
    {
        std::cout<<MSG<<" Error\n";
    }
}