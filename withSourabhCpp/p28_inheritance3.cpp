//multiple inheritance

#include<iostream>

class bird 
{

    public:
        bool flyFun()
        {
            //std::cout<<"can fly\n";
            return true;
        }
        bool eggFun()
        {
            //std::cout<<"can give fly\n";
            return true;
        }
};
class sparrow :public bird
{
    public:
     //   bool fly=false , egg=false;
    void sparrowTest()
    {
        if((flyFun()==true) && (eggFun()==true))
        {
            std::cout<<"sparrow is bird\n";
        }
    }
};
class crow :public bird
{
    public:
      //  bool fly=false , egg=false;
    void dogTest()
    {
        if(((flyFun()==true) && (eggFun()==true)))
        {
            std::cout<<"crow is  bird\n";
        }
    }
};

int main()
{

    sparrow s1;
    crow d1;
    s1.sparrowTest();
    d1.dogTest();

}
