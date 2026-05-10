// sum of digits and product of digits

#include<stdio.h>
int sumOfDigit(int num)
{
    int i;
    int rem;
    int sum=0;
    for(i=0;num;i++)
    {
        rem = num%10;
        sum+=rem;
        num =num/10;
    }
    return sum;
}
int prodOfDigit(int num)
{
    int i;
    int rem;
    int mul=1;
    for(i=0;num;i++)
    {
        rem = num%10;
        mul*=rem;
        num =num/10;
    }
    return mul;
}

int main()
{
    int num;
    int result=0;

    printf("enternum a num\n");
    scanf("%d",&num);

    result = sumOfDigit(num);
    printf("sum of digit =%d\n",result);

    result = prodOfDigit(num);
    printf("product of digit =%d\n",result);
}