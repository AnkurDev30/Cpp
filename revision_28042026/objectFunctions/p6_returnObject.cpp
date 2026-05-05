//in this program we are returning object in new way
#include<iostream>
class reminder
{
    public:
        int a;
        reminder()
        {

        };
        reminder(int p):a(p){};

        reminder FunCalcObjeRemind(reminder obj)
        {
            return reminder(this->a % obj.a);
        }

};
int main()
{
    int p;
    std::cout<<"enter a number"<<std::endl;
    std::cin>>p;
    int q;
    std::cout<<"enter q number"<<std::endl;
    std::cin>>q;

    reminder obj1(p),obj2(q),obj3;
    obj3 = obj1.FunCalcObjeRemind(obj2);

    std::cout<<"remider from first object and second object ="<<obj3.a<<std::endl;
}