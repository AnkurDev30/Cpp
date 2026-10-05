/**
insert()  1
erase()   2
clear()   3
empty()   4
front() / back() 5
emplace_back()6
operator[] vs at()7
Iterators 8
Iterator invalidation 🔥 9
Reallocation 🔥 10
*/
#include<iostream>
#include<vector>

/*const*/
#define INSERT 0
#define ERASE 0
#define CLEAR 0
#define FRONT_BACK_EMPLACE_BACK 0
#define ITERATOR 1
/*class define*/
class tryToInsert
{
    public:
        int a;
        void readVar();
        void displayVar();
};
class tryToErase:public tryToInsert
{
    public:
        int val;
        void readVal();
        void PrintVal();
};
class itLean : public tryToInsert
{
    public:
        int a,b;
    void readAB();
    void displayAB();
};
/* class function define*/
void tryToInsert::readVar()
{
    std::cout<<"enter var fill vector\n";
    std::cin>>a;
}
void tryToInsert::displayVar()
{
    std::cout<<"data: "<<a<<std::endl;
}
void tryToErase::readVal()
{
    readVar();
}
void tryToErase::PrintVal()
{
    displayVar();
}
void itLean::readAB()
{
    std::cout<<"enter a and b\n";
    std::cin>>a>>b;
}
void itLean::displayAB()
{
    std::cout<<"data1 : "<<a<<" data2 : "<<b;
}
/*
 main funtion
*/
int main()
{
    #if INSERT ==1
    {//insert
        std::vector<tryToInsert> vec;
        tryToInsert obj1;
        for(int i=0;i<5;i++)
        {
            obj1.readVar();
            vec.push_back(obj1);
        }
        for(auto insert:vec)
        {
            insert.displayVar();
        }
        int possitionForInsert;
        int value;
        std::cout<<"enter possition for inert\n";
        std::cin>>possitionForInsert;

        obj1.readVar();

        vec.insert(vec.begin()+possitionForInsert,obj1);

        std::cout<<"after Insert\n";
        for(auto insert:vec)
        {
            insert.displayVar();
        }
    }//insert
    #elif ERASE == 1
    {//erase
        tryToErase tE1;
        std::vector<tryToErase>vec;
        int erasePosition;
        for(int i=0;i<7;i++)
        {
            tE1.readVal();
            vec.push_back(tE1);
        }
        for(std::vector<tryToErase>::iterator it=vec.begin();it!=vec.end();it++)
        {
            it->PrintVal();
        }
        std::cout<<"enter possition for delete\n";
        std::cin>>erasePosition;
        vec.erase(vec.begin()+erasePosition);
        std::cout<<"data after erase\n";
        for(auto ab:vec)
        {
            ab.PrintVal();
        }
    }//erase
    #elif CLEAR==1
    {
        std::vector<int>vec;
        int ab;
        int more;
        do
        {
            std::cout<<"enter data\n";
            std::cin>>ab;
            vec.push_back(ab);
            std::cout<<"do you want to add more\n";
            std::cin>>more;
        }while(more==0);

        for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
        {
            std::cout<<"data = "<<*it<<std::endl;
        }
        if(vec.empty())
        {
            std::cout<<"vector empty\n";
        }
        else
        {
            std::cout<<"vector is not empty\n";
        }

        vec.clear();//clear the vector.

        std::cout<<"after clear command\n";

        if(vec.empty())
        {
            std::cout<<"vector empty\n";
        }
        else
        {
            std::cout<<"vector is not empty\n";
        }
    }
    #elif FRONT_BACK_EMPLACE_BACK==1
    {
        std::vector<std::string>names = {   
                                            "Ankur",
                                            "Kopal",
                                            "Krati",
                                            "RAMAYAN"
                                            "SAWAN"
                                        };
        std::cout<<names.front()<<std::endl;
        std::cout<<names.back()<<std::endl;

        names.push_back("RAVI");//it should create error.
        names.emplace_back("KAVI");

        std::cout<<names.front()<<std::endl;
        std::cout<<names.back()<<std::endl;

    }
    {
        std::cout<<"Opertor[] vs at()\nIf we try to read invalid bound vai operator[] then we will get garbage or invalid value but \nvia at opertor it will through exception\n";

    }
    #elif ITERATOR ==1
    {
        itLean i1;
        std::vector<itLean>vec;
        int option=0;
        std::vector<int>vEven;
        std::vector<int>vInsert;
        int position,value;
        int pos=0;

        std::cout<<"Select option:\n1) print vector data via iterator.\n";
        std::cout<<"2) reverse vector data via iterator.\n";
        std::cout<<"3) modify vector data via iterator.\n";
        std::cout<<"4) find Maximum element using iterator.\n";
        std::cout<<"5) erase even numbers.\n";
        std::cout<<"6) insert number.\n";
        std::cin>>option;
        if(option!=5 && option !=6)
        {
            //take data:
            for(int i=0;i<5;i++)
            {
                i1.readAB();
                vec.push_back(i1);
            }
        }

        switch(option)
        {
            case 1:
                //Q1. print vector data via iterator.
                for(std::vector<itLean>::iterator it=vec.begin();it!=vec.end();it++)
                {
                    it->displayAB();
                    std::cout<<"\n";
                }
            break;
            case 2:
                //Q2 reverse vector data via iterator
                for(std::vector<itLean>::reverse_iterator it=vec.rbegin();it!=vec.rend();it++)
                {
                    it->displayAB();
                    std::cout<<"\n";
                }  
            break;
            case 3:
                //modify vector data via iterator.\n";
                std::cout<<"first modify it, add new elemnts to all members\n";
                int a,b,c;
                std::cout<<"enter data\n";
                std::cin>>a>>b;
                for(std::vector<itLean>::iterator it=vec.begin();it!=vec.end();it++)
                {
                    it->a=it->a+a;
                    it->b=it->b+b;
                }
                for(auto modify:vec)
                {
                    modify.displayAB();
                    std::cout<<"\n";
                }
            break;
            case 4:
                //find maximum in vector";
                char opt;
                std::cout<<"check maximum by a or b\n";
                std::cin>>opt;
                std::cout<<opt;
                if(!(opt =='a' || opt=='b'))
                {
                    std::cout<<"option should be a or b\n";
                    return 0;
                }
                else
                {
                    int max;
                    switch (opt)
                    {
                        case 'a':
                            std::cout<<"find which pair a is max\n";
                            max = vec.at(0).a;
                            for(std::vector<itLean>::iterator it=vec.begin();it!=vec.end();it++)
                            {
                                if(max<it->a)
                                {
                                    max=it->a;
                                }
                            }
                            std::cout<<"maximum a= "<<max<<std::endl;
                        break;
                        case 'b':
                            std::cout<<"find which pair b is max\n";
                            max = vec.at(0).b;
                            for(std::vector<itLean>::iterator it=vec.begin();it!=vec.end();it++)
                            {
                                if(max<it->b)
                                {
                                    max=it->b;
                                }
                            }
                            std::cout<<"maximum b= "<<max<<std::endl;
                        break;
                    }
                }
            break;
            case 5://!<erase even numbers from vector.
                
                for(int i=0;i<100;i++)
                {
                    vEven.push_back(i);
                }
                std::cout<<"display vector\n";
                for(auto am:vEven)
                {
                    std::cout<<am<<" ";//<<std::endl;
                }
                std::cout<<"\n";
                std::cout<<"remove even\n";
                for(std::vector<int>::iterator it=vEven.begin();
                it!=vEven.end();it++)
                {
                    if(*it%2==0)
                    {
                        it = vEven.erase(it);
                    }
                }
                std::cout<<"after removing even display\n";
                for(auto am:vEven)
                {
                    std::cout<<am<<" ";//<<std::endl;
                }
                std::cout<<"\n";
            break;
            case 6://!<inser element.
            
                for(int i=1;i<100;i=i*3)
                {
                    vInsert.push_back(i);
                }
                std::cout<<"display vector\n";
                for(auto am:vInsert)
                {
                    std::cout<<am<<" ";//<<std::endl;
                }
                std::cout<<"\n";
                std::cout<<"Inser number\n";
                
                std::cout<<"enter position\n";
                std::cin>>position;
                std::cout<<"enter value for insert\n";
                std::cin>>value;
                
                for(std::vector<int>::iterator it=vInsert.begin();
                it!=vInsert.end();it++)
                {
                    if(pos==position)
                    {
                        it = vInsert.insert(it,value);
                        it++;
                    }
                    pos++;
                }
                std::cout<<"after inserting  display\n";
                for(auto am:vInsert)
                {
                    std::cout<<am<<" ";//<<std::endl;
                }
                std::cout<<"\n";
            break;
            
        }
    }
    #endif

}