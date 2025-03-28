/* Passing objects as function arguments means providing an instance of a class to a function, 
   allowing the function to access and manipulate the object's data if it is public. If the function 
   is a member of the same class, it can also access and modify private data*/

#include<iostream>  

using namespace std; 

// Defining a class named 'complex' to represent complex numbers
class complex
{
    int a; // Private member variable to store real part
    int b; // Private member variable to store imaginary part

public:
    // Function to set the values of the complex number
    void setdata(int x, int y)
    {
        a = x; // Assigning real part
        b = y; // Assigning imaginary part
    }

    // Function to set data by summing two complex number objects
    void setdataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a; // Summing the real parts of two complex numbers
        b = o1.b + o2.b; // Summing the imaginary parts of two complex numbers
    }

    // Function to display the complex number in a proper format
    void disdata()
    {
        cout << "The value of complex number is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    // Creating three objects of class 'complex'
    complex c1, c2, c3;

    // Setting values for the first complex number
    c1.setdata(1, 2);
    c1.disdata(); // Displaying the first complex number

    // Setting values for the second complex number
    c2.setdata(3, 4);
    c2.disdata(); // Displaying the second complex number
    
    // Using setdataBySum() to add c1 and c2, and store the result in c3
    c3.setdataBySum(c1, c2);
    c3.disdata(); // Displaying the sum of c1 and c2

    return 0; // Indicating successful execution
}
