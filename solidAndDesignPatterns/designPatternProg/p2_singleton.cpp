#include<iostream>

class sington 
{
    private:
        sington()
        {

        }
        sington(sington&obj )=delete;
        sington& operator=(sington &obj)=delete;
    public:
        static sington&  getInstance()
        {
            static sington obj;
            return obj;
        }
        void display()
        {
            std::cout<<"display\n";
        }
};
int main()
{
    sington& obj1 = sington::getInstance();
    sington& obj2 = sington::getInstance();
    std::cout<<&obj1<<" "<<&obj2<<std::endl;
}