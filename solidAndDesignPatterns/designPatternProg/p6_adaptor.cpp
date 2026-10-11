#include<iostream>

class target 
{
    public:
        virtual void clintRequest()
        {
            std::cout<<"fun\n";
        }
};
class oldFiles
{
    public:
        void oldFIleFun()
        {
            std::cout<<"olod file\n";
        }
};
class newInterFace : public target 
{
    private:
        oldFiles &o1;
    public:
  //      newInterFace(target &t2):t1(t2){}
        void clintRequest 
        {
            o1.oldFIleFun();
        }
};
int main()
{
    target *t1 = new newInterFace();
    t1->clintRequest();
}