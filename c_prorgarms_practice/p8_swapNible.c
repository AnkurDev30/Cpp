//swap nibble
#include<stdio.h>
void decimalToBin(unsigned int  num)
{
    char i ;
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
void swapNibble(unsigned int num)
{
    unsigned int a;
    unsigned int b;
    printf("before swap \n");
    decimalToBin(num);

    a = num<<24;
   // printf("step 1 swap \n");
   // decimalToBin(a);

    b = num>>24;
   // printf("step 2 swap \n");
   // decimalToBin(b);


    num = a|b;
    printf("after swap \n");
    decimalToBin(num);
}
int main()
{
    unsigned int a;
    printf("enter a num\n");
    scanf("%d",&a);

    swapNibble(a);
}
