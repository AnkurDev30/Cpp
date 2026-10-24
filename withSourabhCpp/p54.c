#include<stdio.h>

int main()
{

    int b=10;
    int *p=&b;
    printf("%d %d\n",b,*p);
    p=NULL;
    printf("%d %d\n",b,*p);

}