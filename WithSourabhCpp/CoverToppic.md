//c with class 10 days.
//opps:reuseablity + security

//modern c++, cpp develper


// what are diffrence b/w c and cpp

c:- c is not secure.
    c follow top down down approch : soln1 + soln +sol 3  = sw
    c is combination of function, its function oriented langauage.
c++: cpp is secure,
    cpp follow bottom up approch, big pblm = b1+ b2+b3
    c is combination of object , its object oriented language.


//c++ ?
/*
    c++ is nothing but its object oriented, high level, 
    compiler based programing language

    1. why obect orient ? big program divided into objects.
    2. high level why? user can write s/w and compiler
     and computer can understand.
     compilation process:-same as c, preproceessor 
     translator assmenbler linker(namemangling)
*/


//cpp :

1) operating system : linux,windows
2) database : msSql,SQL, Oracle
3) editor: notepade and notepade++
4) compiler: tasking 
5) device driver : epsom printer 
6) protacal: http,https, FTP
7) mobile games and vedio games 
8) comercial applicatoions: bank shoping pharmacy lab 


c: c with class.
c++: - c (all funtionality )+ extra funtionality
extension of .

c++ : fetures
1. class
2. object
3. encapsulation
4. inheritance
5. data abstarction
6. polymophishm
7. data hiding
8. message communications

c++ 4 pillers
* encapsulation
* inheritance
* data abstarction
* polymophishm

class : class is nothing but extension of c struture 

c strture:
strutcure is nothing but user define data type, which can able to store diffrent data types.

c struture
struct A
{
    int a;
    char b;
    int *p;
    float d[10];

    void fun();//can not define
}

class is nothing but combination of diffrent data type 
and data members funtions.

class is blue print : when we define a class no memory alloacted 

by default class is private:

when we define a object(class variable) then memory allocated.

access specifier: public / private/ protected.



private member can access only with in class.
for private members no need to take object inside of class


onject : object is instance of class, logical unit 
            when we define class memory allocated




control statement :- they can able to contro program

                            control statement
                                    |
                           --------------------
                           |                   |
                        conditional          unconditional
                           |                        |
                     |---------------|              |  return;
               ittreative       no-itterative       |  goto
                for                 if              |  continue
                while               elese if        |  exit
                do while            switch



1.(7)  data hiding
hide the data(data members + member funtions ) from end user.
it will achive by access specifier (private , public );

class functions or variable we cna define in 2 ways ; inside of class and outside of class


if function is inside of class so compiler treated its inline funtion
and if funtion is big so it will not useful

function prototype:
funtion calling 
function defination

void sk(int a);//function prototype
inline void funq();
int main()
{
    //
    //
    sk(5);//function calling
    //
    //
    std::cout<<hello;//funq();//step 3
    std::cout<<hello;//funq();//step 3
    std::cout<<hello;//funq();//step 3
}
inline void funq()
{
    std::cout<<hello;
}

void sk(int a)//function defination
{
    std::cout<<a;
}

class Ab
{
    public:
        void fun()  //inside of class, 
        {
            std::cout<<"hello"<<std::endl;
        }
        void fun2();
};
void Ab::fun2():- outside of class
{
    std::cout<<"hi"<<std::endl;
}