//reverse a array
#include<stdio.h>
#include<stdlib.h>
int* reverseArray(int *p,int size)
{
    int i;
    int j;
    int temp;
    for(i=size-1,j=0;i>j;i--,j++)
    {
        temp = p[i];
        p[i]=p[j];
        p[j]=temp;
    }
    return p;
}
int main()
{
    int *pArray;
    int size,i;
    int *qArray;
    printf("enter array size\n");
    scanf("%d",&size);
    pArray =(int*)malloc(size);

    printf("enter array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&pArray[i]);
    }
    printf("print array\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",pArray[i]);
    }
    printf("\n");
    qArray = reverseArray(pArray,size);

    printf("print new array\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",qArray[i]);
    }
    printf("\n");

}