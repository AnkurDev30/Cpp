/**
1.Insert N elements and print.
2.Find max and min element.
3.Find sum and average.
4.Search an element.
5.Count even and odd numbers.
*/

#include<iostream>
#include<vector>

class insertN_ElementsPrint 
{
    private:
        int nElements;
        std::vector<int>vect;
    public:
        insertN_ElementsPrint()
        {
            std::cout<<"Enter N Elements\n";
            std::cin>>nElements;
            readElements();
        }
        void readElements()
        {
            int var;
            std::cout<<"Read data of "<<nElements<<" elements\n";
            for(int i=0;i<nElements;i++)
            {
                std::cin>>var;
                vect.push_back(var);
            }
        }
        void printElements()
        {
            std::cout<<"Print data of "<<nElements<<" elements\n";
            for(int i=0;i<vect.size();i++)
            {
                std::cout<<"Data["<<i<<"] = "<<vect[i]<<std::endl;
            }
        }
        void insertN_ElementsPrintFun()
        {
            //readElements();
            printElements();
        }
        std::vector<int> getVectorData()
        {

            return vect;
        }
        int getNumberOfElements()
        {
            return nElements;
        }
};
class findMinMaxElement:public insertN_ElementsPrint
{
    public:
        void findMinElements()
        {
            std::vector<int> vect;
            int elements;
            vect = getVectorData();
            elements = getNumberOfElements();

            int min=vect[0];
            for(int i =0;i<vect.size();i++)
            {
                if(min>vect[i])
                {
                    min =vect[i];
                }
            }
            std::cout<<"Minimum Element = "<<min<<std::endl;
        }
        void findMaxElements()
        {
            std::vector<int> vect;
            int elements;
            std::cout<<"Hi\n";
            vect = getVectorData();
            elements = getNumberOfElements();

            int max=vect[0];
            for(int i =0;i<vect.size();i++)
            {
                if(max<vect[i])
                {
                    max =vect[i];
                }
            }
             std::cout<<"Maximum Element = "<<max<<std::endl;
        }   
        void finMinMaxElmenentFun()
        {
            findMaxElements();
            findMinElements();
        }     
};
class sumAndAverageCalc:public insertN_ElementsPrint
{
    private:
        float sum;
    public:
        sumAndAverageCalc()
        {
            sum =0;
        }
        void sumAndAverageElements()
        {
            std::vector<int>vect = getVectorData();
            int noOfElements =getNumberOfElements();
            for(int i=0;i<vect.size();i++)
            {
                sum+=vect[i];
            }
            std::cout<<"Sum = "<<sum<<std::endl;
            std::cout<<"Average = "<<static_cast<float>(sum/noOfElements)<<std::endl;

        }
};
class searchElement:public insertN_ElementsPrint
{
    private:
        int searchEle;
    public:
        searchElement()
        {
            std::cout<<"Enter element for search\n";
            std::cin>>searchEle;
        }
        void search()
        {
            std::vector<int>vect = getVectorData();
            auto searchFlagc=false;
            for(auto a:vect)
            {
                if(a== searchEle)
                {
                    std::cout<<"Available\n";
                    searchFlagc = true;
                    break;
                }
            }
            if(searchFlagc==false)
            {
                 std::cout<<"Not available\n";
            }
        }
};
class countEvenAndOdd:public insertN_ElementsPrint
{
    private:
        int evenCount;
        int oddCount;
    public:
        countEvenAndOdd()
        {
            evenCount = 0 ;
            oddCount  = 0 ;
        }
        void evenAndOddCount()
        {
            std::vector<int>vect =getVectorData();
            for(auto a:vect)
            {
                if(a%2==0)
                {
                    evenCount++;
                }
                else
                {
                    oddCount++;
                }
            }
            std::cout<<"Even count = "<<evenCount<<std::endl;
            std::cout<<"Odd count = "<<oddCount<<std::endl;
        }

};
int main()
{
    insertN_ElementsPrint obj1;
    obj1.insertN_ElementsPrintFun();

    findMinMaxElement obj2;
    obj2.finMinMaxElmenentFun();

    sumAndAverageCalc obj3;
    obj3.sumAndAverageElements();

    searchElement obj4;
    obj4.search();

    countEvenAndOdd obj5;
    obj5.evenAndOddCount();
}