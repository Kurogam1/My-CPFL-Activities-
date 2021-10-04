V.	#include <iostream>
VI.	#include <string>
VII.	#include <iomanip>
VIII.	
IX.	using namespace std;
X.	
XI.	int main(void){
XII.	
XIII.	    string EmployeeId, Name, taxR;
XIV.	    int nHours; // Number of Hours
XV.	    double rateph, grossp, netp, taxp; //rate Per Hour
XVI.	    cout << "Enter Name                   : ";
XVII.	        cin >> Name;
XVIII.	    cout << "Enter Employee ID            : ";
XIX.	        cin >> EmployeeId;
XX.	start:
XXI.	    cout << "Enter Number of Hours Worked : ";
XXII.	        cin >> nHours;
XXIII.	    cout << "Enter Rate Per Hour          : ";
XXIV.	        cin >> rateph;
XXV.	
XXVI.	     grossp = rateph * nHours;
XXVII.	    if(nHours == 0 || rateph == 0)
XXVIII.	    {
XXIX.	        cout << "You did not input Anything.\n";
XXX.	        goto start;
XXXI.	    }    
XXXII.	    else if(grossp > 40000)
XXXIII.	    {
XXXIV.	        taxp = grossp * 0.12;
XXXV.	        netp = grossp - taxp;
XXXVI.	        taxR = "12%";
XXXVII.	    }
XXXVIII.	    else if((grossp <= 40000)&&(grossp >= 30000))
XXXIX.	    {
XL.	        taxp = grossp * 0.10;
XLI.	        netp = grossp - taxp;
XLII.	        taxR = "10%";
XLIII.	    }
XLIV.	    else if(grossp < 30000)
XLV.	    {
XLVI.	        taxp = grossp * 0.05;
XLVII.	        netp = grossp - taxp;
XLVIII.	        taxR = "5%";
XLIX.	    }
L.	   
LI.	    
LII.	    cout << "Employee Name          : " << Name << endl;
LIII.	    cout << "Employee ID            : " << EmployeeId << endl;
LIV.	    cout << "Number of Hours Worked : " << nHours << endl;
LV.	    cout << fixed << setprecision(2) << "Gross Pay              : " << grossp << endl;
LVI.	    cout << "Tax Rate               : " << taxR << endl; 
LVII.	    cout << fixed << setprecision(2) << "Net Pay                : " << netp << endl;
LVIII.	}
LIX.	
