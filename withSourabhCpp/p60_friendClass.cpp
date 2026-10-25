/*
friend class is nothing but with the help of that 
we can access all type of 
data member and meber functions from class

we have to declare class as friend inside of class

friend keyward only use inside of class
not where we write class defination

friend class can define under any
 specifier private/public or protected 

*/

#include<iostream>
class Abc;
class Ty 
{
    private:
        int x=10;
        
    public:
        int y=20;
        
    protected:
        int z=30;
        friend Abc;
};
class Abc
{

    public:
        Ty t1;
        void readDataFromTy()
        {
            int p=t1.x;
            int q=t1.y;
            int r = t1.z;
            std::cout<<"x  = "<<p<<std::endl;
            std::cout<<"y  = "<<q<<std::endl;
            std::cout<<"z  = "<<r<<std::endl;
        }
};

int main()
{
    Abc a1;
    a1.readDataFromTy();
}