//reverse a number
//1234 4321

#include<stdio.h>
int main()
{
    int a;
    int i=0;
    int rem=0;
    int sum=0;
    printf("enter a number\n");
    scanf("%d",&a);

    for(i=0;a;i++)
    {
       // printf("i %d\n",i);
        rem = a%10;
        sum = sum*10+rem;
       // printf("sum %d\n",isum;
        a   = a/10;
    }
    printf("new num = %d\n",sum);
}