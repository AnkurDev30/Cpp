//addition of objects.

#include<iostream>

class addition
{
   
        
    public:
    int a;//data member
    addition(int p):a(p){};//parametrized constructor 
    addition()//!< default constructor.
    {

    }
    addition additionFun(addition A);
};
addition addition::additionFun(addition A)
{
    addition newObj;

    newObj.a = this->a+A.a;

    return newObj;
}
int main()
{
    int a,b;
    std::cout<<"enter value of first object\n";
    std::cin>>a;
    std::cout<<"enter value of second object\n";
    std::cin>>b;

    addition obj1(a),obj2(b);
    addition newObj;
    newObj = obj1.additionFun(obj2);

    std::cout<<"after addition of 2 objects = "<<newObj.a<<std::endl;

    return 0;
}