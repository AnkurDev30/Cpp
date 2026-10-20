/*
Insert elements at a specific position
Start with {10, 20, 40, 50} and insert 30 at index 2.
Expected: {10, 20, 30, 40, 50}.
Learn: begin(), iterators, insert()
*/

#include<iostream>
#include<vector>

int main()
{
    std::vector<int>vec;
    for(int i=1;i<=5;i++)
    {
        if(i==3)continue;
        
        vec.push_back(i*10);
    }
    std::cout<<"print vector\n";

    for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";

    vec.insert(vec.begin()+2,30);

    std::cout<<"print vector after insert\n";

    for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";
}