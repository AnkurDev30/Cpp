#include<stdio.h>
void fun();

void callBack(void (*p)())
{
    p();
}
int add()
{
    int a=2,b=3;
    return a+b;
}
int sub()
{
    int a=2,b=3;
    return a-b;
}
int mul()
{
    int a=2,b=3;
    return a*b;
}
int main()
{
    //void (*p)()=fun;
   // p();

   //callBack(fun);

   int (*p[3])()={add,sub,mul};
    int out=0;
   out =p[0]();
   printf("out = %d\n",out);
   out = p[1]();
   printf("out = %d\n",out);
   out = p[2]();
   printf("out = %d\n",out);
}
void fun()
{
    printf("hello\n");
}