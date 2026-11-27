/**
Program 6: Pointer to pointer
- Create an integer using dynamic memory allocation.
- Create a pointer to that pointer (int**).
- Access and modify the value using int**.
- Release memory correctly.
*/

#include<iostream>

int main()
{
    int *p = new int;

    std::cout<<"enter value\n";
    std::cin>>*p;

    int **q = &p;

    std::cout<<"value = "<<**q<<std::endl;

    //modify that value.

    **q=**q*2;

    std::cout<<"modified value = "<<**q<<std::endl;


    delete p;
    p = nullptr;
}