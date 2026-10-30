//Swap two variables using pointers and references
#include<iostream>

void swapByPointer(int *p,int *q)
{
    *p = *p^*q;//0101 0011 0110  = 6
    *q = *p^*q;//0110 0011 0101  =5
    *p = *p^*q; //0110 0101    0011
}
void swapByRefrence(int &b,int &c)
{
    b = b+c;//b =8 
    c = b-c;// c = 5
    b = b-c;//
}
void swapByrefreneMain()
{
    int a,b;
    std::cout<<"enter two numbers\n";
    std::cin>>a>>b;

    swapByRefrence(a,b);
    std::cout<<"swap by pointer\n";
    std::cout<<a<<" "<<b<<std::endl;   
}

int main()
{
    int a,b;

    std::cout<<"enter two numbers\n";
    std::cin>>a>>b;

    swapByPointer(&a,&b);
    std::cout<<"swap by pointer\n";
    std::cout<<a<<" "<<b<<std::endl;
    swapByrefreneMain();
}