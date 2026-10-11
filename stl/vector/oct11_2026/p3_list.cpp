#include<iostream>
#include<list>
#include<algorithm>
int size =0;
#define AB "-------------------------------\n";
void funInstertDisplay(std::list<int> &li)
{
    
    std::cout<<AB;
    std::cout<<"enter size of list\n";
    std::cin>>size;

    for(int i=0;i<size;i++)
    {
        li.push_back(rand()%100);
    }
    std::cout<<"print list : \n";
    for(auto m: li)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    std::cout<<AB;
}
void insertAtPosision(std::list<int> &li)
{
    //std::cout<<AB;
    int pos,data;
    std::cout<<"enter position for insert of list\n";
    std::cin>>pos;
    std::cout<<"enter vale for insert\n";
    std::cin>>data;   

    auto it = li.begin();
    advance(it,pos-1);

    li.insert(it,data);

    std::cout<<"print list after insert: \n";
    for(auto m: li)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    std::cout<<AB;

}
void deleteElement(std::list<int> &li)
{
    int element = 0 ;
    std::cout<<"eneter element for delete\n";
    std::cin>>element;


    std::cout<<"print list after ersae: \n";
   
    auto f = std::find(li.begin(),li.end(),element);
    
    if(f!=li.end())
    li.erase(f);

    std::cout<<"\n";


    std::cout<<"print list after erase: \n";
    for(auto m: li)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    std::cout<<AB;
}
void reverseAlist(std::list<int>&li)
{
    li.reverse();
    std::cout<<"list after reverse\n";
    for(auto m: li)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    std::cout<<AB;
}
void sortList(std::list<int>&li)
{
    li.sort();
    std::cout<<"list after sort: asending\n";
    for(auto m: li)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
  

    li.sort([](int x,int y){
        return x>y;
    });
    std::cout<<"list after sort: desending\n";
    for(auto m: li)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    std::cout<<AB;
}
void removeDuplicate()
{
    std::list<int>li;
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            li.push_back(5);
        }
        else
        {
            li.push_back(i);
        }
    }

    std::cout<<"print data:\n";
    for(auto m:li)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    li.sort();
    auto f = std::unique(li.begin(),li.end());

    li.erase(f,li.end());

    std::cout<<"print data after remove dup[licate]:\n";
    for(auto m:li)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";    

}
void seaprateEvenOrOdd(std::list<int>&li)
{
    std::stable_partition(li.begin(),li.end(),[](int x){
        return x%2==0;
    });

 
    std::cout<<"print data after seaprate even or odd:\n";
    for(auto m:li)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";    
}
void merge2List()
{
    std::list<int>l1 ={1,2,3,4};
    std::list<int>l2 ={6,7,8,9};

    l1.merge(l2);

    std::cout<<"print data after merge:\n";
    for(auto m:l1)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}
int main()
{
    std::list<int>l;
    funInstertDisplay(l);
    insertAtPosision(l);
    deleteElement(l);
    reverseAlist(l);
    sortList(l);
    removeDuplicate();
    seaprateEvenOrOdd(l);
    merge2List();
}
