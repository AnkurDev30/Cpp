//string to number

#include<stdio.h>

int stringToNum(char *p)
{
    int i =0;

    int num =0 ;
    for(i=0;p[i];i++)
    {
        num =num*10+(p[i]-48);
    }
    return num;
}
int main()
{
    char num[10];
    int newNum=0;
    printf("enter string in number\n");
    scanf("%s",num);

    newNum = stringToNum(num);
    printf("number = %d \n",newNum);
}