/*
friend function is nothing but with the help of that 
we can access all type of 
data member and meber functions from class

we have to declare function as friend inside of class

friend keyward only use inside of class
not where we write defination

friend function can define under any
 specifier private/public or protected 

*/

#include<iostream>

class Ty 
{
    private:
        int x=10;
        
    public:
        int y=20;
        
    protected:
        int z=30;
        friend void fun(Ty &t1);
};
void fun(Ty &t1)
{
    
    std::cout<<"x  = "<<t1.x<<std::endl;
    std::cout<<"y  = "<<t1.y<<std::endl;
    std::cout<<"z  = "<<t1.z<<std::endl;
}

int main()
{
    Ty t2;
    fun(t2);
}