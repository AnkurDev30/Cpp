#include<iostream>
class List 
{
    private:
        class Node 
        {
            public:
                int data;
                Node *link;
        }*p;
    public:
        void create()
        {
            p=new Node();
            p->data =10;
            p->link = NULL;
        }
        void print()
        {
            if(p->link!=NULL)
                std::cout<<p->data<<" ";
            else
                std::cout<<"\n";
        }
};
int main()
{
    List l1;
    for(int i=0;i<10;i++)
    {
        l1.create();
    }
    

    l1.print();
    return 0;
}