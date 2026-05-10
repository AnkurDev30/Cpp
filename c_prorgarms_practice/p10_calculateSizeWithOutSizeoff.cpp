//calculate size of with out sizeoff operator

#include<stdio.h>
#define size(type) ((char*)(&type+1)-(char*)(&type))
int main()
{
    int a;
    char b;
    float c;

    printf("%d\n",size(a));
    printf("%d\n",size(b));
}