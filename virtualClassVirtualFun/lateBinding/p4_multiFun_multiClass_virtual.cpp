#include<iostream>

class vehicle 
{
    public:
        virtual void speed()
        {
            std::cout<<"in speed of vehicle\n";
        }
        virtual void maintence()
        {
            std::cout<<"in maintence of vehicle\n";
        }
        virtual void value()
        {
            std::cout<<"in value of vehicle\n";
        }
};
class FourWheeler : public vehicle 
{
    public:
         void speed()
        {
            std::cout<<"in speed of FourWheeler\n";
        }
         void maintence()
        {
            std::cout<<"in maintence of FourWheeler\n";
        }
         void value()
        {
            std::cout<<"in value of FourWheeler\n";
        }    
};
class TwoWheeler : public vehicle 
{
    public:
         void speed()
        {
            std::cout<<"in speed of TwoWheeler\n";
        }
         void maintence()
        {
            std::cout<<"in maintence of TwoWheeler\n";
        }
         void value()
        {
            std::cout<<"in value of TwoWheeler\n";
        }    
};
class AirBorne: public vehicle
{
    public:
        void value()
        {
            std::cout<<"in value of AirBorne\n";
        }  
};

int main()
{
    vehicle *ptr1;
    vehicle v;

    ptr1 = &v;
    ptr1->speed();
    ptr1->maintence();
    ptr1->value();

    vehicle *ptr2,*ptr3,*ptr4;

    FourWheeler maruti;
    TwoWheeler bajaj;
    AirBorne jumbo;

    ptr2=&maruti;//
    ptr3=&bajaj;
    ptr4=&jumbo;

    ptr2->speed();//in speed of FourWheeler
    ptr2->maintence();//in maintence of FourWheeler

    ptr3->speed(); //in speed of TwoWheeler
     ptr3->maintence();//in maintence of TwoWheeler

    ptr4->speed();  //dont know
    ptr4->maintence();//dont know

    ptr2->value();//in value of FourWheeler
    ptr3->value();//in value of TwoWheeler

    vehicle w;
    w.speed();//speed veicle

    FourWheeler f;
    f.speed();//speed four

    AirBorne a;
    a.maintence();//dont know

}

