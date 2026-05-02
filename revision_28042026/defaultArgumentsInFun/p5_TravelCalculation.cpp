/**
🧱 4. Travel Calculation

Create a function to calculate travel distance.

👉 Requirements:

Time is required
Speed should have default value
Calculate distance = speed × time
Allow user to override speed
*/

#include<iostream>
class TravelCalc
{
    public:
        float distanceCalc(float speed, float timeInhr=60);
};
float TravelCalc::distanceCalc(float timeInHr, float speed)
{
    return timeInHr*speed;
}

int main()
{
    TravelCalc obj;

    float time,speed;
    int speedOpt;
    int distance;
    std::cout<<"enter time in hour"<<std::endl;
    std::cin>>time;

    std::cout<<"need to enter speed"<<std::endl;
    std::cin>>speedOpt;

    if(speedOpt != 0)
    {
        std::cout<<"enter speed per km"<<std::endl;
        std::cin>>speed;
        distance = obj.distanceCalc(time, speed);
    }
    else
    {
         distance = obj.distanceCalc(time);
    }

    std::cout<<"distance = "<<distance<<"km"<<std::endl;

}