//a class can only one object we create
// and that object share by all 
//this type of car called single tone 
//its shoul have private constructor and copy contrutor and 
// copy assigment operator should be delete or private
/*

|------------------------|
|  single tone class     |
|________________________|
            |  getInstanceID(should return static object)
            |
        only one object


*/
#include<iostream>

class singleTone
{
    private:
        singleTone()
        {

        }
        singleTone (singleTone&obj){}
        singleTone& operator= (singleTone&obj){
            return*this;
        }
    public:
        static singleTone& getInstanceID()
        {
            static singleTone obj;
            return obj;
        }
        void fun()
        {
            std::cout<<"configuration parameter\n";
        }
};
int main()
{
    singleTone &s1 = singleTone::getInstanceID();
    s1.fun();
    singleTone &s2 = singleTone::getInstanceID();
    s1.fun();
}