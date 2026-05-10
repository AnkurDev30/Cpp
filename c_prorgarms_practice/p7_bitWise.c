//bit wise operator

#include<stdio.h>
void decimalToBin(int num)
{
    int i ;
    for(i=31;i>=0;i--)
    {
        if(num&1<<i)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        if(i%8==0)
        printf(" ");
    }
    printf("\n");
}
void setAbit(int num,int bitPos)
{
    int newNum;
    printf("before set a bit\n");
    decimalToBin(num);
    newNum = (num|(1<<bitPos));
    printf("after set a bit\n");
    decimalToBin(newNum);
}
void clearAbit(int num,int bitPos)
{
    int newNum;
    printf("before clear a bit\n");
    decimalToBin(num);
    newNum = (num & (~(1<<bitPos)));
    printf("after clear a bit\n");
    decimalToBin(newNum);
}
void toggleAbit(int num,int bitPos)
{
    int newNum;
    printf("before toggle a bit\n");
    decimalToBin(num);
    newNum = (num ^(1<<bitPos));
    printf("after toggle a bit\n");
    decimalToBin(newNum);
}
int main()
{
    int num,pos;
    printf("enter a num\n");
    scanf("%d",&num);
    printf("enter a pos\n");
    scanf("%d",&pos);
    setAbit(num,pos);
    clearAbit(num,pos);
    toggleAbit(num,pos);
}