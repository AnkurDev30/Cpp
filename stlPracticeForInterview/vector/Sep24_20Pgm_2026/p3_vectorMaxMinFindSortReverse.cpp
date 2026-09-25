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
void enterData(std::vector<int>&vec)
{
    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }

}
void printData(std::vector<int>&vec)
{
    std::cout<<"print Data : \n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}
void max_minElement(std::vector<int>&vec)
{
    auto min = std::min_element(vec.begin(),vec.end());
    auto max = std::max_element(vec.begin(),vec.end());

    std::cout<<"minimum element = "<<*min<<std::endl;
    std::cout<<"maximum element = "<<*max<<std::endl;
}
void findFun    (std::vector<int>&vec)
{
    int num;
    std::cout<<"enter data for find\n";
    std::cin>>num;
}
void countFun   (std::vector<int>&vec)
void sortFun    (std::vector<int>&vec)
void reverseFun (std::vector<int>&vec)
int main()
{
    std::vector<int>vec;
    std::thread t1(enterData,std::ref(vec));
    std::thread t2(printData,std::ref(vec));
    std::thread t3(max_minElement,std::ref(vec));
    std::thread t4(findFun,std::ref(vec));
    std::thread t5(countFun,std::ref(vec));
    std::thread t6(sortFun,std::ref(vec));
    std::thread t7(reverseFun,std::ref(vec));
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    t7.join();
}