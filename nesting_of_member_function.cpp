/* Nesting memeber function means calling member function(function within calss) from within another
   member function of the same class */

#include<iostream>
#include<string>

using namespace std ;

class binary
{
    string s ;                                    // by default it is in private access modifier
    void chk_bin();   // for checking binary no.  // by default it is in private access modifier

    public :
        void getbin();  // for getting binary no.
        void one_comp(); // for complimenting binary no.
        void disbin();   // for displaying binary no.
};

void binary :: getbin()
{
    cout<<"enter the binary no. : ";
    cin>>s;
    chk_bin() ;         // nested member function
    disbin() ;          // nested member function
}

void binary :: chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"incorrect binary format."<<endl;
                exit(0);                               //exit function used to terminate whole program immediately
            }
    }  
} 

void binary :: one_comp()
{
    cout<<"complimenting binary no. ............"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
            {
                s.at(i)='1';
            }
        else
            {
                s.at(i)='0';
            }
    }
    disbin() ;          // nested member function
}

void binary :: disbin()
{
    cout<<"the binary no. is :"<<s;
    cout<<endl;
}

int main()
{
    binary b ;
    b.getbin() ;
    b.one_comp() ;

    // b.chk_bin()  ---> will not work cause it is private member 
 
    return 0;
}