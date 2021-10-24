#include <iostream>

using namespace std;

// First function prototypes
    void promptAndWait();

/* Function takes two arguments: one float and one unsigned int.
    The unsigned int has a default value of 1. Function returns no value.*/
void dollarsToPesos(float rate, double USD = 0);
void PesosToDollars(float rate, double PhP = 0);
int ans = 1;
int main()
{


    //Declare the variables for the user input.
    float rate = 50.73;// $1 = 50.73 Pesos
    double dollarsIn, pesosIn;
    int ch;

    do
    {
        system("cls");
        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl;
        cout << "[3] Exit the Coversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            {
                system("cls");
                cout << "\n<< Convert Dollar to Peso >>" << endl;
                cout << "Enter Dollar Amount " ;
                cin >> dollarsIn;
                dollarsToPesos(rate, dollarsIn);  
                promptAndWait(); 
                break;
            }

            case 2:
            {
                system("cls");
                cout << "\n<< Convert Peso to Dollar >>" << endl;
                cout << "Enter Peso Amount " ;
                cin >> pesosIn;
                PesosToDollars(rate, pesosIn);
                promptAndWait();
                break;
            }
            case 3:
            {
                cout << "Conversion App Terminated \nThank you for using the app!";
                return 0;
            }
            default:
            {
                cout << "Invalid Input!";
                break;
            }

        }
    }while(ans == 1); 
return 0; 
}    //End of main function

    // Define the promptAndWait() function.
    void promptAndWait()
    {
        cout << "Do you want to continue? " << endl;
        cout << "[1] yes" << endl;
        cout << "[2] no" << endl;
        cin >> ans;  
    }

    // Define the dollarsToPeso function.
    void dollarsToPesos(float rate, double USD)
{
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout << "\n$" << USD << " US = " << (rate * USD) << " Pesos. \n";
}
   // Define the pesostodollar function.
    void PesosToDollars(float rate, double PhP)
{
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout << "\nPhP" << PhP << " Pesos = " << (PhP / rate) << " US. \n";
}


