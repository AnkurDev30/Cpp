/*
Delete an element
Start with {10, 20, 30, 40, 50} and remove the element at index 2.
Expected: {10, 20, 40, 50}.
Learn: erase(), iterator positions
*/

#include<iostream>
#include<vector>

int main()
{
    std::vector<int>vec;

    for(int i=1;i<=5;i++)
    {
        vec.push_back(i*10);
    }
    std::cout<<"print vector\n";

    for(std::vector<int>::iterator it = vec.begin();it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";
    for(std::vector<int>::iterator it = vec.begin();it!=vec.end();it++)
    {
        if(*it==30)
        {
            it = vec.erase(it);
            break;
        }
    }
    
    std::cout<<"print vector after erase\n";

    for(std::vector<int>::iterator it = vec.begin();it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";

}