#include<stdio.h>
int main()
{
    int *p;
    int a=10;
    p=&a;
    printf("value of a = %d\n",a);
    printf("value of *p = %d\n",*p);
    a++;
    printf("s1 value of a = %d\n",a);
    printf("s1 value of *p = %d\n",*p);
    p++;
    printf("s2 value of a = %d\n",a);
    printf("s2 value of *p = %d\n",*p); 
}