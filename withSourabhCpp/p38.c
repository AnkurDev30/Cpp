#include<string.h>
#include<stdio.h>
#include<stdlib.h>
struct a
{
    int roll;
    char name[10];
    void (*fun)(void *);
};
void funPrint(void* data)
{
    struct a a1 = (struct a*)(data);
    printf("%d  %s\n",a1.roll,a1.name);
}
int main()
{
    //struct a *a1;
    struct a *a1 = malloc(sizeof(struct a));
    a1->roll=100;
    strcpy(a1->name,"hello");

    a1->fun = funPrint;
    a1->fun(a1);

}