//Largest of 3 numbers.
#include<iostream>
void largestIn3Num(int a,int b,int c)
{
    if(a==b)
    {
        std::cout<<"a and b are equal\n";
    }
    else if(b==c)
    {
        std::cout<<"c and b are equal\n";
    }
    else if(c==a)
    {
        std::cout<<"c and a are equal\n";
    }
    else if(a==b && b==c)
    {
        std::cout<<"b ,c and a are equal\n";
    }
    else if(a>b && a>c)
    {
        std::cout<<"a is greater\n";
    }
    else if(b>a && b>c)
    {
        std::cout<<"b is greater\n";
    }
    else
    {
        std::cout<<"c is greater\n";
    }

}
int main()
{
    int a,b,c;
    std::cout<<"enter 3 numbers\n";
    std::cin>>a>>b>>c;
    largestIn3Num(a,b,c);
}