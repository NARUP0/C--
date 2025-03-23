#include<iostream>

using namespace std ;

/* class is used over structure because : 1. structure does not support data hiding means data of structure can be accessed from anywhere in the program(code) and
                                          2. functions cant be added in structure. */

// in structure Members are public by default.                                        
// in class Members are private by default.                                        
class employee 
{
    // access modifier controlls the visibility and accessibility of class member : 1.private, 2.public
    private :                                        // access modifier  it can only be accessed by other members of same class (here it is setdata and getdata function)
        int salary ;
        int religion , bloodGroup ;

    public :                                         // access modifier it can be accessed from anywhere in program
        int eid ;
        int position ;

        /* function can be put in claas : 1. by defining
                                          2. by declaring */
        void setdata (int a, int b, int c) // defining
            {
                salary = a;
                religion = b ;
                bloodGroup = c ;
            }
        void getdata() ; // declaring and it will be defined later

};

void employee :: getdata() // defining a declared function
    {
        cout<<"the value of salary is :"<<salary<<endl ;
        cout<<"the value of religion is :"<<religion<<endl ; 
        cout<<"the value of bloodGroup is :"<<bloodGroup<<endl ;
        cout<<"the value of eid is :"<<eid<<endl ;
        cout<<"the value of position is :"<<position<<endl ;
    }

int main()
{
    employee nroup ; // creating object
    // nroup.salary = 200 ;    // will give error because it is private member of class
    // nroup.bloodGroup = 7 ;  // will give error because it is private member of class
    // nroup.religion = 9 ;    // will give error because it is private member of class
    nroup.position = 1 ;       // will not give error because it is public member of class  
    nroup.eid = 5890 ;         // will not give error because it is public member of class  

    nroup.setdata(200, 7, 9);  // setting data in private membars that are not accessible from outside of class
    nroup.getdata();           // printing data of private members that are not accessible from outside of class and public members that are accessible from outside of class

    return 0;
}