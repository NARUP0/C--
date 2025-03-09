#include<iostream>

using namespace std;

int main()
{
    // structure is a user-defined data type that stores different data types.
    struct employee
    {
        int eid;           // Employee ID
        char favchar;      // Favorite character
        float salary;      // Salary
    };

    struct employee nroup;
    nroup.eid = 1;         // Assigning employee ID
    nroup.favchar = 'n';   // Assigning favorite character
    nroup.salary = 10000.5;// Assigning salary

    cout << "employee id " << nroup.eid << endl;
    cout << "favourite character " << nroup.favchar << endl;
    cout << "salary " << nroup.salary << endl;

    // typedef is a keyword used to create an alias for existing data types.

    typedef struct student
    {
        int sid;           // Student ID
        char favchar;      // Favorite character
        float marks;       // Marks
    } st;

    // so now st = struct student 
    st rohit;
    rohit.sid = 2;         // Assigning student ID
    rohit.favchar = 'r';   // Assigning favorite character
    rohit.marks = 500.69;  // Assigning marks

    cout << "\nstudent id " << rohit.sid << endl;
    cout << "favourite character " << rohit.favchar << endl;
    cout << "marks " << rohit.marks << endl;

    /* union is a user-defined data type similar to structure but with a key difference:
       all members share the same memory location. This means only one member of
       the union can hold a value at a time. The size of the union is determined by the size of the largest member. */

    union money
    {
        int rice;          // Rice quantity
        char car;          // Car character
        int pounds;        // Pounds quantity
    };

    money m1;
    m1.rice = 500;         // Assigning rice quantity
    cout << endl << m1.rice << endl;      // output 500
    m1.car = 'b';          // Assigning car character
    cout << m1.car << endl;               // output b
    cout << m1.rice << endl;              // output garbage value since car overwrites rice

    /* enum or enumeration is a user-defined data type consisting of a set of named integer constants 
       known as enumerators. */

    enum meal
    {
        breakfast,         // 0
        lunch,             // 1
        dinner             // 2
    };
    cout << endl << breakfast << endl;    // output 0
    cout << lunch << endl;                // output 1
    cout << dinner << endl;               // output 2

    meal n1 = lunch;      // Assigning lunch to n1
    cout << n1 << endl;   // output 1
    cout << (breakfast == n1) << endl; // output 0 (false)

    return 0;
}