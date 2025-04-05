#include<iostream>  

using namespace std;

class simple 
{
    int data1, data2, data3, data4;  

public:
    // Constructor with default parameters
    // If values are not provided during object creation, default values will be used
    simple(int a = 5, int b = 8, int c = 9, int d = 0)
    {
        data1 = a;
        data2 = b;
        data3 = c;
        data4 = d;
    }

    // Member function to display the values of the data members
    void dissimple()
    {
        cout << "The value of data in simple is " << data1 << " " << data2 << " " << data3 << " " << data4 << endl;
    }
};

int main()
{
    simple c1;         // All default values used: 5, 8, 9, 0
    c1.dissimple();

    simple c2(1, 2);   // First two values provided, remaining two will use defaults: 1, 2, 9, 0
    c2.dissimple();

    simple c3(5, 9, 2, 7);  // All values provided: 5, 9, 2, 7
    c3.dissimple();

    return 0;
}
