/*🧱 Problem 3 — Dynamic Student Records
Requirements:

Create dynamic array of objects.

Each student should have:

name
marks
roll number

Print formatted report.

👉 Focus:

DMA with objects
structure/class arrays
formatting*/

#include<iostream>
#include<iomanip>
class StudentRecords
{
    public:
        struct StudentRec 
        {
            std::string name;
            int marks;
            int rollNumber;
        };
        StudentRec *ps;
        int Num;
        StudentRecords(int noOfRecord)
        {
            Num = noOfRecord;
            ps = new StudentRec[noOfRecord];

        }
        ~StudentRecords()
        {
            delete[] ps;
            
        }
        void ReadStudentRecord()
        {
            std::cout<<"enter data for record"<<std::endl;
            for(int i =0;i<Num;i++)
            {
                std::cout<<"enter name of student :"<<i<<" \n";
                std::cin>>ps[i].name;

                std::cout<<"enter marks of student :"<<i<<" \n";
                std::cin>>ps[i].marks;

                std::cout<<"enter roll number of student :"<<i<<" \n";
                std::cin>>ps[i].rollNumber;
            }
        }
        void printRecord()
        {
            for(int j=0;j<34;j++)std::cout<<"-";

            std::cout<<"|\n";
            std::cout<<"              REPORT              |\n";

            for(int j=0;j<34;j++)std::cout<<"-";


            std::cout<<"|\n";
            std::cout<<"| "<<std::left<<std::setw(12)<<"Student Name"<<"| "
            <<std::right<<std::setw(5)<<"Marks"<<"| "
            <<std::right<<std::setw(10)<<"Rollnumber"<<" |"
            <<std::endl;

            for(int i=0;i<Num;i++)
            {
                for(int j=0;j<34;j++)std::cout<<"-";

                std::cout<<"|\n";

                std::cout<<"| "<<std::left<<std::setw(12)<<ps[i].name<<"| "
                <<std::right<<std::setw(5)<<ps[i].marks<<"| "
                <<std::right<<std::setw(10)<<ps[i].rollNumber<<" |"
                <<std::endl;   
            }
            for(int j=0;j<34;j++)std::cout<<"-";

            std::cout<<"|\n";
        }
};

int main()
{
    int no;
    std::cout<<"enter no of records\n";
    std::cin>>no;

    StudentRecords obj(no);

    obj.ReadStudentRecord();
    obj.printRecord();

    return 0;
}