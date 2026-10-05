//
#include<iostream>
#include<vector>
#include<algorithm>
//#include<chrono>
void nl()
{
    std::cout<<"\n";
}
void endline()
{
    nl();
    std::cout<<"____________________________";
    nl();
}
void qNo(int q)
{
    std::cout<<"question "<<q;
    nl();
}
class one
{
    protected:
        std::vector<int>vec;
        void read(int q=0)
        {
            std::cout<<"take input for "<<q<<"\n";
           // std::this_thread::sleep_for(std::chrono::milliseconds(300));
            for(int i=0;i<10;i++)
            {
                vec.push_back(rand()%100);
            }
        }
        void print()
        {
            std::cout<<"print data\n";
            for(auto m:vec)
            {
                std::cout<<m<<" ";
            }
            nl();
        }
    public:
        void call()
        {
            qNo(1);
            read(1);
            print();
            endline();
        }
};
class second:public one
{
    public:
        //Find an element using iterator ⭐
    void findElement()
    {
        qNo(2);
        read(2);
        std::vector<int >&temp =vec;

        std::cout<<"print vector for find element\n";
    
        for(auto m:temp)
        {
            std::cout<<m<<" ";
        }
        nl();
        int findData =0;

        std::cout<<"enter a element\n";
        std::cin>>findData;

        auto f = std::find(vec.begin(),vec.end(),findData);

        if(f!=temp.end())
        {
            std::cout<<*f<<" data found\n";
        }
        else
        {
            std::cout<<"data not found\n";
        }
        endline();
    }

};
class three :public one
{
    public:
    void minMaxElement()
    {
        qNo(3);
        read(3);
        print();
        auto min = std::min_element(vec.begin(),vec.end());
        auto max = std::max_element(vec.begin(),vec.end());
        std::cout<<"min element = "<<*min<<" max element = "<<*max;
        nl();
        endline();
    }
};
class four
{
    private:
        struct stu
        {
            int roll;
            std::string str;
        };
        stu s1;
        std::string names[10] = {
                                    "NILAM",
                                    "PIYUSHA",
                                    "RITU",
                                    "RANI",
                                    "SANGEETA",
                                    "POOJA",
                                    "AARTI",
                                    "PRACHI",
                                    "DIKSHA",
                                    "POOJA"
                                };
        std::vector<stu>vec;
    public:
        void fourFun()
        {
            for(int i=0;i<10;i++)
            {
                s1.roll = i*10;
                s1.str  = names[i];
                vec.push_back(s1);
            }
            std::cout<<"print data of question 4\n";
            for(auto m:vec)
            {
                std::cout<<m.roll<<" "<<m.str;
                nl();
            }
            std::string countD;
            std::cout<<"entere name for count\n";
            std::cin>>countD;

            int countData = std::count_if(vec.begin(),vec.end(),[=](const stu&t){
                    return (countD == t.str);
            });

            std::cout<<countD<<" available is "<<countData<<" times\n";
            endline();
        }

};
class five:public one
{
//5. Modify elements using iterator
    public:
        void modifyElement()
        {
            qNo(5);
            read(5);
            print();
            
            for(
                std::vector<int>::iterator it=vec.begin();
                it!=vec.end();it++
            )
            {
                *it = *it*2;
            }
            std::cout<<"print data after modification\n";
            for(auto m:vec)
            {
                std::cout<<m<<" ";
            }

            endline();
        }
};
class six:public one
{
    //6. Erase a particular element ⭐⭐⭐
    public:
        void eraseParticular()
        {
            read(6);
            print();
            int eraseEle =0 ;
            std::cout<<"enter element for erase\n";
            std::cin>>eraseEle;
            for
            (
                std::vector<int>::iterator it=vec.begin();
                it!=vec.end();
                it++
            )
            {
                if(*it==eraseEle)
                {
                    it=vec.erase(it);
                    break;
                }
            }
            std::cout<<"print data after delete element : "<<eraseEle;
            nl();

            for(auto m:vec)
            {
                std::cout<<m<<" ";
            }
            nl();
            endline();
        }
};
class seven:public one
{
    public:

        void eraseAllOccerance()
        {
            //read(7);
            //print();
            std::cout<<"fill data for remove 3\n";
            for(int i=0;i<10;i++)
            {
                if(i%2==0)
                vec.push_back(3);
                else
                vec.push_back(i);
            }
            for(auto f:vec)
            {
                std::cout<<f<<" ";
            }
            nl();
            int earseAll;
            std::cout<<"enter a element\n";
            std::cin>>earseAll;
            for(std::vector<int>::iterator it=vec.begin();
            it!=vec.end();
            )
            {
                if(earseAll==*it)
                {
                    it=vec.erase(it);
                }
                else
                {
                    it++;
                }
            }
            std::cout<<"data print after erase all\n";
            print();
            endline();
        }
};
class eight
{
    private:
        std::vector<int>vec;
    public:
        eight()
        {
            std::cout<<"enter data\n";
            for(int i=0;i<10;i++)
            {
                vec.push_back(i*20);
            }
        }
        void insertBeforeValue()
        {
            int val1,val2;
            std::cout<<"output vector \n";
            for(auto m:vec)
            {
                std::cout<<m<<" ";
            }
            nl();
            std::cout<<"enter value where you want to inert\n";
            std::cin>>val1;
            std::cout<<"enter value for inert\n";
            std::cin>>val2;   

            for(std::vector<int>::iterator it=vec.begin();
                it!=vec.end();it++)
                {
                    if(*it==val1)
                    {
                        vec.insert(it,val2);
                        break;
                    }
                }
            std::cout<<"output vector:\n";
            for(auto m:vec)
            {
                std::cout<<m<<" ";
            }
            nl();           

            endline();
        }
};
class nine:public one
{
    public:
    void reverseFun()
    {
        read(9);
        print();
        nl();
        std::cout<<"print vector after reverse\n";
        for(
            std::vector<int>::reverse_iterator it=vec.rbegin();
            it!=vec.rend();
            it++
        )
        {
            std::cout<<*it<<" ";
        }
        nl();
        endline();
    }
};
int main()
{
    one obj;
    obj.call();
    second s;
    s.findElement();
    three t;
    t.minMaxElement();
    four obj2;
    obj2.fourFun();
    five obj5;
    obj5.modifyElement();
    six obj6;
    obj6.eraseParticular();
    seven obj7;
    obj7.eraseAllOccerance();
    eight obj8;
    obj8.insertBeforeValue();
    nine obj9;
    obj9.reverseFun();

}