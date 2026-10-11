#include<iostream>

class Motor
{
    public:
        virtual bool MotorPressButton()=0;
        virtual ~Motor()
        {}
};
class MotorON:public Motor
{
    public:
        bool MotorPressButton()
        {
            std::cout<<"motor Off\n";
            return false;
        }
};
class MotorOff:public Motor
{
    public:
        bool MotorPressButton()
        {
            std::cout<<"motor On\n";
            return true;
        }
};

class MotorWork
{
    private:
        Motor *M1;
        MotorOff Off;
        MotorON On;
    public:
        MotorWork(Motor *firstSate)
        {
            M1 = firstSate;
        }
        
        void SingleButton()
        {
            bool status = M1->MotorPressButton();
            if(status == false)
            {
                M1 = &Off;
            }
            else
            {
                M1 = &On;
            }
        }
};
int main()
{
    MotorOff m3;
    MotorON m2;
    MotorWork m1(&m3);
    char pressSwitch='t';
    do
    {
        m1.SingleButton();
        std::cout<<"pressSwitch\n";
        std::cin>>pressSwitch;
    }while(pressSwitch =='t');
    

}