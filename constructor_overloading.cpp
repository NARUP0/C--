/* constructor overloading : allows a class to have multiple constructors with different parameter 
                             lists, enabling flexible object initialization. */

#include<iostream>   

using namespace std; 


class complex
{
    int a, b;  

public:
    // Default constructor: initializes real and imaginary parts to 0
    complex()
    {
        a = 0;
        b = 0;
    }

    // Parameterized constructor: initializes with given real and imaginary parts
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    // Single parameter constructor: initializes real part with given value, imaginary part set to 0
    complex(int x)
    {
        a = x;
        b = 0;
    }

    // Member function to display the complex number
    void discomplex()
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1;        
    c1.discomplex();   

    complex c2(1, 2);  
    c2.discomplex();   

    complex c3(7);     
    c3.discomplex();   

    return 0;          
}
