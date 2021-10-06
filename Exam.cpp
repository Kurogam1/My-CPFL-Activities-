#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main(void)
{

    string EmployeeNum, Name, DoP, status;
    int nHours; 
    double Hourlypr, grossp, netp, wTax, pHealth = 150, SSS = 250, pIbig = 200; 
    cout << "Enter Name                   : ";
        getline(cin,Name);
    cout << "Enter Employee ID            : ";
        cin >> EmployeeNum;
    cout << "Date of Payday               : ";
        cin >> DoP;
start:
    cout << "Enter Number of Hours Worked : ";
        cin >> nHours;
    cout << "Enter Hourly Pay Rate        : ";
        cin >> Hourlypr;
    cout << endl << "\n";
    
     grossp = Hourlypr * nHours;
    if(nHours == 0 || Hourlypr == 0)
    {
        cout << "You did not input Anything.\n";
        goto start;
    }
    if(netp > 5000)
    {
        status = "Contractual ";
    } 
    else if((netp = 5000)&&(netp >= 10000))
    {
        status = "Probationary ";
    }
    else if(netp < 10000)
    {
        status = "Regular ";
    }  
        wTax = grossp * 0.12;
        netp = grossp - wTax - pHealth - SSS - pIbig; 
        
    
   
    
    cout << "Employee Name          : " << Name << endl;
    cout << "Employee Number        : " << EmployeeNum << endl;
    cout << "Date of Payday         : " << DoP << endl;
    cout << endl << "\n";
    cout << "Number of Hours Worked : " << nHours << endl;
    cout << "Hourly Pay Rate        : " << Hourlypr << endl;
    cout << endl << "\n";
    cout << "Payroll Summary for    : " << Name << endl;
    cout << "Employee Number        : " << EmployeeNum << endl;
    cout << "Payroll Date           : " << DoP << endl;
    cout << endl << "\n";
    cout << "You Earned " << Hourlypr << " at " << nHours << " Per Hour \n ";
    cout << fixed << setprecision(2) << "Gross Pay              : " << grossp << endl;
    cout << fixed << setprecision(2) << "Withholding Tax        : " << wTax << endl;
    cout << fixed << setprecision(2) << "Philhealth             : " << pHealth << endl;
    cout << fixed << setprecision(2) << "SSS                    : " << SSS << endl;
    cout << fixed << setprecision(2) << "PagIbig                : " << pIbig << endl;
    cout << "--------------------------------------------------------------------------------------\n";
    cout << fixed << setprecision(2) << "Net Pay                : " << netp << endl;
    cout << "Employee Status : " << status << endl;
}
