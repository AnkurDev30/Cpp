/*syntax : className return operator +/-/ * / (class name_object)
            {
                //body
                return object
            }*/


#include<iostream>

class opertorDemo 
{
    public:
        int x;
        int y;
        void readx()
        {
            std::cout<<"enter x:\n";
            std::cin>>x;
            std::cout<<"enter y:\n";
            std::cin>>y;
        }
    
    opertorDemo operator -(opertorDemo &obj)
    {
        opertorDemo obj2;
        obj2.x = obj.x-this->x;
        obj2.y = obj.y-this->y;
        return obj2;
    }
    void display()
    {
        std::cout<<"x value = "<<x<<std::endl;
        std::cout<<"y value = "<<y<<std::endl;
    }

};
int main()
{
    opertorDemo o1,o2,o3;

    o1.readx();
    o2.readx();
    o3 = o1 - o2;

    o3.display();
    

}

//+ - * / =()

