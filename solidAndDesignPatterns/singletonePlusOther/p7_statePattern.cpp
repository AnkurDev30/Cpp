#include<iostream>
class FanOpertion ;
class Fan 
{
    public:
        virtual void pressSwitch(FanOpertion &p) = 0;
        virtual ~Fan()=default;
};
class FanON : public Fan 
{
    public:
        void pressSwitch(FanOpertion &p);
};
class FanOFF : public Fan 
{
    public:
        void pressSwitch(FanOpertion &p);
};
class FanOpertion 
{
    private:
        Fan *f;
    public:
        FanOpertion(Fan &f1):f(&f1){}
        void changeState(Fan &m)
        {
            f=&m;
        }
        void button()
        {
            f->pressSwitch(*this);
        }
};
FanON fon;
FanOFF foff;
void FanON::pressSwitch(FanOpertion &m)
{
    std::cout<<"fan on\n";
    m.changeState(foff);
}
void FanOFF::pressSwitch(FanOpertion &m)
{
    std::cout<<"fan off\n";
    m.changeState(fon);
}

int main()
{
    FanOpertion f(foff);
    char p;
    do 
    {

        f.button();
        std::cout<<"press switch t\n";
        std::cin>>p;
    }
    while(p =='t');

}
