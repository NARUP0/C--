#include<iostream>

using namespace std ;

// swap will not happen as we are passing the values of x and y (call by value)
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp ;
}

// swap will happen as we are passing the reference of x and y (call by reference using pointers)
void swapRefference(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp ;
}

// swap will happen as we are passing the reference of x and y (call by reference using reference variables)
// reference variable is used to create another name for the same address
void swapRefferenceVariable(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp ;
}

int main()
{
    int x = 10, y = 20;

    // Print the values of x and y before swapping
    cout << "Before swapping x = " << x << " y = " << y << endl;
    
    // Uncomment one of the following lines to test different swap functions
    
    // Call swap function (call by value)
    // swap(x, y);
    
    // Call swapRefference function (call by reference using pointers)
    // swapRefference(&x, &y);
    
    // Call swapRefferenceVariable function (call by reference using reference variables)
    // swapRefferenceVariable(x, y);
    
    // Print the values of x and y after swapping
    cout << "After swapping x = " << x << " y = " << y << endl;

    return 0;
}