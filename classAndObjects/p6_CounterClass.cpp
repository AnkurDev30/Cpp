/****************************************************************************************
Counter Class

Create a class Counter with:

private count

Member functions:

increment()

decrement()

display()
******************************************************************************************/


//!< header file
#include<iostream>

//!< namesapce defination
namespace nCounter
{
    //!< class defination
    class cCounter
    {
        private:
        //!< data members
            int counter;
        public:
        //!< construction and member functions
            cCounter(int c):counter(c){}
        //!< small function should be define inside of class because compiler treated as a inline
            void incrementFun()
            {
                counter++;
            }
            void decrementFun()
            {
                counter--;
            }
        //!< function define outof class 
            void displayCounter();
    };
}

//!<displayCounter : display the counter value
void nCounter::cCounter::displayCounter()
{
    std::cout<<"counter value = "<<counter<<std::endl;
}

//!<main : main calling function
int main()
{
    //!< local variable
    int initVal =0 ;
    std::cout<<"enter counter initial val = "<<std::endl;
    std::cin>>initVal;

    //!< object creation and calling
    nCounter::cCounter  objCounter(initVal);

    //!< calling increment fun.
    objCounter.incrementFun();
    objCounter.displayCounter();

    //!< calling decrement fun.
    objCounter.decrementFun();
    objCounter.displayCounter();
}