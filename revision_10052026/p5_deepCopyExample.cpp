/*
6. Deep Copy Example
Concepts:
copy constructor
deep copy


*/

#include<iostream>
class deepCopyExp
{
    private:
       
    public:
        int *a;
        deepCopyExp(int b)
        {
           a = new int;
           *a=b;
        }
        deepCopyExp(deepCopyExp &obj)
        {
            a =new int (*obj.a);
          // *a=*obj.a;
        }
        void display()
        {
            std::cout<<"p = "<<*a<<std::endl;
        }
        ~deepCopyExp()
        {
           delete a;
        }
};
int main()
{
    deepCopyExp obj1(4);
    deepCopyExp obj2(obj1);
    *obj2.a=12;
    std::cout<<"obj1 ="<<*obj1.a<<std::endl;
    std::cout<<"obj2 = "<<*obj2.a<<std::endl;
}