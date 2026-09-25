/*
1.Insert element at a given position.
2.Delete element at a given position.
3.Reverse a vector.
4.Sort ascending and descending.
5.Remove duplicate elements.
*/
#include<iostream>
#include<vector>
class vec 
{
    private:
        int elements;
        std::vector<int>vect;
    public:
        std::vector<int>getVector()
        {
            return vect;
        }
        vec()
        {
            std::cout<<"enter no of elements\n";
            std::cin>>elements;
            std::cout<<"read elements : \n";
            int data;
            for(int i=0;i<elements;i++)
            {
                std::cout<<"enter data for element : "<<i<<std::endl;
                std::cin>>data;
                vect.push_back(data);
            }
        }
        void insertElement()
        {
            int ele;
            int position;
            std::cout<<"enter position for insert\n";
            std::cin>>position;
            std::cout<<"enter element for insert\n";
            std::cin>>ele;
            if(position<vect.size())
            {
                vect.insert(vect.begin()+position,ele);
            }
        }
        void display()
        {
            std::cout<<"display data\n";
            for(auto a:vect)
            {
                std::cout<<"data = "<<a<<std::endl;
            }
        }   
        void insertOperation()
        {
            insertElement();
            display();
        }
};
class deleteElement:public vec
{
    public:
        void deleteVec()
        {
            int position;
            std::vector<int>vect = getVector();
            std::cout<<"enter posistion\n";
            std::cin>>position;
            if(position<=vect.size())
            {
                vect.erase(vect.begin()+position);
                std::cout<<"display data after delete\n";
                for(auto a:vect)
                {
                    std::cout<<"data = "<<a<<std::endl;
                }
            }
            else
            {
                std::cout<<"enterd wrong position\n";
            }
        }
};
class reverseVector:public vec
{
    public:
        void reverseVectorFun()
        {
            std::vector<int> vec = getVector();
            int temp;
            for(int i=0,j=vec.size()-1;i<j;i++,j--)
            {
                temp = vec[j];
                vec[j]=vec[i];
                vec[i]=temp;
            }

            std::cout<<"display data after delete\n";
            for(auto a:vec)
            {
                std::cout<<"data = "<<a<<std::endl;
            }
        }
};
class shorting_h:public vec
{
    public:
        void assendingOrder()
        {
            std::vector<int> vec = getVector();
            int temp;
            for(int i=0;i<vec.size()-1;i++)
            {
                for(int j=i+1;j<vec.size();j++)
                {
                    if(vec[i]>vec[j])
                    {
                        temp = vec[j];
                        vec[j]=vec[i];
                        vec[i]=temp;
                    }
                }
            }
            std::cout<<"display data after assending\n";
            for(auto a:vec)
            {
                std::cout<<"data = "<<a<<std::endl;
            }            
        }
        void desendingOrder()
        {
            std::vector<int> vec = getVector();
            int temp;
            for(int i=0;i<vec.size()-1;i++)
            {
                for(int j=i+1;j<vec.size();j++)
                {
                    if(vec[i]<vec[j])
                    {
                        temp = vec[j];
                        vec[j]=vec[i];
                        vec[i]=temp;
                    }
                }
            }
            std::cout<<"display data after disending\n";
            for(auto a:vec)
            {
                std::cout<<"data = "<<a<<std::endl;
            }            
        }
        void shortig()
        {
            assendingOrder();
            desendingOrder();
        }
};
class duplicateRemove :public vec
{
    public:
        void remDuplicate()
        {
            std::vector<int>vec = getVector();
            for(int i=0;i<vec.size();i++)
            {
                for(int j=i+1;j<vec.size();j++)
                {
                    if(vec[i] == vec[j])
                    {
                        vec.erase(vec.begin()+j);
                    }
                }
            }
            std::cout<<"display data after delete duplicate\n";
            for(auto a:vec)
            {
                std::cout<<"data = "<<a<<std::endl;
            }  
        }
};
int main()
{
    std::cout<<"Insert Data\n";
    vec v1;
    v1.insertOperation();

    std::cout<<"Delete Data\n";
    deleteElement v2;
    v2.deleteVec();

    std::cout<<"Reverse Data\n";
    reverseVector v3;
    v3.reverseVectorFun();

    std::cout<<"Shorting Data\n";
    shorting_h v4;
    v4.shortig();

    std::cout<<"Remove duplicate elements.\n";
    duplicateRemove v5;
    v5.remDuplicate();
}