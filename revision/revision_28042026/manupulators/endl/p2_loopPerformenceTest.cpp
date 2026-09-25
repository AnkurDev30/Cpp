/*
✅ Program 2: Loop performance test

Print numbers 1–100:

First using endl
Then using \n

👉 Observe speed difference
*/

#include<iostream>
class loopTest
{
    public:
        void loopTestFunNewLineKey();
        void loopTestFunEndl();
};
void loopTest::loopTestFunNewLineKey()
{
    int i;
    for(i=0;i<100000;i++)
    {
        std::cout<<"i = "<<i<<"\n";
    }
}
void loopTest::loopTestFunEndl()
{
    int j;
    for(j=0;j<100000;j++)
    {
        std::cout<<"j = "<<j<<std::endl;
    }
}
int main()
{
    int optVar,opt;
    loopTest obj1;
    do
    {
        std::cout<<"opt"<<std::endl;
        std::cin>>opt;

        if(opt==1)
        obj1.loopTestFunNewLineKey();

        if(opt==2)
        obj1.loopTestFunEndl();

        std::cout<<"optvar"<<std::endl;
        std::cin>>optVar;
    }while(optVar==1);
}