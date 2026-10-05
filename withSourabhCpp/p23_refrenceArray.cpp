//refrence array
// 
#include<iostream>

int main ()
{

    int a[10] = {1,2,3,4,5,6,7,8,9,0};

    int(&b)[10]=a;

    for(auto x:b)
    {
        std::cout<<"b = "<<x<<std::endl;
    }
}