/**
Program 2: Insert and delete elements
- Create a vector with 5 elements.
- Insert an element at the beginning.
- Insert an element at a specific position.
- Delete the first element.
- Delete an element at a specific position.
- Display the final vector.
APIs: insert(), erase(), begin
*/

#include<iostream>
#include<vector>

int main()
{
    std::vector<int>vec;

    std::cout<<"Create a vector with 5 elements.\n";

    for(int i=0;i<5;i++)
    {
        vec.push_back(rand()%100);
    }
    std::cout<<"display vector\n";
    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\nInsert an element at the beginning.\n";

    int insertElement;

    std::cout<<"enter element\n";
    std::cin>>insertElement;

    vec.insert(vec.begin(),insertElement);

    std::cout<<"Insert an element at a specific position.\n";
    int pos,data;

    std::cout<<"enter position\n";
    std::cin>>pos;

    std::cout<<"enter data for pos\n";
    std::cin>>data;

    if(pos<vec.size() && pos>-1)
    {
         vec.insert(vec.begin()+pos,data);
    }
    else 
    {
        std::cout<<"position should not be less then zero or size of vector\n";
    }

    std::cout<<"Delete the first element.\n";

    vec.erase(vec.begin());

    std::cout<<"Delete an element at a specific position.\n";


    std::cout<<"enter position for delte\n";
    std::cin>>pos;

    if(pos<vec.size() && pos>-1)
    {
         vec.erase(vec.begin()+pos);
    }
    else 
    {
        std::cout<<"position should not be less then zero or size of vector\n";
    }


    std::cout<<"print final vector\n";

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\n";
}