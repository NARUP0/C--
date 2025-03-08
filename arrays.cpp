#include<iostream>

using namespace std ;

int main()
{
    int scimarks[5] = {10, 20, 30, 40 , 50};
    int mathmarks[5] ;
     
    mathmarks[0] = 60 ;
    mathmarks[1] = 70 ;
    mathmarks[2] = 80 ;
    mathmarks[3] = 90 ;
    mathmarks[4] = 100 ;

    // printing out science marks
    cout<<"the value of marks of student 1 in science is "<<scimarks[0]<<endl;
    cout<<"the value of marks of student 2 in science is "<<scimarks[1]<<endl;
    cout<<"the value of marks of student 3 in science is "<<scimarks[2]<<endl;
    cout<<"the value of marks of student 4 in science is "<<scimarks[3]<<endl;
    cout<<"the value of marks of student 5 in science is "<<scimarks[4]<<endl;

    // printing out matha marks 
    for (int i = 0; i < 5; i++)
    {
        cout<<"the value of marks of student "<<i+1<<" in maths is "<<mathmarks[i]<<endl;
    }

    // pointers in array 
    // in arrays the address is the name of the array so we dont have to use '&' infront of array.
    // pointer arithmatic : new address = starting address + [i * sizeof(data type)]
    //                      new address =        a         + [1 * 4]
    int* a = scimarks ;

    cout<<"Address of scimarks[" << 0 << "] = " << (a) << " and value = " << *(a) << endl;
    cout<<"Address of scimarks[" << 1 << "] = " << (a + 1) << " and value = " << *(a + 1) << endl;
    cout<<"Address of scimarks[" << 2 << "] = " << (a + 2) << " and value = " << *(a + 2) << endl;
    cout<<"Address of scimarks[" << 3 << "] = " << (a + 3) << " and value = " << *(a + 3) << endl;
    cout<<"Address of scimarks[" << 4 << "] = " << (a + 4) << " and value = " << *(a + 4) << endl;
   
    return 0;
}