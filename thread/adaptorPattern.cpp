//in adaptor pattern two incompatible class /interface work together

#include<iostream>

class USB
{
    public:
        virtual void connect()
        {

        }
        virtual ~USB()
        {

        }
};

class OldCharger
{
    public:
        void oldCharger()
        {
            std::cout<<"old charger\n";
        }
};

class ChargerConect:public USB
{
    private:
        OldCharger &o;
    public:
        ChargerConect(OldCharger &p):o(p){

        }

        void connect()
        {
            o.oldCharger();
        }
};

int main()
{
    OldCharger o1;
    ChargerConect c1(o1);
    USB *u=&c1;
    u->connect();
}