#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>

#define lineEnd std::cout<<"__________________________\n";
#define OLD_ONE 0

void startline(int q)
{
    std::cout<<"__________________________\n";
    std::cout<<"question number = "<<q<<std::endl;
}

class one
{//Create and print a list
    private:
        std::list<int>l;
    public:
        void print()
        {
            startline(1);
            std::cout<<"enter data\n";
            for(int i=0;i<10;i++)
            {
                l.push_back(i);
            }
            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";
        }
};
class two
{//2. Insert from both ends
    private:
        std::list<int>l;
    public:
        void insertData()
        {
            startline(2);
            std::cout<<"insert data from both side\n";

            for(int i=0,j=100;i<10;i++,j--)
            {
                l.push_back(i);
                l.push_front(j);
            }
            std::cout<<"print data\n";
            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";
        }
        std::list<int>& getList()
        {
            return l;
        }
};
class three:public two
{//3 Find an element ⭐
    public:
        std::list<int>l = getList();
        three(two & o1){
            l =o1.getList();
        }
        void findData()
        {
            startline(3);
            std::cout<<"find data\n";
            int a;
            std::cout<<"enter data for find\n";
            std::cin>>a;

            auto fin = std::find(l.begin(),l.end(),a);

            if(fin!=l.end())
            {
                std::cout<<"find data\n";
            }
            else
            {
                std::cout<<"data not find\n";
            }
            
        }
};
class four:public two
{//4. Count an element
    private:
    std::list<int>d;

    public:
        four(two &t)
        {
            d =t.getList();
        }
        void countData()
        {
            startline(4);
            int countd=0,var;
            std::cout<<"check which number you have to count\n ";
            std::cin>>var;
            countd = std::count(d.begin(),d.end(),var);

            std::cout<<"count = "<<countd<<std::endl;
            
        }
};
class five:public two
{//5. Find minimum and maximum
    private:
        std::list<int>l1;
    public:
        five(two &t)
        {
            l1=t.getList();
        }
        void minMax()
        {
            startline(5);

            auto min = std::min_element(l1.begin(),l1.end());
            auto max = std::max_element(l1.begin(),l1.end());

            std::cout<<"minimum of list = "<<*min<<std::endl;
            std::cout<<"maximum of list = "<<*max<<std::endl;
        }

};
class six:public two
{
    //6. Insert before a particular element ⭐
    private:
        std::list<int>l;
    public:
        six(two &y)
        {
            l=y.getList();
        }
        void insertElement()
        {
            startline(6);
            int inst = 0;
            int pos=0;
            std::cout<<"enter a number where we need to insert\n";
            std::cin>>inst;
            std::cout<<"what number we need to insert\n";
            std::cin>>pos;
            for(std::list<int>::iterator it=l.begin();it!=l.end();it++)
            {
                if(*it==inst)
                {
                    l.insert(it,pos);
                    break;
                }
            }
            std::cout<<"print data after insertion\n";

            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";
        }
};
class seven :public two
{//Erase a particular element ⭐⭐⭐
    private:
        std::list<int>l;
    public:
        seven (two &t)
        {
            l=t.getList();
        }
        void eraseAparticularElement()
        {
            startline(7);
            int eraseNum;
            std::cout<<"enter element for erase\n";
            std::cin>>eraseNum;

            for(std::list<int>::iterator it=l.begin();it!=l.end();it++)
            {
                if(*it==eraseNum)
                {
                    it=l.erase(it);
                    break;
                }
            }
            std::cout<<"print list data after erase a element\n";

            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<std::endl;
        }
};
class eight :public two
{//8. Erase all occurrences
    private:
        std::list<int>l;
    public:
        eight(two &t)
        {
            l=t.getList();
            //modify becuase need some duplicate num
            for(std::list<int>::iterator i=l.begin();i!=l.end();i++)
            {
                if(*i%2==0)
                {
                    *i=8;
                }
            }
        }
        void eraseAllOccurrences()
        {
            startline(8);
            int num;
            std::cout<<"print data after modification\n";
            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";
            std::cout<<"enter a number for delete all occurrences\n";
            std::cin>>num;
            for(std::list<int>::iterator i=l.begin();i!=l.end();)
            {
                if(*i==num)
                {
                    i=l.erase(i);
                }
                else
                {
                    i++;
                }
            }
            std::cout<<"print data after remove all occerrences\n";
            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<std::endl;
        }
};
class nine
{
    private:
        std::list<int>l;
    public:
        nine()
        {
            for(int i=0;i<20;i++)
            {
                l.emplace_back(i);
            }
        }
        void removeEven()
        {
            startline(9);
            std::cout<<"print data\n";
            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";

            for(std::list<int>::iterator i = l.begin();i!=l.end();)
            {
                if(*i%2==0)
                {
                    i = l.erase(i);
                }
                else
                {
                    i++;
                }
            }
            std::cout<<"print data after erase element\n";
            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<std::endl;
        }
};
class ten:public two
{
    private:
        std::list<int>l;
    public:
        ten(two &t)
        {
            l=t.getList();
        }
    void reverseList()
    {
        startline(10);
        l.reverse();

        std::cout<<"print data after reverse\n";

        for(auto m:l)
        {
            std::cout<<m<<" ";
        }
        std::cout<<std::endl;
    }
};
class eleven:public two
{//11. Sort a list ⭐
    private:
        std::list<int>l;
    public:
        eleven(two &t)
        {
            l=t.getList();
        }
        void sorting()
        {
            startline(11);
            std::cout<<"sorting list\n";
            l.sort();
            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";
        }
};
class tweleve
{
    private:
        std::list<int>l;
    public:
        tweleve()
        {
            for(int i=0;i<10;i++)
            {
                if(i%2)l.push_back(5);
                else l.push_back(i);
            }
            
        }
        void deleteDuplicate()
        {
            startline(12);
            l.sort();

            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";
            auto f = std::unique(l.begin(),l.end());

            l.erase(f,l.end());

            std::cout<<"delete duplicate\n";
            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<std::endl;
        }

};
class thirteen
{
    private:
        std::list<int>l;
    public:
        thirteen()
        {
            for(int i=0;i<10;i++)
            {
                l.push_back(rand()%100);
            }
        }
        void secondLargeSecondSmall()
        {
            startline(13);
            std::cout<<"print data\n";
            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<std::endl;
            secondLarge();
            secondSmallest();
        }
        void secondLarge()
        {
            int max = 0;
            max=l.front();

            for(std::list<int>::iterator it=l.begin();it!=l.end();it++)
            {
                if(max<*it)
                {
                    max=*it;
                }
            }
            std::cout<<"max="<<max<<std::endl;
            int sMax=l.front();
            for(std::list<int>::iterator it=l.begin();it!=l.end();it++)
            {
                if(sMax<*it && *it!=max)
                {
                    sMax=*it;
                }
            }
            std::cout<<"second max="<<sMax<<std::endl;
        }
        void secondSmallest()
        {
            int small = 0;
            small=l.front();

            for(std::list<int>::iterator it=l.begin();it!=l.end();it++)
            {
                if(small>*it)
                {
                    small=*it;
                }
            }
            std::cout<<"smallest="<<small<<std::endl;
            int sMin=l.front();
            for(std::list<int>::iterator it=l.begin();it!=l.end();it++)
            {
                if(sMin>*it && *it!=small)
                {
                    sMin=*it;
                }
            }
            std::cout<<"second small="<<sMin<<std::endl;
        }

};
class sixteen
{
    private:
    std::list<int>l1,l2;
    public:
    sixteen()
    {
         startline(16);
         for(int i=0;i<10;i++)
         {
            l1.push_back(rand()%50);
            l2.push_back(rand()%60);
         }
    }
    void merging()
    {
        std::cout<<"print first list\n";
        for(auto m:l1)
        {
            std::cout<<m<<" ";
        }
        std::cout<<std::endl;
        std::cout<<"print second list\n";
        for(auto m:l2)
        {
            std::cout<<m<<" ";
        }
        std::cout<<std::endl;
        l1.sort();
        l2.sort();
        l1.merge(l2);

        std::cout<<"print merge list\n";
        for(auto m:l1)
        {
            std::cout<<m<<" ";
        }
        std::cout<<std::endl;  
    }
};
class seventeen 
{//Remove elements greater than a value
    private:
        std::list<int>l1;
    public:
        seventeen()
        {
            startline(17);
            for(int i=0;i<20;i++)
            {
                l1.push_back(rand()%1000);
            }
            std::cout<<"print data\n";
            for(auto m:l1)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";
        }
        void removeGraeterThan()
        {
            std::cout<<"remove grater than value\n";
            int removeVal;
            std::cout<<"enter value for grater than remove\n";
            std::cin>>removeVal;
            for(std::list<int>::iterator it=l1.begin();
            it!=l1.end();)
            {
                if(*it>removeVal)
                {
                    it=l1.erase(it);
                }
                else
                {
                    it++;
                }
            }

            std::cout<<"remove grater than \n";
            for(auto m:l1)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";
        }

};
class eighteen
{//18. Move all even numbers to the front ⭐⭐⭐
    private:
        std::list<int>l;
    public:
        eighteen()
        {
            startline(18);
            std::cout<<"input list\n";
            for(int i=0;i<10;i++)
            {
                l.push_back(rand()%100);
            }
            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";
        }
        void moveEven()
        {

            for(std::list<int>::iterator it=l.begin();it!=l.end();it++)
            {
                if(*it%2!=0)
                {
                    for(std::list<int>::iterator it1=std::next(it);it1!=l.end();it1++)
                    {
                       if(*it1%2==0)
                       {
                            int temp=*it1;
                            *it1=*it;
                            *it=temp;
                            break;
                       }
                    }
                }
            }
            std::cout<<"move even\n";
            for(auto m:l)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";
        }

};
int main()
{
#if OLD_ONE==1
    one obj1;
    obj1.print();

    two obj2;
    obj2.insertData();

    three obj3(obj2);
    obj3.findData();

    four obj4(obj2);
    obj4.countData();

    five obj5(obj2);
    obj5.minMax();

    six obj6(obj2);
    obj6.insertElement();

    seven obj7(obj2);
    obj7.eraseAparticularElement();

    eight obj8(obj2);
    obj8.eraseAllOccurrences();

    nine obj9;
    obj9.removeEven();

    ten obj10(obj2);
    obj10.reverseList();

    eleven obj11(obj2);
    obj11.sorting();

    tweleve obj12;
    obj12.deleteDuplicate();

    thirteen obj13;
    obj13.secondLargeSecondSmall();

    sixteen obj16;
    obj16.merging();


    seventeen obj17;
    obj17.removeGraeterThan();
   
#endif

    eighteen obj18;
    obj18.moveEven();
     lineEnd;
}