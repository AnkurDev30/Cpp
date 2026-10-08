#include<iostream>
class shallowWork
{
    public:
        int *p;
        shallowWork (shallowWork& obj)
        {
           p = obj.p;
        }
        shallowWork(){
            p=new int();
        }
        void display()
        {
            std::cout<<"display  p :"<<*p<<std::endl;
        }
        void readP()
        {
            
            std::cout<<"enter p\n";
            std::cin>>*p;
        }
        void modify()
        {
            int a;
            std::cout<<"modify the data : = \n";
            std::cin>>a;
            *p=a;
        }
        ~shallowWork()
        {
            std::cout<<"destrutor\n";
            delete p;
        }
};
class shallowDemo 
{
    public:
        
        void shallowCpyDemo()
        {
            shallowWork s1;
            s1.readP();
            shallowWork s2(s1);
            s1.display();
            s2.display();
        }
};
class deepwork
{
    public:
        int *p;
        deepwork()
        {
            p = new int();
        }
        deepwork(deepwork& obj)
        {
            p = new int (*obj.p);
        }
        void readP()
        {
            
            std::cout<<"enter p\n";
            std::cin>>*p;
        }
        void modify()
        {
            int a;
            std::cout<<"modify the data : = \n";
            std::cin>>a;
            *p=a;
        }
        ~deepwork()
        {
            std::cout<<"destrutor\n";
            delete p;
        }
        void display(std::string str)
        {
            std::cout<<str<<" display  p :"<<*p<<std::endl;
        }
};
int main()
{
  //  shallowDemo s1;
  //  s1.shallowCpyDemo();
  deepwork d1;
  d1.readP();
  d1.display("d1");
  deepwork d2(d1);

  d2.display("d2");
  d2.modify();
  d2.display("d2");
  d1.display("d1");
}