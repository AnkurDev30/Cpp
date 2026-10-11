#include<iostream>

class state 
{
    public:
        virtual bool enterButton()
        {
            return false;
        }
};
class FanON:public state
{
    public:
        bool enterButton()
        {
            std::cout<<"Fan off"<<std::endl;
            return true;
        } 
};
class FanOFF:public state
{
    public:
        bool enterButton()
        {
            std::cout<<"Fan ON"<<std::endl;
            return false;
        } 
};

class StateMachin
{
    private:
        state *s1;
        FanOFF f1;
        FanON f2;
    public:
        StateMachin(state* s2)
        {
            s1=s2;
            //PressButton();
        }
        void PressButton()
        {
            bool retunsStatuc = s1->enterButton();
            if(retunsStatuc==false)
            {
                s1 = &f2;
            }
            else
            {
                s1 = &f1;
            }
        }
};
int main()
{
    FanON f1;
    FanOFF f2;
    StateMachin s1(&f1);
    s1.PressButton();
    s1.PressButton();
    s1.PressButton();
    s1.PressButton();

    
}