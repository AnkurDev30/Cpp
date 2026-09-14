/*
insert()  
erase()   
clear()   
empty()   
front() / back() 
*/

#include<iostream>
#include<vector>
int main()
{
    int m;
    std::vector<int>vs;

    for(int i=0;i<5;i++)
    {
        std::cout<<"enter m value\n";
        std::cin>>m;
        vs.push_back(i);
    }

    for(int i=0;i<5;i++)
    {
        std::cout<<i<<") display : "<<vs[i]<<std::endl;
    }

    std::cout<<"insert()\n:";
    vs.insert(vs.begin()+3);

    for(int i=0;i<vs.size();i++)
    {
        std::cout<<i<<") display : "<<vs[i]<<std::endl;
    }

    std::cout<<"erase()\n:";

    vs.erase(vs.begin()+3);
    for(int i=0;i<vs.size();i++)
    {
        std::cout<<i<<") display : "<<vs[i]<<std::endl;
    }
    std::cout<<"front() and back()\n:";

    int front = vs.front();
    int back = vs.back();

    std::cout<<"front  : "<<front<<std::endl;
    std::cout<<"back  : "<<back<<std::endl;

    if(vs.empty()) std::cout<<"empty\n";
    else std::cout<<"not empty\n";

    std::cout<<"clear\n";

    if(vs.empty()) std::cout<<"empty\n";
    else std::cout<<"not empty\n";  
}