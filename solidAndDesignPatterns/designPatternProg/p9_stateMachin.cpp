#include<iostream>

class state 
{
    public:
        virtual void enterButton()
        {

        }
};
class FanON:public state
{
    public:
        void enterButton()
        {
            std::cout<<"Fan off"<<std::endl;
        } 
};
class FanOFF:public state
{
    public:
        void enterButton()
        {
            std::cout<<"Fan ON"<<std::endl;
        } 
};

class StateMachin
{
    private:
        state *s1;
    public:
        StateMachin(state* s2)
        {
            s1=s2;
            PressButton();
        }
        void PressButton()
        {
            s1->enterButton();

        }
        void changeState(state* s2)
        {
            s1=s2;
            PressButton();
        }
};
int main()
{
    FanON f1;
    FanOFF f2;
    StateMachin s1(&f2);
   // s1.PressButton();
    s1.changeState(&f1);
  //  s1.PressButton();
    
}