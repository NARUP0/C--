/* 
   In C++ there are two types of copy constructors:
   1. Default copy constructor provided by the compiler.
   2. User-defined copy constructor written by the programmer.
*/

#include<iostream>
using namespace std;

class data
{
    int a; // private data member

    public:
        data() {} // default constructor

        data(int x) // parameterized constructor
        {
            a = x;
        }

        // user-defined copy constructor
        // if you comment out whole user defined copy constructor then also programme will run using defualt copy constructor
        data(data &obj) 
        {
            cout << "The copy constructor called !!!" << endl;
            a = obj.a;
        }

        void disdata() // member function to display data
        {
            cout << "The data of object is: " << a << endl;
        }
};

int main()
{
    data o1, o2(7); // o1 calls default constructor, o2 calls parameterized constructor

    o1.disdata(); // displays garbage or uninitialized value for o1
    o2.disdata(); // displays 7

    data o3(o2); // defaultly calls user-defined copy constructor
    o3.disdata(); // displays 7

    data o4 = o3; // manualy calls user-defined copy constructor
    o4.disdata(); // displays 7

    data o5;       // default constructor
    o5 = o4;       // assignment operator, NOT a copy constructor
    o5.disdata();  // displays 7 (copied through assignment)

    return 0;
}
