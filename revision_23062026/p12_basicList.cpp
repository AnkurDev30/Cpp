/**

Insert at front using push_front().
Insert at back using push_back().
Display all elements.
Count elements.
Search an element
*/
#include<iostream>
#include<list>
class makeList
{
    private:
        int a;
        int b;
    public:
        void push_front_fun(makeList &m,std::list<makeList>&l)
        {
            
            l.push_front(m);
        }
        void push_back_fun(makeList &m,std::list<makeList>&l)
        {
            l.push_back(m);
        }
        void displayList(std::list<makeList>&l)
        {
            makeList m;
            for(auto &L:l)
            {
                std::cout<<" data 1 : "<<L.a<<" data 2 : "<<L.b<<std::endl;
            }
        }
        void countListElement(std::list<makeList>&l)
        {
            int count =0;
            for(int i=0;i<l.size();i++)
            {
                count++;
            }
            std::cout<<"No Of Members = "<<count<<std::endl;
        }
        void searchData(std::list<makeList>&l,int data)
        {
            int count =0;
            for(auto &c:l)
            {
                count++;
                if(c.a==data || c.b==data)
                {
                    break;
                }
            }
            std::cout<<"available at index "<<count<<std::endl;
        }
        void setFun()
        {
            std::cout<<"Enter a and b\n";
            std::cin>>a>>b;
        }
};
int main()
{
    makeList m;
    std::list<makeList>listOne;
    int option=0;
    int data;
    do 
    {
        std::cout<<"select option : "<<std::endl;
        std::cout<<"1.Insert at front using push_front().\n"<<std::endl;
        std::cout<<"2.Insert at back using push_back().\n"<<std::endl;
        std::cout<<"3.Display all elements.\n"<<std::endl;
        std::cout<<"4.Count elements.\n"<<std::endl;
        std::cout<<"5.Search elements.\n"<<std::endl;
        std::cin>>option;

        if(option == 1)
        {
            m.setFun();
            m.push_front_fun(m,listOne);
        }
        else if(option == 2)
        {
            m.setFun();
            m.push_back_fun(m,listOne);
        }
        else if(option == 3)
        {
            if(listOne.size()>1)
            m.displayList(listOne);
            else
            {
                std::cout<<"add some data\n";
            }
        }
        else if(option == 4)
        {
            if(listOne.size()>1)
            m.countListElement(listOne);
            else
            {
                std::cout<<"add some data\n";
            }
        }
        else if(option == 5)
        {

            if(listOne.size()>1)
            {
                std::cout<<"data \n";
                std::cin>>data;
                m.searchData(listOne,data);
            }
            
            else
            {
                std::cout<<"add some data\n";
            }
        }
    }while(option>=1);
}
