#include<iostream>

using namespace std ;

class Y ; // Forward declaration of class Y

class X 
{
    int num1 ; // Private data member
    friend void sum (X o1, Y o2); // Friend function declaration
    public :
        void setdata(int a) // Function to set value of num1
        {
            num1 = a ;
        }
};

class Y 
{
    int num2 ; // Private data member

    public :
        void setdata(int a) // Function to set value of num2
        {
            num2 = a ;
        }
        friend void sum (X o1, Y o2); // Friend function declaration
};

void sum(X o1, Y o2)
{
    // Friend function can access private members of both classes
    cout<<"Summing data of X and Y objects gives me : "<<o1.num1 + o2.num2<<endl ;
}

int main()
{
    X a1;
    a1.setdata(30); // Setting value for object of class X

    Y b1;
    b1.setdata(20); // Setting value for object of class Y

    sum(a1, b1); // Calling friend function to add private members

    return 0;
}
