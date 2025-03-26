#include<iostream>  

using namespace std;  

// Define a class named 'shop'
class shop 
{
    // Private members of the class
    int itemid[100];  // Array to store item IDs
    int itemprice[100];  // Array to store item prices
    int counter;  // Counter to track the number of items entered

    public:
        void initcounter() { counter = 0; }  // Initialize counter to 0
        void setprice();  // Function to set item price and ID
        void disprice();  // Function to display item details
};

// Function to set the price of an item
void shop :: setprice()
{
    cout << "Enter the ID of the item: " << endl;  
    cin >> itemid[counter];  // Take input for item ID
    
    cout << "Enter the price of the item: " << endl;  
    cin >> itemprice[counter];  // Take input for item price

    counter++;  // Increment counter for the next item
}

// Function to display all items and their prices
void shop :: disprice()
{
    for (int i = 0; i < counter; i++)  // Loop through stored items
    {
        cout << "The price of the item with ID " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukaan;  // Create an object of class 'shop'
    dukaan.initcounter();  // Initialize the counter

    // Calling setprice function multiple times to enter details of four items
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();

    // Display the details of all items
    dukaan.disprice();

    return 0;  // Indicate successful execution of the program
}
