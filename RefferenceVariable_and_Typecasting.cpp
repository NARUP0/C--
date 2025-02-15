#include<iostream>
#include<typeinfo>              // using for knowing the type of data.

using namespace std ;

int c = 5890 ;                  // declaring global variable

main()
{
    //***********************Build in Data types********************* */
    // int a, b, c ;

    // cout<<"the value of a is  : ";
    // cin>>a;
    // cout<<"the value of b is  : ";
    // cin>>b;

    // c=a+b ;

    // cout<<"the sum is : "<<c<<endl;
  
    // cout<<"the sum is : "<<::c;   // for printing the global variable which also present in local region but have diffrent value we use scope resolution variable "::"
   
    //**********************Float, Double, LongDouble Literals************** */

    // if you are passing decimal no.(45.69) in function or adding in the value the compiler will default take it as a Double.
    // so to specify we use literals like f or F for float, d or D for double, l or L for long double after the decimal no.(45.69f).

    // float < double < long double
    // cout<< "the type of data 45.69 is : "<<typeid(45.69).name()<<endl ; // it will show it as double.
    // cout<< "the type of data 45.69f is : "<<typeid(45.69f).name()<<endl ; // it will show it as float.
    // cout<< "the type of data 45.69F is : "<<typeid(45.69F).name()<<endl ; // it will show it as float.
    // cout<< "the type of data 45.69d is : "<<typeid(45.69d).name()<<endl ; // it will show it as double.
    // cout<< "the type of data 45.69D is : "<<typeid(45.69D).name()<<endl ; // it will show it as double.
    // cout<< "the type of data 45.69l is : "<<typeid(45.69l).name()<<endl ; // it will show it as long double.
    // cout<< "the type of data 45.69L is : "<<typeid(45.69L).name()<<endl ; // it will show it as long double.

    //********************Referance Variable******************************* */
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder

    // int a = 10 ;   // Declare an integer variable 'a' and assign it the value 10
    // int &b = a ;   // Create a reference variable 'b' that refers to 'a'
    // cout<<"the value of a is : "<<a<<endl;
    // cout<<"the value of b is : "<<b<<endl;

    //********************Type Casting******************************* */

    // int a = 34 ;
    // float b = 23.86 ; 

    // cout<<"the value of a is : "<<float(a)<<endl;           //-----------------|
    // cout<<"the value of a is : "<<(float)a<<endl;                              //| 
    //                                                                            //|---------------- explicit type casting
    // cout<<"the value of b is : "<<int(b)<<endl;                                //|
    // cout<<"the value of b is : "<<(int)b<<endl;             //-----------------|

    // cout<<"the sum of a and b is  : "<<a+b ;               //------------------------------------ implicit type casting 

}