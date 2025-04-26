#include<iostream>
using namespace std;

// Base class definition
class base
{
    int data1;  // Private data member, accessible only inside base class

    public:
        int data2;  // Public data member, accessible outside class also
        
        // Member function to set values of data1 and data2
        void setdata()
        {
            data1 = 30;
            data2 = 20;
        }

        // Member function to return value of data1
        int getdata1();

        // Member function to return value of data2
        int getdata2();
};

// Definition of base class member function getdata1()
int base::getdata1()
{
    return data1;
}

// Definition of base class member function getdata2()
int base::getdata2()
{
    return data2;
}

// Derived class inheriting publicly from base class
class derived : public base
{
    int data3;  // Private data member of derived class

    public:
        // Member function to process data
        void process();

        // Member function to display data
        void display();
};

// Definition of process() function
void derived::process()
{
    // data3 is calculated as product of data2 and data1
    data3 = data2 * getdata1();
}

// Definition of display() function
void derived::display()
{
    // Displaying values of data1, data2, and data3
    cout << "The value of data1 is : " << getdata1() << endl
         << "The value of data2 is : " << data2 << endl
         << "The value of data3 is : " << data3 << endl;
}

// Main function
int main()
{
    derived o1;     // Creating object of derived class
    o1.setdata();   // Setting data1 and data2 using base class function
    o1.process();   // Processing to calculate data3
    o1.display();   // Displaying all data members

    return 0;
}
