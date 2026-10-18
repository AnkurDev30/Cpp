#include<iostream>

class pre
{
    public:
        int value;
        pre()
        {
            value=0;
        }
        pre operator ++()
        {
            pre temp ;
            temp.value = ++value;
            return temp;
        }
        pre operator ++(int)
        {
            pre temp =*this;
            value++;
            return temp;
        }
};

int main()
{
   pre p1;//0
   pre p2=++p1;//1

   std::cout<<p2.value<<std::endl;

   pre p3=p1++;//1
   std::cout<<p3.value<<std::endl;
   std::cout<<p1.value<<std::endl;

}