//Name: Kyle Christian T. Novillos
//Activity Name: OE3
//Description: Application of Branching with Conditional Statement problem set
//Date Completed: September 22, 2021 

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main(void){

    string EmployeeId, Name, taxR;
    int nHours; // Number of Hours
    double rateph, grossp, netp, taxp; //rate Per Hour
    cout << "Enter Name                   : ";
        cin >> Name;
    cout << "Enter Employee ID            : ";
        cin >> EmployeeId;
start:
    cout << "Enter Number of Hours Worked : ";
        cin >> nHours;
    cout << "Enter Rate Per Hour          : ";
        cin >> rateph;

     grossp = rateph * nHours;
    if(nHours == 0 || rateph == 0)
    {
        cout << "You did not input Anything.\n";
        goto start;
    }    
    else if(grossp > 40000)
    {
        taxp = grossp * 0.12;
        netp = grossp - taxp;
        taxR = "12%";
    }
    else if((grossp <= 40000)&&(grossp >= 30000))
    {
        taxp = grossp * 0.10;
        netp = grossp - taxp;
        taxR = "10%";
    }
    else if(grossp < 30000)
    {
        taxp = grossp * 0.05;
        netp = grossp - taxp;
        taxR = "5%";
    }
   
    
    cout << "Employee Name          : " << Name << endl;
    cout << "Employee ID            : " << EmployeeId << endl;
    cout << "Number of Hours Worked : " << nHours << endl;
    cout << fixed << setprecision(2) << "Gross Pay              : " << grossp << endl;
    cout << "Tax Rate               : " << taxR << endl; 
    cout << fixed << setprecision(2) << "Net Pay                : " << netp << endl;
}
