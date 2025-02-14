// there are two types of headr file

// 1. system header file : it comes with compiler
#include<iostream> // by presing control and then clicking header file will open the sourece code of that header file and location of that header file

//2. user defined header file : it is written by the programmer
#include"nroup.h"// this will produce error if this file is not present in current directory.

// " " is used if header file is in current directory
// < > is used if header file is in compiler directory

using namespace std ;

int main ()
{
    int a=7,b=8;
    cout<<"this is trial programe"<<endl; // endl is used to switch to a new line like '\n'

    cout<<"following are the type of operators in c++"<<endl<<endl;

    cout<<"arithmetic operators"<<endl;
    cout<<"the value of a + b is :"<<a+b<<endl ;
    cout<<"the value of a - b is :"<<a-b<<endl ;
    cout<<"the value of a * b is :"<<a*b<<endl ;
    cout<<"the value of a / b is :"<<a/b<<endl ;
    cout<<"the value of a++ is :"<<a++<<endl ;
    cout<<"the value of a-- is :"<<a--<<endl ;
    cout<<"the value of ++a is :"<<++a<<endl ;
    cout<<"the value of --a is :"<<--a<<endl<<endl ;

    cout<<"assignment operators --> used to assign value to variable"<<endl; 
    cout<<"int a = 3, b = 5 ;"<<endl;
    cout<<"char d = 'd' ;"<<endl<<endl;

    cout<<"comparison operators"<<endl;
    cout<<"the value of a == b is :"<<(a==b)<<endl ;
    cout<<"the value of a != b is :"<<(a!=b)<<endl ;
    cout<<"the value of a > b is :"<<(a>b)<<endl ;
    cout<<"the value of a < b is :"<<(a<b)<<endl ;
    cout<<"the value of a >= b is :"<<(a>=b)<<endl ;
    cout<<"the value of a <= b is :"<<(a<=b)<<endl<<endl ;


    cout<<"logical operators"<<endl;
    cout<<"the value of logical and oprator  ((a == b) && (a < b)) is :"<<((a == b) && (a < b))<<endl ;
    cout<<"the value of logical or oprator  ((a == b) || (a < b)) is :"<<((a == b) || (a < b))<<endl ;
    cout<<"the value of logical not oprator (!(a < b)) is :"<<(!(a < b))<<endl<<endl ;

    return 0 ;
}

