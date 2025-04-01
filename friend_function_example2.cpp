#include<iostream>

using namespace std ;

class Y ; // Forward declaration of class Y

class X
{
    int val1; // Private data member
    friend void exchange(X & o1 , Y & o2); // Friend function declaration
    public :
        void setdata(int a) // Function to set value of val1
        {
            val1 = a ;
        }
        void disdata() // Function to display val1
        {
            cout<<val1<<endl;
        }
};

class Y
{
    int val2; // Private data member

    public :
        void setdata(int a) // Function to set value of val2
        {
            val2 = a ;
        }
        void disdata() // Function to display val2
        {
            cout<<val2<<endl<<endl;
        }
        friend void exchange(X & o1 , Y & o2); // Friend function declaration
};

void exchange (X & o1 , Y & o2)
{
    // Friend function can access private members of both classes and swap their values
    int temp = o1.val1 ;
    o1.val1 = o2.val2 ;
    o2.val2 = temp ;
}

int main()
{
    X oc1 ;
    oc1.setdata(34); // Setting value for object of class X
    cout<<"The value of data in oc1 before exchange is : ";
    oc1.disdata();

    Y oc2 ;
    oc2.setdata(50); // Setting value for object of class Y
    cout<<"The value of data in oc2 before exchange is : ";
    oc2.disdata();

    exchange(oc1, oc2); // Swapping values of oc1 and oc2

    cout<<"The value of data in oc1 after exchange is : ";
    oc1.disdata();
    
    cout<<"The value of data in oc2 after exchange is : ";
    oc2.disdata();

    return 0;
}
