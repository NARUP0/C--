#include<iostream>

using namespace std ;

int main()
{
    // what is pointer -------> it is data type to store the address of another datatype

    int a = 7 ;
    int* b = &a ;

    // &-----> (address of) operator
    cout<<"the value of a is "<<a<<endl;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl<<endl;
    
    // * -----> (value at address) dereference operator
    cout<<"the value at address b is "<<*b<<endl<<endl;
    
    // pointer to pointer
    int** c = &b ;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address (value at address c) is "<<**c<<endl;
    
    // if you are using *_ then '_' should be pointer. 

    // a variable has : 1.value   |     variable and address both can points to value.
    //                  2.address |

    return 0;
}