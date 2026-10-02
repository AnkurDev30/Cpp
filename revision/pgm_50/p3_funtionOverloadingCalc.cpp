

#include<iostream>
#include<stdexcept>

template<typename t>
class calc
{
    private:
        t a;
        t b;
        t result;
        void takeIp();
        void process();
        t add(t a,t b);
        t sub(t a,t b);
        t mul(t a,t b);
        t div(t a,t b);
    public:
        void calcFun()
        {
            process();
        }
};
template<typename t>
void calc<t>::takeIp()
{
    std::cout<<"enter a  and b\n";
    std::cin>>a>>b;
}
template<typename t>
void calc<t>::process()
{
    int option;
    takeIp();
    std::cout<<"select option\n";
    std::cin>>option;

    switch(option)
    {
        case 1:
            result =  add(a,b);
            break;
        case 2:
            result =  sub(a,b);
            break;
        case 3:
            result =  mul(a,b);
            break;
        case 4:
            result =  div(a,b);
            break;
        default:
            std::cout<<"wrong input\n";
    }
    std::cout<<result<<std::endl;
}
template<typename t>
t calc<t>::add(t a,t b)
{
    return a+b;
}
template<typename t>
t calc<t>::sub(t a,t b)
{
    return a-b;
}
template<typename t>
t calc<t>::mul(t a,t b)
{
    return a*b;
}
template<typename t>
t calc<t>::div(t a,t b)
{
    t loc =0;
    try
    {
        if(b==0)
        {
            throw ("b should not be 0\n");
        }
        loc =a/b;
    }
    catch(const std::string *msg)
    {
        std::cout<<msg<<std::endl;
    }
    return loc;
}
int main()
{
    calc<int> obj;
    obj.calcFun();
}