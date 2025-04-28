/* Protected access modifier : provides a balance between public and private access, allowing 
inheritance and extension of functionality while maintaining encapsulation means member of the class 
can be inherited and can be accessed in derived classes, but not by outside objects.*/

/*
For a protected member:
                       public Derivation    Private Derivation   Protected Derivation
1. Private members     Not Inherited        Not Inherited        Not Inherited
2. Protected members   Protected            private              Protected
3. Public members      public               private              protected
*/

#include<iostream>

using namespace std ;

class base
{
    protected :
        int a ;
    
    public :
        int b ;
};

class derrived : protected base{};

int main()
{
    derrived d1 ;
    //cout<<d1.a; // Will not work since a is protected in both base as well as derived class
    // cout << d1.b; // Error: 'b' becomes protected due to protected inheritance

    return 0;
}