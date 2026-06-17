#include<iostream>
#include<string>
class strLength
{
    public:
        std::string inp;
        strLength()
        {
            std::cout<<"enter string\n";
            getline(std::cin,inp);
        }
        void display()
        {
            std::cout<<"length of string : ="<<inp.length()<<std::endl;
        }
};
class manualLength
{
    public:
    void calcLength(std::string var)
    {
        int count = 0;
        for(char &ch:var)
        {
            count++;
        }
        std::cout<<"Manual Calculated Length = "<<count<<std::endl;
    }
};
int main()
{
    strLength obj;
    manualLength mObj;
    obj.display();
    mObj.calcLength(obj.inp);

}