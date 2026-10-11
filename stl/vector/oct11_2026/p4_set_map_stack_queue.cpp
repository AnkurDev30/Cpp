

#include<map>
#include<set>
#include<vector>
#include<iostream>
class myMap
{
    private:
    public:
        void firstQ ()
        {
            /*
            .
Insert, search, and erase
Create a map of employee IDs and salaries. Insert 5 employees, search for a given ID, and erase an employee by ID.
Concepts: insert(), find(), erase()
            */

            std::map<int,int>emp;

            for(int i=0;i<5;i++)
            {
                emp[(i+1)]=1000*(i+1);
            }
            std::cout<<"print data emp:\n";
            for(auto m:emp)
            {
                std::cout<<"id "<<m.first<<" salary : "<<m.second<<std::endl;
            }

            int id ,salary;
            std::cout<<"enter id and salary for insert\n";
            std::cin>>id>>salary;


            emp[id]=salary;

            std::cout<<"print data emp insert:\n";
            for(auto m:emp)
            {
                std::cout<<"id "<<m.first<<" salary : "<<m.second<<std::endl;
            }
            std::cout<<"\n";

            std::cout<<"enter id for find\n";
            std::cin>>id;

            auto it = emp.find(id);

            if(it!=emp.end())
            {
                std::cout<<id <<" found\n";
            }
            else
            {
                std::cout<<"not found\n";
            }
            std::cout<<"enter id for erase\n";
            std::cin>>id;

            emp.erase(id);
            std::cout<<"print data after erase:\n";
            for(auto m:emp)
            {
                std::cout<<"id "<<m.first<<" salary : "<<m.second<<std::endl;
            }
            std::cout<<"\n";
        }
        void secondQ()
        {
            /*
            Character frequency
Given "programming", count how many times each character appears using a map.
Concepts: map<char, int>, operator[]
            */

            std::map<char,int>charFreq;

            std::string charL = "Programming";

            for(int i=0;i<charL.length();i++)
            {
                charFreq[charL[i]]++;
            }
            std::cout<<"charcter frequency:\n";
            for(auto m:charFreq)
            {
                std::cout<<m.first<<" = "<<m.second<<std::endl;
            }
            std::cout<<"\n";
        }
        void fourQ()
        {
            std::map<char,int>m;
            std::string name;
            std::cout<<"enter name\n";
            std::cin>>name;

            for(int i=0;i<name.length();i++)
            {
                m[name[i]]++;
            }
            int i=0;
            for(int i=0;i<name.length();i++)
            {
                if(m[name[i]]==1)
                {
                    std::cout<<"first non repeating char\n"<<name[i]<<std::endl;
                    break;
                }
            }
        }
};
class setQ
{
    public:
        void firstQ()
        {
            std::set<int>s;
            std::vector<int>vec;

            std::cout<<"enter vector\n";
            for(int i=0;i<10;i++)
            {
                if(i%2==0)
                {
                    vec.push_back(4);
                }
                else
                {
                    vec.push_back(i);
                }
            }
            std::cout<<"first vector\n";
            for(auto m:vec)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"remove duplicate by set\n";

            s.insert(vec.begin(),vec.end());

            std::cout<<"remove duplicate by set\n";
            for(auto s1:s)
            {
                std::cout<<s1<<" ";
            }
            std::cout<<"\n";
        }
        void secondQ()
        {
            std::set<int>s;
          //  s.resize(10);

            std::cout<<"print data\n";
            for(int i=0;i<10;i++)
            {
                s.insert(rand()%((i+1)*80));
            }
            for(auto s1:s)
            {
                std::cout<<s1<<" ";
            }
            std::cout<<"\n";

            int a;
            std::cout<<"enter  a number\n";
            std::cin>>a;

            auto f =s.find(a);

            if(f!=s.end())
            {
                s.erase(f);
            }
            std::cout<<"print after earse\n";
            for(auto s1:s)
            {
                std::cout<<s1<<" ";
            }
            std::cout<<"\n";
        }
};
int main()
{
    //myMap m1;
    //m1.firstQ();
    //m1.secondQ();
    //m1.fourQ();
    setQ s1;
    //s1.firstQ();
    s1.secondQ();
}