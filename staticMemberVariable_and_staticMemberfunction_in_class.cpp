/* static memeber variable : in class is shared by the object members, there can not be 
                             multiple copies of the same static member variable for different objects.

   static member function  : are allowed to access only the static member variable and static member fuction, 
                             they can not access the non static member variable or funtion of the class. */

// acces modifiers rule are aplicable for both.
// static member uses memory of class not object which means they can be acces without any object created by using class name and resolution operator(::).                            

#include<iostream>

using namespace std ;

class employee
{
    int id ;
    static int count ;                    // declaration of static member variable but, it can not defined here                
                                          // it does not allocate memory just tell compiler about its existence
    public :
        void getdata();
        void disdata();
        static void getcount();          // declaration of static member function it can also defined here
};

int employee :: count ;                   // definition of static member variable also initialization
                                          // it allocates memory 

void employee :: getdata()
{
    cout<<"enter the id of the employee :"<<endl;
    cin>>id;
    count++;
}

void employee :: disdata()
{
    cout<<"the id of the employee is : "<<id<<" and employee no. is :"<<count<<endl;
}

void employee :: getcount ()              // defination of static member function
{
    cout<<"the no. of employee is : "<<count<<endl;
}


int main()
{
    employee nroup, shrey, jay ;

    nroup.getdata();
    nroup.disdata();
    employee::getcount();     

    shrey.getdata();
    shrey.disdata();
    employee::getcount();


    jay.getdata();
    jay.disdata();
    employee::getcount();


    return 0;
}