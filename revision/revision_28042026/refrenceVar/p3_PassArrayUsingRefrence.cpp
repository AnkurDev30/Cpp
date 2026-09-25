//Pass array using reference

#include<iostream>
class cArrayRefrence
{
    private:
        int a[5];
    public:
        cArrayRefrence()
        {
            std::cout<<"enter array"<<std::endl;
            for(int i=0;i<5;i++)
            {
                std::cin>>a[i];
            }
            std::cout<<"display array"<<std::endl;
            for(int i=0;i<5;i++)
            {
                std::cout<<a[i]<<" ";
            }   
            std::cout<<std::endl;  
        }

        void vRefrenceWithArray()
        {
            int (&b)[5]=a;

            for(int &x:b)
            {
                x++;
            }
            std::cout<<"display array via refrence"<<std::endl;
            for(int i=0;i<5;i++)
            {
                std::cout<<b[i]<<" ";
            }   
            std::cout<<std::endl; 
        }
};
int main()
{
    cArrayRefrence obj1;
    obj1.vRefrenceWithArray();
}