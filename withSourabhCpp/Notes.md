#basic.
Structured programming encourages interaction of functions.

OO programming encourages interaction of objects

A class is a user-defined type on the basis of which objects are created

An object contains specific data values and functions that can access or and/or manipulate them

Data members and member functions are encapsulated in an object

Data hiding means denying direct access to data from outside the object

Inheritance permits us to inherit properties of a base class into a derived class

Polymorphism permits us to use same function for different implementation in different derived classes

Containership lets us nest objects

Templates permit us to write generic functions/classes, leaving it for the compiler to create specific versions of them

C++ exceptions lets us handle run-time errors in OO manner

C++ promotes reuse of existing code using inheritance, containership and templates.

#oop:

- Every C program is a valid C++ program too.

- Different versions of C++ are C++98, C++11, C++14 and C++17

- C++ supports two types of comments. Usually // type of comment is used for single line and /* ... */ for multiple lines

- cout is an object of ostream class. It is used for sending output to screen

- endl is used send '\n' to the screen

- >> is an extraction operator
- << is an insertion operator

- <<,>> can be cascaded

- ostream and istream classes are declared in iostream header file

- cout and cin objects are defined in a namespace called std

- To use cout and cin, iostream file must be included and a using namespace statement should be used at the beginning of the program.

- If using namespace statement is not used then cout and cin must be prefixed with std::

- cin and cout are better than printf() and scanf() on two counts:
  1. There is no need to remember and use the format specifiers
  2. They can be used to input/output multiple values in an object

- A variable can be initialized in 3 ways:
int i = 20;
int j (20);
int k {30};

- auto keyword can be used to infer the type of a variable from the value being assigned to it

- decltype keyword can be used to infer the type of a variable without assigning a value to it (will discuss in future)

- While defining structure, union displayor enum variable there is no need to use the keywords struct, union or enum

- Anonymous unions and enums permit direct access to their elements without being required to create union or enum variables

- Anonymous unions are useful when they are nested in a structure

- A variable can be defined just before the point of usage

- If a variable is defined in a loop, then it dies when the control goes out of the loop

- Both typecasting operations are valid:
n = (y-1) * (long) j;
n = (y-1) * long (j);

Any type of pointer can be assigned to a void pointer

To assign a void pointer to any other type of pointer, it must be suitably typecasted

The scope resolution operator :: is used to access a global variable by the same name as a local variable

References are constant pointers that get automatically dereferenced

A reference can be tied with only one variable

A variable may have multiple references

A reference to a reference is not possible

An array of references is not allowed

Three types of function calls.
- Call by value - pass values of actual arguments
- Call by address - pass addresses of actual arguments
- Call by reference - pass addresses of actual arguments

In a call by reference changing formal arguments in the function does not change actual arguments

In call by address and call by reference, using formal arguments, actual arguments can be changed

In a function called by address, to reach the actual arguments one has to use pointers and the associated syntax

In a function called by reference, to reach the actual arguments one has to use references and the associated syntax (simpler)

Call by address and call by reference are also useful while sending big objects to a function as they do not make a copy of the object being passed

When a function returns a reference, the function call can exist in any context where a reference can exist, including on the left hand side of an assignment

When a variable is marked as const its value will not change throughout the program

const is better than a #define as scope of const can be either local or global

#define always has a global scope

const can also be used to keep pointers, references and strings constant

If a reference is declared as constant then using it the variable that the reference is tied with cannot be modified

A structure and a class can contain member functions. They also can be marked as const.

A bool data type can take only two values - true or false

If a bool is used in arithmetic, then a true value is treated as 1 and false is treated as 0

If an integer is used in a boolean expression then a non-zero value is treated as true and a 0 is treated as false
