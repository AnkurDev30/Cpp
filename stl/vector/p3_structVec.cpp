//structure vector

#include<iostream>
#include<vector>

class structVec
{
    private:
        struct st
        {
            int no;
            std::string name;
        };
    public:
        st st1;
        std::vector<st> vecSt;
        void readVal()
        {
            std::cout<<"enter value of structure\n";
            for(int i=0;i<3;i++)
            {
                int locNo;
                std::string locName;
                
                std::cout<<"enter number and name \n";
                std::cin>>locNo;
                std::cin>>locName;
                st1.no=locNo;
                st1.name=locName;
                vecSt.push_back(st1);
                
            }
        }
        void output()
        {
            std::cout<<"output print:\n";
            for(int i=0;i<3;i++)
            {
                
                std::cout<<vecSt[i].no;
                std::cout<<" ";
                std::cout<<vecSt[i].name;
                std::cout<<" \n";
            }            
        }
};
int main()
{
    structVec s1;
    s1.readVal();
    s1.output();
}
