#include<iostream>

using namespace std ;

/* function overloading is feature that allows us to have more than one function with 
the same name but different parameters(types, number, or order)*/
int sum (int a , int b)
{
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}

int sum (int a , int b, int c)
{
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}

// calculate the volume of a cylinder
double volume (double r, double h)
{
    return 3.14159*r*r*h;
}

// calculate the volume of a cube
double volume (double a)
{
    return a*a*a;
}

// calculate the volume of a cuboid
double volume (double l, double b, double h)
{
    return l*b*h;
}

int main()
{
    cout<<"the sum of 3 and 4 is : "<<sum(3,4)<<endl;
    cout<<"the sum of 3, 5 and 4 is : "<<sum(3,5,4)<<endl;

    cout<<"the volume of a cylinder with radius 3 and height 4 is : "<<volume(3,4)<<endl;
    cout<<"the volume of a cube with side 3 is : "<<volume(3)<<endl;
    cout<<"the volume of a cuboid with length 3, breadth 4 and height 5 is : "<<volume(3,4,5)<<endl;

    return 0;
}