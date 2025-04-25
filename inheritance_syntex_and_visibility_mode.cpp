/* Note:

1. Private members are never inherited.
2. when a derived class constructor is called, the base class's default 
   constructor (or a constructor if explicitly specified) is typically called first
3. Default visibility mode is private
4. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
5. Private Visibility Mode: Public members of the base class becomes Private members of the derived class */

#include<iostream>

using namespace std ;

// base class
class employee
{
    
    public :
        int empid ;
        float salary ;

        employee(){}

        employee(int num)
        {
            empid = num ;
            salary = 7.0 ;
        }

        void getdata()
        {
            cout<<"emp id : "<<empid<<" and salary is : "<<salary<<endl;
        }

};

// Derived Class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc...
// }

// derived class
class programmer : public employee
{
    public :
        programmer(){}

        programmer(int num)
        {
            empid = num ;
            salary = 8.0 ;
        }
};

int main()
{
    employee nroup(1);
    nroup.getdata();

    programmer p1(9);
    p1.getdata();

    return 0;
}