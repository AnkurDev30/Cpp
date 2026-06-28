//Separate Even and Odd Numbers
#include<iostream>
#define SIZE 6
int main()
{
    int arr[SIZE];
    int i;

    std::cout<<"enter data\n";
    for(i=0;i<SIZE;i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"\ndisplay :\n";
    for(i=0;i<SIZE;i++)
    {
        std::cout<<arr[i];
    } 
    int *pOdd=new int();
    int *pEven=new int();
    int even=0;
    int odd=0;
    for(i=0;i<SIZE;i++)
    {
        if(arr[i]%2 == 0)
        {
            
            pEven[even++] = arr[i];
            //std::cout<<"\n a even = "<<arr[i]<<std::endl;
            //std::cout<<"\n p even = "<<pEven[even-1]<<std::endl;
        }
        else
        {
            //std::cout<<"\n a odd = "<<arr[i]<<std::endl;
            pOdd[odd++] = arr[i];
            //std::cout<<"\n p odd = "<<pOdd[odd-1]<<std::endl;
        }
    } 
    std::cout<<"\ndisplay even:\n";
    for(i=0;i<even;i++)
    {
        std::cout<<pEven[i];
    } 
    std::cout<<"\ndisplay odd:\n";
    for(i=0;i<odd;i++)
    {
        std::cout<<pOdd[i];
    } 

    for(i=0;i<odd;i++)
    {
        arr[i]=pOdd[i];
    }
    int j=0;
    for(i=odd;i<SIZE;i++)
    {
        arr[i]=pEven[j++];
    }
    std::cout<<"\ndisplay :\n";
    for(i=0;i<SIZE;i++)
    {
        std::cout<<arr[i];
    } 
}
