//Find duplicate elements in an array without using STL.

#include<iostream>
#define size 10
int main()
{
    int array[size];

    std::cout<<"enter data\n";

    int randDu = rand()%10;

    for(int i=0;i<size;i++)
    {
        if(i%3 == 0)
            array[i] = randDu;
        else 
            array[i] = i+2;
    }

    std::cout<<"display data\n";

    for(int i=0;i<size;i++)
    {
        std::cout<<array[i]<<" ";
    }
    std::cout<<"\n";
    int duplicate[100] = {-1};

    for(int i=0;i<size;i++)
    {

        if(duplicate[i]==array[i])
        continue;

        for(int j = i+1;j<size;j++)
        {
            if(array[i]==array[j] )
            {
                duplicate[i]=array[i];
                std::cout<<array[i]<<" is duplicate\n";
            }
        }
    }


}