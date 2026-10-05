/*
    max_element() / min_element()
    find()
    count()
    sort() ascending/descending
     reverse()
*/

#include<iostream>
#include<vector>

#include<algorithm>
#include<thread>
#include<chrono>
void delay(int d)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(d));
}
void enterData(std::vector<int>&vec)
{
    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }
    delay(300);
}
void printData(std::vector<int>&vec)
{
    std::cout<<"print Data : \n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    delay(300);
}
void max_minElement(std::vector<int>&vec)
{
    auto min = std::min_element(vec.begin(),vec.end());
    auto max = std::max_element(vec.begin(),vec.end());

    std::cout<<"minimum element = "<<*min<<std::endl;
    std::cout<<"maximum element = "<<*max<<std::endl;
    delay(300);
}
void findFun    (std::vector<int>&vec)
{
    int num;
    std::cout<<"enter data for find\n";
    std::cin>>num;

    auto findD = std::find(vec.begin(),vec.end(),num);
    if(findD!=vec.end())
    {
        std::cout<<"data avaiable : "<<*findD<<std::endl;;
    }
    else
    {
        std::cout<<"data not avaiable : "<<std::endl;;
    }
    delay(300);
}
void countFun   (std::vector<int>&vec)
{
    int val=0;
    std::cout<<"enter value for count in vec\n";
    std::cin>>val;
    int countVal = std::count(vec.begin(),vec.end(),val);

    std::cout<<"availbale counts = "<<countVal<<std::endl;
    delay(300);
}
void sortFun    (std::vector<int>&vec)
{
    std::vector<int>temp =vec;
    std::cout<<"sort by desending order\n";

    std::sort(temp.begin(),temp.end(),[](int a,int b){
        return a>b;
    });


    for(auto j:temp)
    {
        std::cout<<j<<" ";
    }
    std::cout<<"\n";
    delay(300);
}
void reverseFun (std::vector<int>&vec)
{
    std::cout<<"reverse data\n";
    std::vector<int>temp =vec;
    std::reverse(vec.begin(),vec.end());

    for(auto j:temp)
    {
        std::cout<<j<<" ";
    }
    std::cout<<"\n";
    delay(300);
}
int main()
{
    std::vector<int>vec;
    std::thread t1(enterData,std::ref(vec));
    t1.join();
    std::thread t2(printData,std::ref(vec));
    t2.join();
    std::thread t3(max_minElement,std::ref(vec));
    t3.join();
    std::thread t4(findFun,std::ref(vec));
    t4.join();
    std::thread t5(countFun,std::ref(vec));
    t5.join();
    std::thread t6(sortFun,std::ref(vec));
    t6.join();
    std::thread t7(reverseFun,std::ref(vec));
    t7.join();
    
    delay(300);
}