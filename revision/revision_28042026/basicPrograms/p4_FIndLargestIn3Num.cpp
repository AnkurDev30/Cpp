//find largest in 3 num

#include<iostream>

#define FIND_LARGEST_IN_3_NUM(a,b,c) a>b?(a>c?a:c):(b>c?b:c);
int main()
{
    int a, b,c;
    std::cout<<"enter 3 numbers"<<std::endl;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;

    int largest = FIND_LARGEST_IN_3_NUM(a,b,c);
    std::cout<<"largest = "<<largest<<std::endl;
    return 0;
}