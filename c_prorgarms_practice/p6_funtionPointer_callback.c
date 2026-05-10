// function pointer 
#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
void callBack(int (*fun)(int a,int b))
{
    int a;
    a = fun;
    printf("call back result = %d\n",a);
}
int main()
{
    int (*fp[3])(int,int)={add,sub,mul};
    int i,result;


    for(i=0;i<3;i++)
    {
        result = fp[i](11,9);
        callBack(fp[i](11,9));
        printf("result = %d\n",result);
    }
}