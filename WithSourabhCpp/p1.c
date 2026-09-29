
// c is not secure compare to cpp, becuse glaobal
//  variable can acces any one or any function

// difficult to maintence and readability
#include<stdio.h>

int a       = 10;
static int b = 20;
void fun1()
{
    a++;
    b++;
}
void fun2()
{
    a++;
    b++;
}
void fun3()
{
    a++;
    b++;
}
void fun4()
{
    a++;
    b++;
}
void fun5()
{
    a++;
    b++;
}
void fun6()
{
    a++;
    b++;
}
void fun7()
{
    a++;
    b++;
}
void fun8()
{
    a++;
    b++;
}
void fun9()
{
    a++;
    b++;
}
void fun10()
{
    a++;
    b=800;
}
void fun11()
{
    a++;
    b++;
}
void fun12()
{
    a++;
    b++;
}
void fun13()
{
    a=a*a;
    b++;
}
void fun14()
{
    a++;
    b++;
}
void fun15()
{
    a=0;
    b=21;
}
void fun16()
{
    a=(a*20)+1000;
    b=(a*20)+1000;
}
int main()
{
fun1  ();
fun2();
fun3();
fun4();
fun5();
fun6();
fun7();
fun8();
fun9();
fun10();
fun11();
fun12();
fun13();
fun14();
fun15();
fun16();
    printf("%d %d\n",a,b);
}