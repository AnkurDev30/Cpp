//array program.c
/**
Find the largest element.
Find the smallest element.
Find the second largest element.
Reverse an array.
Rotate an array by N positions.
*/
#include<stdio.h>
#include<stdlib.h>
#include"arrayPgm.h"
#include"util.h"

void clearScreen()
{
    system("clear");
}
void reverseArray(int *p,int size)
{
    int i,j;
    int temp=0;
    for(i=0,j=size-1;i<j;i++,j--)
    {
        temp = p[j];
        p[j]=p[i];
        p[i]=temp;
    }
    printf("After Revsere \n");
    displayData(p,size);
}
int displayQuestions()
{
    int selectOpt=0;
    clearScreen();
    printf("Questions\n");
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
    scanf("%d",&selectOpt);

    return selectOpt;
}
void displayData(int *p,int size)
{
    int i=0;
    printf("Display Array\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
}
void checkWeatherArrayIsShorted(int *p,int size)
{

    int i;
    int ass=1;
    int dss =1;
    for(i=0;i<size-1;i++)
    {
        if(p[i]>p[i+1])
        {
            ass =0;
        }
        if(p[i]<p[i+1])
        {
            dss =0;
        }
    }

    if(ass ==1 && dss == 1)
    {
        printf("array is shorted\n");
    }
    else
    {
        printf("array not shorted\n");
    }
}
void findDuplicateElement(int *p,int size)
{
    int i=0;
    int j=0;
    int k=0;
    clearScreen();
    printf(Q5);

    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(p[i]==p[j])
            {
                for(k=j;k<size-1;k++)
                {
                    p[k]=p[k+1];
                }
                j--;
                size--;
            }
        }
    }
    printf("Array After removing duplicate character\n");
    displayData(p,size);
}
int findLargestNumberInt(int *p,int size)
{
    int i;
    int largestElement = p[0];
    for(i=0;i<size;i++)
    {
        if(largestElement < p[i])
        {
            largestElement = p[i];
        }
    }
    return largestElement;
}
int findSmallestNumberInt(int *p,int size)
{
    int i;
    int smallestNum = p[0];
    for(i=0;i<size;i++)
    {
        if(smallestNum > p[i])
        {
            smallestNum = p[i];
        }
    }
    return smallestNum;
}
int findSecondLargestNumberInt(int *p,int size)
{
    int i;
   
    int largestNumber = findLargestNumberInt(p,size);
   
    int secondLarg = p[0];
    for(i=0;i<size;i++)
    {
        if(secondLarg < p[i] && p[i] < largestNumber)
        {
            secondLarg = p[i];
        }
    }
    return secondLarg;
}
int* enterArray(int size)
{
    int *p = malloc((sizeof(int))*size);
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&p[i]);
    }
    return p;
}
void mergeTwoArray()
{
    clearScreen();
    printf(Q6);

    int *f =(int*)malloc(sizeof(int));
    int *s =(int*)malloc(sizeof(int));
    int *t;
    int i,j;
    int elementF,elementS;
    printf("Enter no of element for first array\n ");
    scanf("%d",&elementF);

    printf("Enter First Array\n");
    f = enterArray(elementF);

    printf("Enter no of element for second array\n ");
    scanf("%d",&elementS);

    printf("Enter Second Array\n");
    s = enterArray(elementS); 

    int totalElementsT = elementF+elementS;
    t=malloc(sizeof(int)*totalElementsT);

    //merge logic.
    for(i=0;i<elementF;i++)
    {
        t[i]=f[i];
    }
    j=0;
    for(i=elementF;i<totalElementsT;i++)
    {
        t[i]=s[j];
        j++;
    }
    printf("Merge Array \n");
    displayData(t,totalElementsT);
}
void checkMissingNumber(int *p,int size)
{
    int i;
    int j;
    int flag=0;

    for(i=0;i<size-1;i++)
    {
        if(!(p[i]+1==p[i+1]))
        {
            printf("%d is missing number\n",p[i+1]);
            flag=1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("No number is missing\n");
    }
}
void findDuplicateNumber(int *p,int size)
{
    int i,j;
    int flg=0;
    clearScreen();
    
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(p[i] == p[j])
            {
                flg=1;
                printf("%d is duplicate element\n",p[i]);
                break;
            }
        }
    }
    if(flg==0)
    {
        printf("No Duplicate element\n");
    }
}
void moveAllZero(int *p,int size)
{
    int j=0;
    int i=0;
    int temp=0;
    for(i=0;i<size;i++)
    {
        if(p[i]!=0)
        {
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
            j++;
        }
    }
    printf("Move zero at end display array\n");
    displayData(p,size);
}
void separeteEvenOrOdd(int *p,int size)
{
    int j=0;
    int i=0;
    int temp=0;
    for(i=0;i<size;i++)
    {
        if(p[i]%2==0)
        {
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
            j++;
        }
    }
    printf("Separate even or odd\n");
    displayData(p,size);
}
void arrayProgramCalling()
{
    int i;
    int array[ARRAY_SIZE];
    int resultVal = 0 ;
    int result = displayQuestions();
    if(result!=6)
    {
        printf("Enter array data\n");
        for(i=0;i<ARRAY_SIZE;i++)
        {
            scanf("%d",&array[i]);
        }
    }

    clearScreen();

    displayData(array,ARRAY_SIZE);
    
    
    switch(result)
    {
        case 1:
            clearScreen();
            printf(Q1);
            resultVal = findLargestNumberInt(array,ARRAY_SIZE);
            printf("Largest Number  = %d\n",resultVal);
        break;
        case 2:
            clearScreen();
            printf(Q2);
            resultVal = findSmallestNumberInt(array,ARRAY_SIZE);
            printf("Smallest Number  = %d\n",resultVal);
        break;
        case 3:
            clearScreen();
            printf(Q3);
            resultVal = findSecondLargestNumberInt(array,ARRAY_SIZE);
            printf("second largest Number  = %d\n",resultVal);
        break;
        case 4:
            clearScreen();
            printf(Q4);
            reverseArray(array,ARRAY_SIZE);
        case 5:
            clearScreen();
            printf(Q5);
            findDuplicateElement(array,ARRAY_SIZE);
        break;
        case 6:
            clearScreen();
            printf(Q6);
            mergeTwoArray(array,ARRAY_SIZE);
        break;//
        case 7:
            clearScreen();
            printf(Q7);
            checkWeatherArrayIsShorted(array,ARRAY_SIZE);
        break;
        case 8:
            clearScreen();
            printf(Q8);
            checkMissingNumber(array,ARRAY_SIZE);
        break;
        case 9:
            clearScreen();
            printf(Q9);
            findDuplicateNumber(array,ARRAY_SIZE);
            break;
        case 10:
            clearScreen();
            printf(Q10);
            moveAllZero(array,ARRAY_SIZE);
        break;
        case 11:
            clearScreen();
            printf(Q10);
            separeteEvenOrOdd(array, ARRAY_SIZE);
        break;
    }
}