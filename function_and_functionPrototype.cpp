#include<iostream>

using namespace std ;

// Function definition in which we tell compiler there is a function and we defines it before main function so error will not occur.
int add(int a , int b)
{
    // Calculate the sum of 'a' and 'b'
    int sum = a + b ;
    // Return the result
    return sum ;
}

// Function prototype in which we tell compiler there is a function but later we defined it after main function so error will not occur. 
int sub(int, int); //----> it is acceptable
// int sub(int a , int b); ----> it is acceptable
// int sub(int a , b); ----> it is not acceptable


int main()
{
    int num1 , num2 ;
    // Prompt user to enter the first number
    cout<<"Enter the first number : " ;
    // Read the first number into 'num1'
    cin>>num1 ;
    // Prompt user to enter the second number
    cout<<"Enter the second number : " ;
    // Read the second number into 'num2'
    cin>>num2 ;
    // Call the 'add' function with actual parameters 'num1' and 'num2'
    // and print the result
    cout<<"the value of sum is "<<add(num1,num2)<<endl;
    // Call the 'sub' function with actual parameters 'num1' and 'num2'
    // and print the result
    cout<<"the value of diff is "<<sub(num1,num2) ;

    return 0;
}

// Function definition for 'sub' with formal parameters 'a' and 'b'
int sub(int a , int b)
{
    // Calculate the difference between 'a' and 'b'
    int diff = a - b ;
    // Return the result
    return diff ;
}