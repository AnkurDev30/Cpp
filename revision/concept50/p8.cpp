//Demonstrate pass by value, pass by pointer and pass by reference.

#include<iostream>
void passByValue(int x,int y)
{
    x++;
    y++;
}
void passByPointer(int *x,int *y)
{
    (*x)++;
    (*y)++;
}

void passByRefrence(int &x,int &y)
{
    x++;
    y++;
}

int main()
{
    int a=10,b=20;
    passByValue(a,b);
    std::cout<<a<<" "<<b<<std::endl;

    passByPointer(&a,&b);
    std::cout<<a<<" "<<b<<std::endl;

    passByRefrence(a,b);
    std::cout<<a<<" "<<b<<std::endl;

}
