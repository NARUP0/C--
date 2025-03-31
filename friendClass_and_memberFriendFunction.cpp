/* General Rule:
1.If the friend function is a non-member function, just declaring it before defining it works fine.
2.If the friend function is a member of another class, that class must be fully defined before you 
  declare it as a friend.
3.If you want to make a whole class a friend, simply declare it as "friend class ClassName;", and it 
  can be forward-declared without needing a full definition beforehand.  
  
Forward declaration is used when:
There is a dependency between two classes (e.g., one class needs to reference another but the full 
definition isn't required immediately).  */

#include<iostream>

using namespace std ;

class complex ;             // Forward declaration of calculator class

class calculator
{
    public :

        int add (int a, int b)
        {
            return a + b ;
        }

        int sumrealcomplex(complex o1, complex o2);


        int sumcompcomplex(complex o1, complex o2);

};

class complex
{
    int a, b ;

    //scenario 1
    // Individually declaring functions as friends
    friend int calculator :: sumrealcomplex(complex o1, complex o2) ; //using general rull no. 2
    friend int calculator :: sumcompcomplex(complex o1, complex o2) ; 

    //scenario 2
    // Aliter: Declaring the entire  class as friend
    // friend class calculator ;                                     //using general rull no. 2                
    
    public :
        void setdata(int x, int y)
        {
            a = x ;
            b = y ;
        }

        void disdata()
        {
            cout<<" the complex no. is : "<<a<<" + "<<b<<"i"<<endl;
        }
};

int calculator :: sumrealcomplex(complex o1, complex o2)
{
    return ((o1.a)+(o2.a)) ;
}

int calculator :: sumcompcomplex(complex o1, complex o2)
{
    return ((o1.b)+(o2.b)) ;
}


int main()
{
    complex c1, c2 ;

    c1.setdata(1, 2);
    c2.setdata(3, 4);

    calculator calc ;

    int s = calc.sumrealcomplex(c1, c2);
    cout << "Sum of real parts: " << s << endl;

    s = calc.sumcompcomplex(c1, c2);
    cout << "Sum of imaginary parts: " << s << endl;

    return 0;
}