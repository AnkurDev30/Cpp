#include<iostream>
#include<cstdio>
/**
namemangling :- 

preproceesor
compiler
assmebler
a b


linker
*/
void fun()//FUN_1
{
    printf("Hello\n");
}
void fun(int a)//FUN_2
{
    printf("hi\n");
}
int main()
{
    fun();
    fun(5);
    return 0;
}