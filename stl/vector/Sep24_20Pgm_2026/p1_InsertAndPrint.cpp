//Push and print elements

#include<iostream>
#include<vector>
class sizeAndCapacity;
class pushAndPrint
{
    private:
        std::vector<int>vec;
    public:
        void readData()
        {
            std::cout<<"push data\n";
            for(int i=0;i<10;i++)
            {
                int a=rand()%1000;
                vec.push_back(a);
            }
        }
        void printData()
        {
            for(auto it:vec)
            {
                std::cout<<it<<" ";
            }
            std::cout<<"\n";
        }
        std::vector<int> getVector()
        {
            return vec;
        }
        friend class sizeAndCapacity;
        friend class frontBackAtIndexOperator;
};
class sizeAndCapacity
{
    private:
        pushAndPrint &obj;
        int size     =  obj.vec.size();
        int capacity =  obj.vec.capacity();
    public:
        sizeAndCapacity(pushAndPrint &o1,int option = 0):obj(o1)
        {
            if(option==0)//if option 0 means both size and capacity
            {
                std::cout<<"vector size = "<<size<<std::endl;
                std::cout<<"vector capacity = "<<capacity<<std::endl;
            }
            else 
            {
                if(option == 1)
                {
                    std::cout<<"vector size = "<<size<<std::endl;
                }
                else
                {
                    if(option == 2)
                    {
                        std::cout<<"vector capacity = "<<capacity<<std::endl;
                    }
                }
            }
        }
};
class inserAtmiddle
{
    public:
        void insertAtMiddleFun(std::vector<int>&vec)
        {
            int size = vec.size();
            int possition =0;
            size=size/2;
            int value =0;
            std::cout<<"enter value for insert\n";
            std::cin>>value;
            if(size%2==0)
            {
                possition = size;
            }
            else
            {
                possition = size;
            }

            vec.insert(vec.begin()+possition,value);

            std::cout<<"debug print:\n";
            for(auto m:vec)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";
        }
};
class frontBackAtIndexOperator 
{
    private:
        pushAndPrint &p1;
    public:
        frontBackAtIndexOperator(pushAndPrint &p):p1(p){}
        void readDataFromFrontBackAtIndex()
        {
            std::cout<<"front data of vector = "<<p1.vec.front()<<std::endl;
            std::cout<<"back data of vector = "<<p1.vec.back()<<std::endl;
            std::cout<<"at data of vector = "<<p1.vec.at(6)<<std::endl;
            std::cout<<"data via index operatot of vector = "<<p1.vec[9]<<std::endl;
        }
    
};
void printVecData(std::vector<int>vec)
{
    std::cout<<"print data after insert\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    
    }
    std::cout<<"\n";
}
int main()
{
     pushAndPrint obj1;
     obj1.readData();
     obj1.printData();
     sizeAndCapacity s1(obj1);//o for capaciry and size
     frontBackAtIndexOperator f1(obj1);
     f1.readDataFromFrontBackAtIndex();
     inserAtmiddle inserMiddleObj;
     std::vector<int>pass =obj1.getVector();
     inserMiddleObj.insertAtMiddleFun(pass);
     printVecData(pass);
     
}