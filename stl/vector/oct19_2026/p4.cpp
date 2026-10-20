/**
4

Access and update elements
Create {10, 20, 30, 40}. Update the element at index 1 to 99 and print the first and last elements.
Learn: [], at(), front(), back()
*/

#include<iostream>
#include<vector>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<99;i++)
    {
        vec.push_back((rand()%2000));
    }
    std::cout<<"print vector\n";
    int count = 0;

    for(std::vector<int>::iterator it = vec.begin();
    it!=vec.end();it++)
    {
        if(count%10==0)
        {
            std::cout<<"\n";
        }
        std::cout<<*it<<" ";
        count++;
    }
    std::cout<<"\n";

    //access 

    int position;

    std::cout<<"enter position for access\n";
    std::cin>>position;

    if(position<99 && 0>=position)
    {
        int data = vec[position];

        int update = 0;
        std::cout<<"enter data for update\n";
        std::cin>>update; 
        
        vec[position]=update;

        std::cout<<"print data after update\n";

        count=0;
        for(std::vector<int>::iterator it = vec.begin();
        it!=vec.end();it++)
        {
            if(count%10==0)
            {
                std::cout<<"\n";
            }
            std::cout<<*it<<" ";
            count++;
        }
        std::cout<<"\n";       
    }
    else 
    {
        std::cout<<"enter invalid position\n";
    }

}