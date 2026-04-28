/*---------------------------------------------
Problem 3 — Book Store

Class: Book
Members: title, price
Task:

Array of 3 books

Display most expensive book

Date : 20-02-2025
-----------------------------------------------*/

//!< header file.
#include<string>
#include<iostream>
//!< namespace define.
namespace nBookStore
{
    //!< namespace defination.
    class cBookStore
    {
        //!< private data memeber.
        private:
            std::string bookTittle;
            int price;
        public:
            //!< member functions.
            void getInput(int i)
            {
                std::cout<<"enter book title for:  "<<i<<std::endl;
                std::cin>>bookTittle;
                std::cout<<"enter price for book:  "<<bookTittle<<std::endl;
                std::cin>>price;
            }
            //!< function defination
            int GetBookPrice()
            {
                return price;
            }
            std::string GetBookName()
            {
                return bookTittle;
            }

    };
}
//!< main function.
int main()
{
    nBookStore::cBookStore obj[3];
    int bookPrice = 0;
    int objID = 0;
    for(int i=0;i<3;i++)
    {
        obj[i].getInput(i+1);
    }
    //!< finding most expensive book.
    bookPrice = obj[0].GetBookPrice();
    
    for(int i=0;i<3;i++)
    {
        if(bookPrice < obj[i].GetBookPrice())
        {
            bookPrice=obj[i].GetBookPrice();
            objID = i;
        }
    }
    //!< display most expensive book.
    std::cout<<"book: "<<obj[objID].GetBookName()<<" is most expensive book"<<std::endl;
}