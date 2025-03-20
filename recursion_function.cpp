#include<iostream>

using namespace std ;

// n! = n * (n-1)!
// 0! = 1 by definition
int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return n * factorial(n-1);
}

// in fibonacci series, we only know the zeroth term is 0 and the first term is 1.
// and the rest of the terms are the sum of the previous two terms.
// f(n) = f(n-1) + f(n-2)
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    // // Example usage of the factorial function
    // int n;
    // cout << "Enter the number to find the factorial: ";
    // cin >> n;
    // cout << "The factorial of " << n << " is: " << factorial(n) << endl;

    // // Example usage of the fibonacci function
    // int v;
    // cout << "Enter the position of the term to find the fibonacci series: ";
    // cin >> v;
    // cout << "The fibonacci series of " << v << " is: " << fibonacci(v) << endl;

    return 0;
}