#include<iostream>

class areaOfCircle 
{
    private:
        static int radiues ;
        float area;
    public:
        areaOfCircle(int r){
            radiues = r;
        }
        void areaOfCircleFun()
        {
             area= 3.14f*radiues*radiues;
            display();
        }
        void display()
        {
            std::cout<<"display Area = "<<area<<std::endl;
        }
};
int areaOfCircle::radiues=0;
int main()
{
    areaOfCircle a1(5);
    a1.areaOfCircleFun();
    areaOfCircle a2(15);
    a2.areaOfCircleFun();
    a1.display();
    
}