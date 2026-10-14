#include<iostream>
#include<memory>

int main()
{
    std::unique_ptr<int>u = std::make_unique<int>(90);
    // std::unique_ptr<int>k=std::move(u);
   //  std::cout<<*k<<std::endl;
    // u.reset();
    u.release();

     if(u==nullptr)
     {
        std::cout<<"null\n";
     }
     else
     {
        std::cout<<*u<<std::endl;
     }
}
