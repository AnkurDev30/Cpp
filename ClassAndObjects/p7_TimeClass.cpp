/*Create a class Time with:

hours

minutes

seconds

Member functions:

readTime()

displayTime()

convertToSeconds() */
#include<iostream>
namespace nTimeClass
{
    class cTimeClass
    {
        private:
            int hour,min,second;
            int flag=0;
        public:
            explicit cTimeClass(int h,int m,int s):hour(h),min(m),second(s){}
            void displayTime();
            void convertToSeconds();
    };
}
void nTimeClass::cTimeClass::displayTime()
{
    flag=0;
    if(hour>12)std::cout<<"invalid hour"<<std::endl;
    else if(min>60)std::cout<<"invalid min"<<std::endl;
    else if(second>60)std::cout<<"invalid second"<<std::endl;
    else
    {
        flag=1;
        std::cout<<hour<<":"<<min<<":"<<second<<std::endl;
    }
    
}
void nTimeClass::cTimeClass::convertToSeconds()
{
    if(flag==1)
    {
        int timeInSecond;
        timeInSecond = (hour*3600)+(min*60)+second;
        std::cout<<"time in seconds = "<<timeInSecond<<std::endl;
    }
    else
    {
        std::cout<<"invalid time enterd"<<std::endl;
    }
}
int main()
{
    int h,m,s;
    std::cout<<"enter hours"<<std::endl;
    std::cin>>h;
    std::cout<<"enter min"<<std::endl;
    std::cin>>m;
    std::cout<<"enter second"<<std::endl;
    std::cin>>s;

    nTimeClass::cTimeClass objTime(h,m,s);

    objTime.displayTime();
    objTime.convertToSeconds();
}