//remove duplicate element.

#include<iostream>
#define SIZE 5
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
    int count = 0;  
    int size =SIZE;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                
                for(int k=j;k<size-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
                size--;
            }
        }
    }
    std::cout<<"\ndisplay after remove duplicate:\n";
    for(i=0;i<size;i++)
    {
        std::cout<<arr[i];
    } 
    std::cout<<"\n";
}
