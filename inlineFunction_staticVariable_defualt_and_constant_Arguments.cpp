#include<iostream>

using namespace std ;

int c ;

// Inline function is a request for the compiler to substitute the function code in place of the function call.
// Inline function may not be applied according to the compiler if the function contains loops, static variables, recursion, switch, if-else, or return statements.
// Inline functions can reduce time complexity by eliminating function call overhead, but they can also increase space complexity by increasing code size after compilation.
// It is better to use inline functions for small functions.
inline void product (int x, int y)
{
    c = x * y;
}

// Function with a static variable
int plusone(int x)
{
    static int y = 0; // Static variable is initialized only once and it is not initialized again, meaning that this line will only be executed once.
    y++;              // It retains its value in the next function call.
    return x + y;
}

// Function with a default argument
float moneyrecived(int currentmoney, float factor = 1.04)  // Default argument is used when no argument is passed in the function call (here it is 'factor').
{                                                          // Note that the default argument is always written at the end of the argument list (right side).
    return currentmoney * factor;
}

// Function with a constant argument
int strlen(const char *p) // Constant argument is used here to prevent the function from modifying the value in the entire function.
{
    int count = 0;
    while(*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}

int main()
{
    // Example usage of the inline function
    // int a, b;
    // cout << "Enter the values of a and b: ";
    // cin >> a >> b;
    // product(a, b);
    // cout << "The product of a and b is " << c << endl;

    // Example usage of the function with a static variable
    // cout << plusone(5) << endl; // Output is 6
    // cout << plusone(5) << endl; // Output is 7 because 'y' has retained its value from the previous function call which is 1.
    // cout << plusone(5) << endl; // Output is 8 because 'y' has retained its value from the previous function call which is 2.
    // cout << plusone(5) << endl; // Output is 9 because 'y' has retained its value from the previous function call which is 3.
    // cout << plusone(5) << endl; // Output is 10 because 'y' has retained its value from the previous function call which is 4.

    // Example usage of the function with a default argument
    // int money = 100000;
    // cout << "If you have " << money << " rs in your account, you will receive " << moneyrecived(money) << " rs." << endl; // Default argument is used here.
    // cout << "For VIP: If you have " << money << " rs in your account, you will receive " << moneyrecived(money, 1.1) << " rs." << endl; // Default argument is not used here.

    // Example usage of the function with a constant argument
    // char name[10] = "sahil";
    // cout << "The length of the name is " << strlen(name) << endl;

    return 0;
}