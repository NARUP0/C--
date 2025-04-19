#include<iostream>

using namespace std;

// Class of bank deposit with compound interest
class bankDeposit
{
    int principal;        // Principal amount
    int years;            // Number of years
    float interestRate;   // Interest rate (as a decimal)
    float returnValue;    // Amount returned after applying compound interest

public:
    // Default constructor
    bankDeposit() {}

    // Constructor with float interest rate (e.g., 0.04 for 4%)
    bankDeposit(int p, int y, float r)
    {
        principal = p;
        years = y;
        interestRate = r;
        returnValue = p;

        // Apply compound interest for 'years' years
        for (int i = 0; i < years; i++)
        {
            returnValue = returnValue * (1 + interestRate);
        }
    }

    // Constructor with integer interest rate (e.g., 4 for 4%)
    bankDeposit(int p, int y, int R)
    {
        principal = p;
        years = y;
        interestRate = float(R) / 100; // Convert percentage to decimal
        returnValue = p;

        // Apply compound interest for 'years' years
        for (int i = 0; i < years; i++)
        {
            returnValue = returnValue * (1 + interestRate);
        }
    }

    // Function to display the result
    void show()
    {
        cout << "The return value of principal amount " << principal
             << " for " << years << " years is " << returnValue << endl << endl;
    }
};

int main()
{
    bankDeposit b1, b2, b3;        // here default constructor used by compiler

    int p, y;
    float r;
    int R;

    // Taking input for float interest rate constructor
    cout << "Enter the value of p, y, r :" << endl;
    cin >> p >> y >> r;
    b1 = bankDeposit(p, y, r); // here manually calls constructor with float interest rate by programmer
    b1.show();

    // Taking input for integer interest rate constructor
    cout << "Enter the value of p, y, R :" << endl;
    cin >> p >> y >> R;
    b2 = bankDeposit(p, y, R); // here manually Calls constructor with int interest rate by programmer
    b2.show();

    // Showing the result of default constructor (will not output meaningful data)
    b3 = bankDeposit(); // Default constructor called by programmer
    b3.show();

    return 0;
}
