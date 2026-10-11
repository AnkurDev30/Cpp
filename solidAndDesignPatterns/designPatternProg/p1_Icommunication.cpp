#include<iostream>

class Icommunication 
{
    public:
        virtual void send()=0;
        virtual ~Icommunication()
        {}
};
class uart:public Icommunication
{
    public:
        void send()
        {
            std::cout<<"Uart send\n";
        }
};
class SPI:public Icommunication
{
    public:
        void send()
        {
            std::cout<<"SPI send\n";
        }
};
class I2c:public Icommunication
{
    public:
        void send()
        {
            std::cout<<"I2c send\n";
        }
};

class Abs 
{
    private:
        Icommunication &obj;
    public:
        Abs(Icommunication &ob):obj(ob){}
        void sendData()
        {
            obj.send();
        }
};
int main()
{
    uart u1;
    I2c i1;
    SPI s1;

    Abs a(u1);
    a.sendData();

    Abs ab(i1);
    ab.sendData();

    Abs ac(s1);
    ac.sendData();
}