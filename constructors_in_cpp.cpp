/*  // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class when objects is created insures it 
      start with valid value instead of garbage
    //It is automatically invoked whenever an object is created */


#include<iostream>  

using namespace std; 


class complex 
{
    int a, b;  

public:
    // Default constructor (no parameters)
    complex(void)         // default constructor with no parameters. this means when you create a                       
    {                     // object without providing any arguments, this constructor will be called.       
        a = 0;
        b = 0;
    }

    // Member function to display the complex number
    void disdata()
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    // Creating three objects of the class 'complex'
    // Since no parameters are provided, the default constructor is called for each object.
    complex c1, c2, c3;

    // Displaying the values of complex numbers (all will be initialized to 0 + 0i)
    c1.disdata();
    c2.disdata();
    c3.disdata();

    return 0; 
}

/* 
    Characteristics of Constructors:

    1. It should be declared in the public section of the class.
    2. They are automatically invoked whenever an object is created.
    3. They cannot return values and do not have return types, not even 'void'.
    4. They can have default arguments.
    5. We cannot refer to their address.
    6. Constructors can be overloaded, meaning you can define multiple constructors 
       with different parameters to handle various initialization scenarios.
    7. Default constructor: If a class does not define any constructors explicitly, 
       a default constructor (taking no arguments) is implicitly provided by the compiler.
*/
