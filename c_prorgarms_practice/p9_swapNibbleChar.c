//swap nible by char.
#include<stdio.h>
void decimalToBin(unsigned char  num)
{
    char i ;
    for(i=7;i>=0;i--)
    {
        if(num&1<<i)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        if(i%4==0)
        printf(" ");
    }
    printf("\n");
}
int main()
{
    unsigned int a;
    printf("enter number\n");
    scanf("%d",&a);
    printf("befor swap\n");
    decimalToBin(a);

    a=(a<<4|a>>4);
    printf("after swap\n");
    decimalToBin((char)a);

}