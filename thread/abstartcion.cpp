#include<iostream>
 class engine
 {
    public:
        virtual void start()=0; 
 };

 class petrol:public engine
 {
    public:
        void start()
        {
            std::cout<<"petrol car\n";
        }
 };
  class electric:public engine
 {
    public:
        void start()
        {
            std::cout<<"electric car\n";
        }
 };

 class car
 {
    private:
        engine& e;
    public:
        car(engine &e1):e(e1){};
        void start()
        {
            e.start();
        }
 };
 int main()
 {
    petrol p1;
    electric e1;

    car c1(p1);
    car c2(e1);

    c1.start();
    c2.start();

    return 0;
 }