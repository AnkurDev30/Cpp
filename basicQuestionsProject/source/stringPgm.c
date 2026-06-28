//string program
#include<stdio.h>
#include"stringPgm.h"
#include"util.h"

int questionString()
{
    int opt=0;
        printf(Q1);
        printf(Q2);
        printf(Q3);
        printf(Q4);
        printf(Q5);
        printf(Q6);
        printf(Q7);
        printf(Q8);
        printf(Q9);
        printf(Q10);
        printf(Q11);
        printf(Q12);
        printf(Q13);
        printf(Q14);
        printf(Q15);
        scanf("%d",&opt);
    return opt;
}
char *enterString(int flag,char*Q)
{
    

    char *str = malloc(10*sizeof(int));
    if(flag ==1)
    {
        printf("Enter String\n");
    }
    else
    {
        printf("%s\n",Q);
    }
    scanf("%s", str);
    return str;
}
int findStrLength(char *str,int flag)
{
    char *p;
    if(flag==1)
    {
        p = enterString(1,"no");
        printf("%s\n",p);
    }
    else
    {
        p=str;
    }
    
    int i,len=0;
    
    for(i=0;p[i];i++);

    len = i;
    if(flag==1)
    {
       printf("Length of string = %d\n",len);
    }
    
    return len;
}
void cpyString()
{
    char *p = enterString(0,"Enter Source String");
    int i=0;
    int len = findStrLength(p,0);
    char *q = malloc(sizeof(char)*len);
    //printf("Length of string = %d",len);

    for(i=0;p[i];i++)
    {
        q[i] = p[i];
    }
    printf("source string : %s\n",p);
    printf("destination string : %s\n",q);
}
void conCanatingStr()
{
    int j=0;
    int i=0;
    char *p = enterString(0,"Enter first string");
    int len1 = findStrLength(p,0);
    
    char *q = enterString(0,"Enter second string");
    int len2 = findStrLength(q,0);

    char *t = malloc(sizeof(char)*(len1+len2));
    for(i=0;i<len1;i++)
    {
        t[i]=p[i];
    }

    for(i=len1;i<(len1+len2);i++)
    {
        t[i]=q[j];
        j++;
    }

    printf("string concanating result : %s\n",t);
}
int stringCmp(char *f,char*s,int flag)
{
    char *p;
    char *q;

    if(flag == 1)
    {
        p  = enterString(0,"Enter first string");
        q  = enterString(0,"Enter second string");
    }
    else
    {
        p = f;
        q = s;
    }

    printf("%s %s\n",p,q);
    int len1 = findStrLength(p,0);
    int len2 = findStrLength(q,0);
    int count =0;
    int i;
    int var =0;
    if(len1 == len2)
    {
        for(i=0;p[i];i++)
        {
            if(p[i]==q[i])
            {
                count++;
            }
        }
    }
 //   printf("%d %d\n",len1,count);
    if(count == len1)
    {
       // printf("Not me\n");
        if(flag == 1)
            printf("Strings are same\n");
        else var =1;
    }
    else
    {
        //printf("I am \n");

        if(flag == 1)
            printf("Strings are not same\n");
        else var =0;
    }
    return var;
}
char * stringReverse(int flag,char *Q)
{
    char *p;
    if(flag==1)
    {
          p = enterString(0,"Enter string");
    }
    else
    {
        p=Q;
    }
    
    int i,j;
    int len = findStrLength(p,0);
    char temp;
    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp = p[j];
        p[j]=p[i];
        p[i]=temp;
    }
    if(flag == 1)
    {
        printf("Reverse String : %s\n",p);
    }
   return p;
}
void stringPalindrom()
{
    int i,j;
    char p[100],q1[100];
    printf("enter the string\n");
    scanf("%s",p);
    for(i=0;p[i];i++)
    {
        q1[i]=p[i];
    }
    
    
    char *q= stringReverse(0,p);
    char temp;
  //  printf("pac %s\n",q);

    int var = stringCmp(q1,q,0);

  //  printf("var %d\n",var);

    if(var ==1)
        printf("String is Palindrom\n");
    else  
        printf("String is Not Palindrom\n");
   
}
void stringPgmFun()
{
    int opt = questionString();
    switch (opt)
    {
        case 1:
            clearScreen();
            (void)findStrLength("no str",1);
        break;
        case 2:
            clearScreen();
            cpyString();
        break;   
        case 3:
            clearScreen();
            conCanatingStr();
        break;    
        case 4:
            clearScreen();
            (void)stringCmp("no","no",1);
        break;  
        case 5:
            clearScreen();
            (void)stringReverse(1,"No");
        break;
        case 6:
            clearScreen();
            stringPalindrom();
        break;

    }
}