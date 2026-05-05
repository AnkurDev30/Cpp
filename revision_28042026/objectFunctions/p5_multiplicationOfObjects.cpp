//multiplication of 2 objects

#include<iostream>

class multiplication
{
    public:
        int a;
        multiplication(int p):a(p){};
        multiplication()
        {

        }
        multiplication MulFun(multiplication obj);
};

multiplication multiplication::MulFun(multiplication obj)
{
    multiplication newObj;
    newObj = this->a*obj.a;
    return newObj;
}

int main()
{
    int var1,var2;

    std::cout<<"enter variable for first obj"<<std::endl;
    std::cin>>var1;
    std::cout<<"enter variable for second obj"<<std::endl;
    std::cin>>var2;

    multiplication one(var1),two(var2),third;

    third = one.MulFun(two);

    std::cout<<"addition of 2 objects = "<<third.a<<std::endl;
    return 0 ;
}
