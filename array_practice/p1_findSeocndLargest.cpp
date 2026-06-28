//find second largest number
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
    std::cout<<"display :\n";
    for(i=0;i<SIZE;i++)
    {
        std::cout<<arr[i];
    }   
    std::cout<<"\nfind second largest\n";
    int second_large =arr[0];
    //find largest.
    int largest =arr[0];
    for(int i=0;i<SIZE;i++)
    {
        if(largest<arr[i])
        {
            largest = arr[i];
        }
    }
    std::cout<<"largest "<<largest<<std::endl;
    for(int i=0;i<SIZE;i++)
    {
        if(second_large < arr[i] && arr[i]<largest)
        {
            second_large = arr[i];
        }
    }   
    std::cout<<"second largest = "<< second_large<<std::endl;
}