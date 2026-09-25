/*
6. Deep Copy Example
Concepts:
copy constructor
deep copy

🔥 Very important
*/
#include<iostream>
class deepCopy
{
    public:
        int *a;
        deepCopy(int b)
        {
            a = new int;
            std::cout<<"default contructor\n";
            *a =b;
        }
        ~deepCopy()
        {
            delete a;
        }
        deepCopy(deepCopy &obje)
        {
            std::cout<<"copy contructor\n";
            a=new int(*obje.a);
        }

};
int main()
{
    deepCopy old(5);
    std::cout<<"old a "<<*old.a<<std::endl;
    deepCopy newO(old);
     std::cout<<"newO a "<<*newO.a<<std::endl;
     *newO.a = 12;
      std::cout<<"newO a "<<*newO.a<<std::endl;
      std::cout<<"old q "<<*old.a<<std::endl;
}