/*
Program 2: Insert and delete elements
- Create a vector with 5 elements.
- Insert an element at the beginning.
- Insert an element at a specific position.
- Delete the first element.
- Delete an element at a specific position.
- Display the final vector.
*/

#include<iostream>

#include<vector>

#include<cstdlib>

#include<algorithm>

int main()
{
    std::vector<int>vec;

    std::cout<<"\ncreate a vector for 10 int\n";

    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }

    std::cout<<"\nprint vector Normal for loop\n";

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }  
    
    //Insert an element at the beginning.

    vec.insert(vec.begin(),102);
    std::cout<<"\nInsert an element at the beginning 102\n";

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    } 

    //Insert an element at a specific position.
    int pos,value;

    std::cout<<"\nenter pos\n and value\n";
    std::cin>>pos>>value;

    if(pos>0 && pos<vec.size())
    {
        vec.insert(vec.begin()+pos,value);


        std::cout<<"\nInsert an element at a specific position.\n";

        for(int i=0;i<vec.size();i++)
        {
            std::cout<<vec[i]<<" ";
        } 
    }
    else 
    {
        std::cout<<"postion within a range\n";
    }
    std::cout<<"\nDelete the first element.\n";

    vec.erase(vec.begin());
   

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    } 

    std::cout<<"\nDelete an element at a specific position.\n";

    //int pos,value;

    std::cout<<"\nenter pos\n and value\n";
    std::cin>>pos>>value;

    if(pos>0 && pos<vec.size())
    {
       auto findIf =  std::find(vec.begin(),vec.end(),value);

       if(findIf!=vec.end())//1 2 3 4 5 6 vec.end
       {
            vec.erase(findIf);
            std::cout<<"\nDelete an element at a specific position.\n";

            for(int i=0;i<vec.size();i++)
            {
                std::cout<<vec[i]<<" ";
            } 

       }
       else
       {
            std::cout<<"\nvalue should be part of vector\n";
       }
    }
    else 
    {
        std::cout<<"\npostion within a range\n";
    }

    std::cout<<"display final vector\n";

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }  

    std::cout<<"\n";
}

