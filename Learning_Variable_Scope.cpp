#include<iostream>

using namespace std ;

int global = 7 ;
void printglobal()
{
    cout << "the value of global is "<< global ;                                        // for finding a variable first priority is of local variable ;
}

int main()
{
    int global = 6 ;
    cout << "the value of global is "<< global <<'\n' ;
    printglobal();

    bool istrue = false ;
    cout << "\nthe value of istrue is "<< istrue ;
}


/* so first of all compiler check if it variable is preseneted in local function if not, then it will look for global region */
/* value of bool anything rather than 0 or false is true */
