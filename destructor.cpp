/* Destructor : in c++ is a special function within a class that is automatically called for 
   destroying an object of that class. it has the same name as the class, preceded by a tilde (~), 
   and it does not take any arguments or return any value. its primary purpose is to release 
   resources that the object may have acquired during its lifetime.
   
   if no user-defined destructor is provided, the compiler generates a default one, which may not 
   handle resource cleanup adequately, especially when dealing with dynamic memory allocation. 
   
   Block : { } define a scope for variables, meaning that variables declared within a block are 
   only accessible within that block.*/

   #include<iostream>

   using namespace std ;
   
   // Global counter to track the number of objects created
   int count = 0 ;
   
   class num 
   {
       public :
   
           // Constructor
           num()
           {
               count++ ;
               cout<<"inside constructor of object no. : "<<count<<endl;
           }
   
           // Destructor
           ~num()
           {
               cout<<"inside destructor of object no. : "<<count<<endl; 
               count-- ;
           }
   };
   
   int main()
   {
       cout<<"entering main function"<<endl;
       cout<<"creating first object"<<endl;
       
       num o1 ; // First object created; constructor is called
   
       {
           cout<<"entering block "<<endl;
           cout<<"creating other two objects"<<endl;
   
           num o2, o3 ; // Two objects created inside the block
   
           cout<<"exiting block "<<endl;
           // o2 and o3 go out of scope here; destructors will be called automatically
       }
   
       cout<<"exiting main function"<<endl;
       // o1 goes out of scope at the end of main; its destructor will be called
   
       return 0;
   }
   