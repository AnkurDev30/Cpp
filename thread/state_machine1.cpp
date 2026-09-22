#include<iostream>

class State 
{
    public:
        virtual void pressButton()
        {

        }
        virtual ~State()
        {

        }
};
class On:public State
{
    public:
        virtual void pressButton()
        {
            std::cout<<"fan is off\n";
        }
};
class Off:public State
{
    public:
        virtual void pressButton()
        {
            std::cout<<"fan is on\n";
        }
};
class fan
{
    private:
        State *s;
    public:
        fan(State *p):s(p)
        {

        }
        void setState(State *a)
        {
            s = a;
        }
        void button()
        {
            s->pressButton();
        }
};

int main()
{
     
    On on;
    Off off;

    fan f1(&on);
    f1.button();
    f1.setState(&off);
    f1.button();


}