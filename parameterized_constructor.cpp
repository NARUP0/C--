/* Parameterized constructor : is a type of constructor that takes one or more parameters during 
   object creation, allowing you to initialize the object's attributes with specific values provided 
   at the time of creation. */

#include<iostream>

using namespace std ;

class complex 
{
    int a, b ;

    public :
        complex()                       // Default constructor initializes 
        {
            a = 0 ;
            b = 0 ;
        }

        complex(int x, int y)          // Parameterized constructor initializes
        {
            a = x ;
            b = y ;
        }

        void discomplex()              // Function to display the complex number
        {
            cout<<"the complex no. is : "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main()
{
    complex o1 ;                       // Calls default constructor
    o1.discomplex();

    complex o2(5, 6);                  // Calls parameterized constructor (implicit call)
    o2.discomplex();
    
    complex o3 = complex(8, 9);        // Calls parameterized constructor (Explicit call)
    o3.discomplex();

    return 0;
}