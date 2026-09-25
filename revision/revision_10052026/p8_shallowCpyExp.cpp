/*
7. Shallow Copy Example
Concepts:
default copy constructor
double delete problem

🔥 Interview favorite
*/
#include<iostream>
class shallowCpy
{
    public:
        int *p;
        shallowCpy(int q)
        {
            p = new int;
            *p=q;
        }
        ~shallowCpy()
        {
            delete p;
        }
        shallowCpy(shallowCpy &as)
        {
            *p =*as.p;
        }

};
int main()
{
    shallowCpy fiObj(5);
    std::cout<<"fiObj = "<<*fiObj.p<<std::endl;
    shallowCpy secObj=fiObj;
    std::cout<<"secObj = "<<*secObj.p<<std::endl;
}