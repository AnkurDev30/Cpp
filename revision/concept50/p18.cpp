//Implement a singleton class.

#include<iostream>

class singletone 
{
    private:
       singletone()
       {

       }
       singletone(singletone &obj) =delete;
       singletone operator =(singletone& obj) = delete;
    public:
       static singletone& getID()
       {
            static singletone obj;
            return obj;
       }
};

int main()
{
    singletone &obj = singletone::getID();
    singletone &obj1 = singletone::getID();

    std::cout<<"address of first obj = "<<&obj<<std::endl;
    std::cout<<"address of second obj = "<<&obj1<<std::endl;
}