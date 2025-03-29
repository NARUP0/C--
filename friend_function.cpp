/* a friend function is a function that is defined outside of a class but is granted access 
   to the class's private and protected members. it is declared within the class using the friend 
   keyword but is not a member function of the class.*/

   #include<iostream> 

   using namespace std;  
   
   
   class complex 
   {
       int a, b;  // Private data members to store real and imaginary parts of a complex number
   
       public:
           // Declare 'sumcomplex' as a friend function so that it can access private members of this class
           friend complex sumcomplex(complex o1, complex o2);
   
           // Function to initialize the complex number with given values
           void getdata(int x, int y)
           {
               a = x;
               b = y;
           }
   
           // Function to display the complex number
           void disdata()
           {
               cout << "The complex number is: " << a << " + " << b << "i" << endl;
           }
   };
   
   // Friend function definition that adds two complex numbers
   complex sumcomplex(complex o1, complex o2)
   {
       complex o3;  
       // Assign sum of respective real and imaginary parts to o3
       o3.getdata((o1.a + o2.a), (o1.b + o2.b));
       return o3;  
   }
   
   int main()
   {
       complex c1, c2, sum;  

       // Assign values to the first complex number
       c1.getdata(1, 2);
       
       // Assign values to the second complex number
       c2.getdata(3, 4);
   
       // Call the friend function to compute the sum of c1 and c2
       sum = sumcomplex(c1, c2);
   
       // Display the values of c1, c2, and their sum
       c1.disdata();
       c2.disdata();
       sum.disdata();
   
       return 0;  
   }
   
   /* 
   Properties of Friend Functions:
   1. Not in the scope of the class.
   2. Since it is not a member of the class, it cannot be called using an object of the class (e.g., c1.sumComplex() is invalid).
   3. It can be invoked without the help of any object.
   4. It usually takes objects of the class as arguments.
   5. It can be declared in either the public or private section of the class.
   6. It cannot access the members of the class directly; it must use object_name.member_name.
   */
   