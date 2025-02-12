#include<iostream>

int main()
{
    int num1, num2 ;

    std::cout<<"the value of number 1 is : ";      //  << is called insertion operater.
    std::cin>>num1 ;                               //  >> is called extraction operater.

    std::cout<<"the value of number 2 is : ";
    std::cin>>num2 ;

    std::cout<<"thw sum of these two numbers is : "<< num1+num2 ;

    return 0;
}

