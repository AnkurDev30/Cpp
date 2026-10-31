//multiple throw.

#include<iostream>

int main()
{

    int a,b,c;

    std::cout<<"divide operations:- \nenter first num\n";
    std::cin>>a;
    std::cout<<"enter second num\n";
    std::cin>>b;

    try 
    {
        if(b==0)
        {
            throw "Not devided by zero\n";
        }
        if(b==5)
        {
            throw 1;
        }
        if(b==7)
        {
            throw 10.5f;
        }
        c = a/b;
        std::cout<<"result = "<<c<<std::endl;
    }
    catch (const char *s)
    {
        std::cout<<s<<std::endl;
    }
    catch (int a)
    {
        std::cout<<"12 is not fully devided by 5\n";
    }
    catch (float a)
    {
        std::cout<<"12 is not fully devided by 7\n";
    }

    
}