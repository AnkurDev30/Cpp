#include<iostream>
class MotorWork ;
class MotorON ;
class MotorOFF ;

class Motor 
{
    public:
        virtual void pressButton(MotorWork &m) = 0;
        virtual ~Motor()
        {

        }
};
class MotorON:public Motor
{
    public:
        void pressButton(MotorWork &m1);
};
class MotorOFF:public Motor
{
    public:
        void pressButton(MotorWork &m1);
};
class MotorWork 
{
    private:
        Motor *m;
       // MotorON m1;
      //  MotorOFF m2;
    public:
        MotorWork(Motor *initial)
        {
            m=initial;
        }
        void currentState(Motor *m1)
        {
            m=m1;
        }
        void ButtonWork()
        {
            m->pressButton(*this);
        }
};
MotorON On;
MotorOFF Off;
void MotorON::pressButton(MotorWork &m1)
        {
            std::cout<<"Motor ON\n";
            m1.currentState(&Off);
        }
void MotorOFF::pressButton(MotorWork &m1)
        {
            std::cout<<"Motor OFF\n";
            m1.currentState(&On);
        }   
int main()
{
    
    MotorOFF m3;
    MotorWork m(&m3);

    char button ='t';
    do{
        m.ButtonWork();
        std::cout<<"enter button\n";
        std::cin>>button;
    }while(button == 't');
    
}