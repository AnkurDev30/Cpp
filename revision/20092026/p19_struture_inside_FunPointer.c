#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    int roll;
    char name[10];
    void (*fun)(void *);
};

void myPrint(void *data)
{
    struct student *s1 = (struct student*)data;
    printf("roll : %d\n",s1->roll);
    printf("name : %s\n",s1->name);
}
int main()
{
    struct student *pS1;
    pS1 = malloc(sizeof(struct student ));
    pS1->roll = 10;
    strcpy(pS1->name,"hello");
    
    pS1->fun = myPrint;
    pS1->fun(pS1);
}