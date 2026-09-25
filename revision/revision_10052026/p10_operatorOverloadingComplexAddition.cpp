/*
🧱 OPERATOR OVERLOADING
9. Complex Number Addition
Concepts:
+ overloading
*/
#include<iostream>
class opeartorOverloading
{
    public:
        int real;
        int image;
        opeartorOverloading(int r,int i)
        {
            real =r;
            image=i;
        }
        opeartorOverloading()
        {

        }
        void displayNumber(std::string object)
        {
            std::cout<<"display "<<object<<" : "<<std::endl;
            std::cout<<real<<"+"<<image<<"i"<<std::endl;
        }
        opeartorOverloading operator +(opeartorOverloading &obj)
        {
            opeartorOverloading localObj;
            localObj.real   = obj.real+this->real;
            localObj.image  = obj.image+this->image;
            return localObj;
        }
};
int main()
{
    int r,i;
    std::cout<<"enter real number for obj1 \n";
    std::cin>>r;
    std::cout<<"enter imaginary number for obj1\n";
    std::cin>>i;  
    opeartorOverloading obj1(r,i);

    std::cout<<"enter real number for obj2 \n";
    std::cin>>r;
    std::cout<<"enter imaginary number for obj2\n";
    std::cin>>i;   
    opeartorOverloading obj2(r,i);

    obj1.displayNumber("object 1");
    obj2.displayNumber("object 2");

    opeartorOverloading obj3;

    obj3 = obj1+obj2;

    obj3.displayNumber("object 3");

}