#include<iostream>

class singleTone 
{
    private:
        singleTone()
        {
            //std::cout<<"private const\n";
        }
        singleTone(singleTone& obj)=delete;
        singleTone& operator=(singleTone&obj)=delete;
    public:
        static singleTone& getInstanceID()
        {
            static singleTone obj;

            std::cout<<"object created\n";
            return obj;
        }
        void fun()
        {
            std::cout<<"logger\n";
        }
};

int main()
{
    singleTone &A1  = singleTone::getInstanceID();
    singleTone &A2  = singleTone::getInstanceID();

    A1.fun();
    A2.fun();
}