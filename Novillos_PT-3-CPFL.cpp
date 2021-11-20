//Name:
//Activity Name: PT 3
//Description:File File I/O implementation Choose between Salary program or POS to apply file I/O stream. Its means that your data will be recorded in a file permanently.
//Date Completed: November 20, 2021

#include <iostream>
#include <fstream>

using namespace std;

const double T1 = 0.12;
const double T2 = 0.10;
const double T3 = 0.05;

void promptAndWait();
void salary();
void read();
void clear();

int main()
{

    //Input

    int ch, wait = 0, temp;

    do
    {
        system("cls");
        cout << " << Salary App >>" << endl;
        cout << " [1] Input new Data " << endl;
        cout << " [2] View File Data" << endl;
        cout << " [3] Clear File Data" << endl;
        cout << " [0] Exit" << endl;
        cout << " Select an option : ";
        cin >> ch;

        switch (ch)
        {
            case 1:
            {
                
                salary();
                promptAndWait();
                break;
            }

            case 2:
            {
                
                read();
                promptAndWait();
                break;
            }  

            case 3:
            {
                
                clear();
                promptAndWait();
                break;
            }  

            case 0:
            {
                
                cout << "Thank you for using the program.";
                return 0;
                break;
            } 

            default:
            {

                cout << "Invalid Input.";
                promptAndWait();
                break;
            }
        }

    }while(wait == 0);

}

void promptAndWait()
{

    cin.ignore();
    cout << "\nPress Enter Continue...";
    cin.get();

}

    //Process

void salary()
{

    ofstream File;
    File.open("Salary_Tax_Output.txt", ios:: app);
    
    string name;
    int nHours, EmployeeID, taxR;
    double ratePH, grossp, netp,taxp;

    cout << "\nEnter your Employee ID     : ";
    cin >> EmployeeID;
    cin.ignore();

    cout << "Enter your Employee Name     : ";
    getline(cin,name);

    cout << "Enter your Hours Worked      : ";
    cin >> nHours;

    cout << "Enter your Rate per Hour     : ";
    cin >> ratePH;

    grossp = ratePH * nHours; 

    if(grossp > 40000) 
    {
        taxp = grossp * T1;
        netp = grossp - taxp;
        taxR = 12;

    }

    else if (grossp >= 30000 && grossp <= 40000 ) 
    {
        taxp = grossp * T2;
        netp = grossp - taxp;
        taxR = 10;
    }

    else 
    {
        taxp = grossp * T3;
        netp = grossp - taxp;
        taxR = 5;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    File << "---------------------------------------"    << endl;
    File << "Employee ID        : "   << EmployeeID      << endl;
    File << "Employee Name      : "   << name            << endl;
    File << "Employee Gross Pay : P " << grossp          << endl;
    File << "Employee Tax Rate  : "   << taxR <<"%"      << endl;
    File << "Employee Net Pay   : P " << netp            << endl;
    File << "---------------------------------------"    << endl;

    File.close();
}

    //Output

void read()
{

    string data;

    ifstream ReadFile("Salary_Tax_Output.txt");

    while (getline (ReadFile, data)) 
    {
        cout << data << endl;
    }

    ReadFile.close();

}

void clear()
{

    fstream Clear;

    Clear.open("Salary_Tax_Output.txt", ios::out | ios::trunc); 
    cout << "Data has been Terminated!" << endl;
    
}