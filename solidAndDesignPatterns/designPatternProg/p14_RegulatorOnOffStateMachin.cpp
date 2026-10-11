#include<iostream>
class RegulatorWork;

class Regulator 
{
    public:
        virtual void RegulatorPress(RegulatorWork &m)=0;
        //virtual ~ Regulator()
        //{
//
        //}
};
class RegOn:public Regulator
{
    public:
        void RegulatorPress(RegulatorWork &m);
};


class RegOff:public Regulator
{
    public:
        void RegulatorPress(RegulatorWork &m);
};
class RegulatorWork 
{
    private:
      Regulator *r1;
    public:
         RegulatorWork(Regulator *init)
         {
            r1=init;
         } 
         void changeState(Regulator *m)
         {
            r1=m;
         }
         void roundIt()
         {
            r1->RegulatorPress(*this);
         }
};
RegOff R1;
RegOn R2;
void RegOn:: RegulatorPress(RegulatorWork &m)
{
     std::cout<<"reg On\n";
     m.changeState(&R1);
} 
void RegOff::RegulatorPress(RegulatorWork &m)
{
     std::cout<<"reg Off\n";
     m.changeState(&R2);
} 

int main()
{
    RegOff off;
    RegulatorWork R(&off) ;
    R.roundIt();
    return 0;
}

