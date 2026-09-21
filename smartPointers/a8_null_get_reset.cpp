//nullptr,get,reset

#include<iostream>
#include<memory>

int main()
{
    std::unique_ptr<int>ptr = nullptr;

    if(ptr == nullptr)
    {
        std::cout<<"yes\n";
    }
   // ptr.reset();
    ptr = std::make_unique<int>(100);

     if(ptr != nullptr)
    {
        std::cout<<"yes\n";

        int *a=ptr.get();

        std::cout<<"value of a = "<<*a<<std::endl;
        std::cout<<"address of both a= "<<a<<" p ="<<ptr.get()<<std::endl;
    }
    return 0;
}