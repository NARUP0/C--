// Control Structure is how the program flow of execution is based on :  1. sequnetial             : normal top to down flow is followed
//                                                                       2. selection(conditional) : includes if-else or switch case
//                                                                       3. iteration(looping)     : includes for or while loop

#include<iostream>

using namespace std ;

int main()
{
    int age ;

    cout<<"What is your age : ";
    cin>>age ;

    //*******************************************selection control structure: using if, else-if, else ladder*****************************  */
    // if (age < 18 && age > 0)
    // {
    //     cout<<"you are kid,you can not come to party !";
    // }
    
    // else if (age == 18)
    // {
    //     cout<<"Nice try, show me your licence";    
    // }
    
    // else if (age <= 0)
    // {
    //     cout<<"you are not even born kid !!!!!";    
    // }

    // else
    // {
    //     cout<<"yes, you can come to the party";
    // }

    //*******************************************selection control structure: switch case ladder**************************************  */
    // switch case are used whem there is constant expression

    // switch (age)              
    // {
    // case 18:
    //     cout<<"you are 18"<<endl; 
    //     break;                               // breaks are use to get out of a current function. 

    // case 0:
    //     cout<<"you are not even born kid !!!!!"<<endl;    
    //     break;

    // case 69:
    //     cout<<"you are 69"<<endl;    
    //     break;
    
    // default:
    //     cout<<"no spacial case"<<endl;  
    //     break;
    // }
    
    // return 0 ;
    
}