//list
#include<iostream>
#include<list>
class list1
{
    public:
        std::list<int> l1;
        void readList()
        {
            int a;
            for(int i=0;i<5;i++)
            {
                std::cout<<"enter data\n";
                std::cin>>a;
                l1.push_back(a);
            }
        }
        void printData()
        {
            for(auto &l:l1)
            {
                std::cout<<l<<std::endl;
            }
        }
};
int main()
{
    list1 l2;
    l2.readList();
    l2.printData();
}