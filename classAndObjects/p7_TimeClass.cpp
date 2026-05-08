/*******************************************************************
Create a class Time with:

hours

minutes

seconds

Member functions:

readTime()

displayTime()

convertToSeconds() 
********************************************************************/

//!< header file.
#include<iostream>

//!< namespace defination.
namespace nTimeClass
{
    //!< class defination.
    class cTimeClass
    {
        private:
        //!< data members.
            unsigned int hour,min,second;
            unsigned int flag=0;
        public:
        //!< member functions and construction.
            explicit cTimeClass(int h,int m,int s):hour(h),min(m),second(s){}
            void displayTime();
            void convertToSeconds();
    };
}

//!<displayTime: time display function.
void nTimeClass::cTimeClass::displayTime()
{
    flag=0;

    //!< validate time.
    if(hour>24)std::cout<<"invalid hour"<<std::endl;
    else if(min>59)std::cout<<"invalid min"<<std::endl;
    else if(second>59)std::cout<<"invalid second"<<std::endl;
    else
    {
        //!< set flag .
        flag=1;
        std::cout<<hour<<":"<<min<<":"<<second<<std::endl;
    }
    
}

//!<convertToSeconds : function for convert time to second.
void nTimeClass::cTimeClass::convertToSeconds()
{
    if(flag==1)
    {
        unsigned int timeInSecond;
        timeInSecond = (hour*3600)+(min*60)+second;
        std::cout<<"time in seconds = "<<timeInSecond<<std::endl;
    }
    else
    {
        std::cout<<"invalid time enterd"<<std::endl;
    }
}
//!< main calling function.
int main()
{
    //!< local variables.
    int h,m,s;

    //!< taking time in hours, min and seconds.
    std::cout<<"enter hours"<<std::endl;
    std::cin>>h;
    std::cout<<"enter min"<<std::endl;
    std::cin>>m;
    std::cout<<"enter second"<<std::endl;
    std::cin>>s;

    //!< passing time to constrution.
    nTimeClass::cTimeClass objTime(h,m,s);

    //!< calling display function and convert to secods.
    objTime.displayTime();
    objTime.convertToSeconds();
}