/*
6. Counter Class

Create a class Counter with:

private count

Member functions:

increment()

decrement()

display()
*/

#include<iostream>
namespace nCounter
{
    class cCounter
    {
        private:
            int counter;
        public:
            cCounter(int c):counter(c){}
        void incrementFun()
        {
            counter++;
        }
        void decrementFun()
        {
            counter--;
        }
        void displayCounter();
    };
}
void nCounter::cCounter::displayCounter()
{
    std::cout<<"counter value = "<<counter<<std::endl;
}

int main()
{
    int initVal =0 ;
    std::cout<<"enter counter initial val = "<<std::endl;
    std::cin>>initVal;
    nCounter::cCounter  objCounter(initVal);

    objCounter.incrementFun();
    objCounter.displayCounter();

    objCounter.decrementFun();
    objCounter.displayCounter();
}