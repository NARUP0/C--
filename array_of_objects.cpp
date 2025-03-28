#include<iostream>  
#include<string>    

using namespace std; 

// Defining a class named 'employee'
class employee
{
    string name; 
    int id;      
    int salary;  

public:
    // Function to get data from the user
    void getdata()
    {
        cout << "Enter the name of the employee: ";
        cin >> name;  // Taking employee's name as input
        
        cout << "Enter the ID of the employee: ";
        cin >> id;    // Taking employee's ID as input

        salary = 122; // Assigning a fixed salary (this can be modified as needed)
    }

    // Function to display employee data
    void disdata()
    {
        cout << "Name of the employee: " << name << endl;
        cout << "ID of the employee: " << id << endl << endl;
    }
};

int main()
{
    // Creating an array of 'employee' objects (size 5)
    employee google[5];

    // Using a loop to get and display data for each employee
    for (int i = 0; i < 5; i++)
    {
        google[i].getdata();  // Calling getdata() for each employee object
        google[i].disdata();  // Calling disdata() to display the entered details
    }

    return 0; 
}
