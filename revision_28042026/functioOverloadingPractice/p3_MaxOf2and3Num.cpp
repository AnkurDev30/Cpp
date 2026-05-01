//Max of 2 and 3 numbers
#include<iostream>
namespace Max{
    class MaxFind
    {
        public:
            int max(int , int);
            int max(int,int,int);
    };
}
int Max::MaxFind::max(int x, int y)
{
    if(x==y)
    {
        std::cout<<"both are equal "<<std::endl;
        return 0;
    }
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int Max::MaxFind::max(int x ,int y,int z)
{
    if(x==y && x==z)
    {
        std::cout<<"all are equal"<<std::endl;
        return 0;
    }


    if(x>y && x>z)
    {
        return x;
    }
    else if(y>x && y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a,b,c;
    int max2, max3;
    Max::MaxFind obj1;
    
    std::cout<<"enter a b c"<<std::endl;
    std::cin>>a>>b>>c;

    max2=obj1.max(a,b);

    if(max2!=0)
    std::cout<<"max of 2 numbers is ="<<max2<<std::endl;
    else
    std::cout<<"numbers are equal"<<std::endl;

    max3 = obj1.max(a,b,c);

    if(max3!=0)
    std::cout<<"max of 3 numbers is ="<<max3<<std::endl;
    else
    std::cout<<"numbers are equal"<<std::endl;
}