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
    if(count == len1)
    {
        if(flag == 1)
            printf("Strings are same\n");
        else var =1;
    }
    else
    {
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


    int var = stringCmp(q1,q,0);
    if(var ==1)
        printf("String is Palindrom\n");
    else  
        printf("String is Not Palindrom\n");
   
}
void countVowelAndConsonent()
{
    char *a=malloc(sizeof(int)*10);
    int i;
    int countVowel =0;
    int countConsonent =0;
    printf("Enter String\n");
    scanf("%s",a);

    for(i=0;a[i];i++)
    {
        if((a[i]>='A'&& a[i]<='Z')||(a[i]>='a'&& a[i]<='z'))
        {
            if((a[i]=='a' || a[i]=='A')
            ||(a[i]=='e' || a[i]=='E')
            ||(a[i]=='i' || a[i]=='I')
            ||(a[i]=='o' || a[i]=='O')
            ||(a[i]=='u' || a[i]=='U'))
            {
                countVowel++;
            }
            else
            {
                countConsonent++;
            }
        }
    }
    printf("Count vowels = %d\n",countVowel);
    printf("Count consonent = %d\n",countConsonent);
}
void countTheWord()
{
    char *p;
    int count=0,i;
    char ch;
    p=malloc(100);

    printf("enter string\n");
    //scanf("%[^\n]",p);
    while ((ch = getchar()) != '\n' && ch != EOF);

    fgets(p,100,stdin);

    
    for(i=0;p[i];i++);

    int len =i;
    for(i=0;i<len-1;i++)
    {
        if(p[i]==' '&& p[i+1]!=' ')
        {
            count++;
        }
    }
    if(p[0]==' '&& p[1]!=' ')
    {
        count--;
    }
    printf("no of word =%d\n",count+1);
}
void removeSpaces()
{
    char p[100];
    printf("enter string\n");
    char ch;
    int i;
    while ((ch = getchar()) != '\n' && ch != EOF);

    fgets(p,100,stdin);

    for(i=0;p[i];i++);

    int len = i;
    int j=0;
    char temp;
    int count =0;
    for(i=0;i<len-1;i++)
    {
        if(p[i]==' ')
        {
            for(j=i;j<len;j++)
            {
                p[j]=p[j+1];
            }
            count++;
        }
    }
    p[len-count] = '\0';
    printf("%s\n",p);
}
void countOcceranceOfCharcter()
{
    char p[100],ch;
    printf("Enter string\n");

    while ((ch = getchar()) != '\n' && ch != EOF);

    fgets(p,100,stdin);

    int i,j;
    int len = 0;
    for(i=0;p[i];i++);

    len = i;
    int count =0;
    for(i=0;i<len-1;i++)
    {
        if(p[i]=='*')
        {
            continue;
        }
        count =1;
        for(j=i+1;p[j];j++)
        {
            if(p[i]==p[j])
            {
                count++;
                p[j]='*';
            }
        }
        printf("%c --> %d\n",p[i], count);
    }
}
void removeDuplicate()
{
    char p[100],ch;
    int i,j,k,len;
    printf("Enter String\n");
    while ((ch = getchar()) != '\n' && ch != EOF);

    fgets(p,100,stdin);
    for(i=0;p[i];i++);

    len = i;

    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(p[i]==p[j])
            {
                for(k=j;k<len-1;k++)
                {
                    p[k] = p[k+1];
                }
                j--;
                len--;
            }
        }
    }
    printf("after remove str = %s\n",p);
}
void checkAnagram()
{
    char a[100],b[100];
    printf("Enter first str\n");
    scanf("%s",a);

    printf("Enter first str\n");
    scanf("%s",b);
    int i,j,len1,len2,count = 0;
    char temp;

    for(i=0;a[i];i++);
    len1 =i;

    for(i=0;b[i];i++);
    len2 =i;

    if(len1 == len2)
    {
        for(i=0;i<len1-1;i++)
        {
            for(j=i+1;j<len1;j++)
            {
                if(a[i]>a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        for(i=0;i<len1-1;i++)
        {
            for(j=i+1;j<len1;j++)
            {
                if(b[i]>b[j])
                {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for(i=0;i<len1;i++)
        {
            if(a[i]==b[i])
            {
                count++;
            }
        }

        if(len1 == count)
        {
            printf("Anagram\n");
        }
        else
        {
            printf("Not Anagram\n");
        }
    }
}
void toggleCase()
{
    char ab[100];
    int i,j;
    printf("Enter string\n");
    scanf("%s",ab);

    for(i=0;ab[i];i++)
    {
        if(ab[i]>='a' && ab[i]<='z')
        {
            ab[i]=ab[i]-32;
        }
        else if(ab[i]>='A' && ab[i]<='Z')
        {
            ab[i]=ab[i]+32;
        }
        else
        {
            //do nothing.
        }
    }
    printf("%s \n",ab);
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
        case 7:
            clearScreen();
            countVowelAndConsonent();
        break;
        case 8:
            clearScreen();
            countTheWord();
        break;
        case 9:
            clearScreen();
            removeSpaces();
        break;
        case 12:
            clearScreen();
            toggleCase();
        break;
        case 13:
            clearScreen();
            countOcceranceOfCharcter();
        break;
        case 14:
            clearScreen();
            removeDuplicate();
        break;
        case 15:
            clearScreen();
            checkAnagram();
        break;
        
    }
}