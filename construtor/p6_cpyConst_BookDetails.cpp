/**
🧱 2. Book Information Copy
Requirements:

Class:

book name
author

Copy one object into another using copy constructor.
*/

#include<iostream>

class bookInformationCpy
{
    private:
        std::string bookName;
        std::string author;
    public:
        bookInformationCpy(std::string bookNm,std::string author)
        {
            this->bookName = bookNm;
            this->author = author;
        }
        bookInformationCpy(bookInformationCpy &obj)
        {
            bookName = obj.bookName;
            author = obj.author;
        }
        void displayDta()
        {
            std::cout<<"book name   : "<<bookName<<std::endl;
            std::cout<<"author name : "<<author<<std::endl;
        }

};
int main()
{
    std::string bookName;
    std::string author;

    std::cout<<"enter book name "<<std::endl;
    std::cin>>bookName;

    std::cout<<"enter author name "<<std::endl;
    std::cin>>author;

    bookInformationCpy obj1(bookName,author);
    obj1.displayDta();

    bookInformationCpy obj2(obj1);
    obj2.displayDta();

}