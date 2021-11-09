//Name: Kyle Christian T. Novillos
//Activity: Midterm Hands-On Exam
//Description: Conversion Console App 
//Date: November 9, 2021
#include <iostream>
#include <iomanip>

using namespace std;

void promptandwait();
void GramtoKilogram(double g, double kg);
void KilogramtoGram(double kg2 , double g2);
void PoundtoOunce(double lbs, double oz);
void OuncetoPound(double oz2, double lbs2); 
double g, g2, kg, kg2, lbs, lbs2, oz, oz2;
double gram, kilogram, pound, ounce;
int ans = 1;
int main()
{

    int ch;

    do
    {
        system("cls");
        cout << endl;
        cout << "Conversion Calculator" << endl << endl;
        cout << "[1] Gram to Kilogram" << endl;
        cout << "[2] Kilogram to Gram" << endl;
        cout << "[3] Pound to Ounce" << endl;
        cout << "[4] Ounce to Pound" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            {
                system("cls");
                cout << "\n<< Convert Gram to Kilogram >>" << endl;
                cout << "Enter weight: " ;
                cin >> gram;
                GramtoKilogram(g, kg);  
                promptandwait(); 
                break;
            }
            case 2:
            {
                system("cls");
                cout << "\n<< Convert Kilogram to Gram >>" << endl;
                cout << "Enter weight: " ;
                cin >> kilogram;
                KilogramtoGram(kg2, g2);
                promptandwait();
                break;
            }
            case 3:
            {
                system("cls");
                cout << "\n<< Convert Pound to Ounce >>" << endl;
                cout << "Enter weight: " ;
                cin >> pound;
                PoundtoOunce(lbs, oz);
                promptandwait();
                break;
            }
            case 4:
            {
                system("cls");
                cout << "\n<< Convert Ounce to Pound >>" << endl;
                cout << "Enter weight: " ;
                cin >> ounce;
                OuncetoPound(oz2, lbs2);
                promptandwait();
                break;
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
}    

    
    void promptandwait()
    {
        cout << "Do you want to continue? " << endl;
        cout << "[1] yes" << endl;
        cout << "[2] no" << endl;
        cout << "select option: ";
        cin >> ans;  
    }

    
 void KilogramtoGram(double kg, double g)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "------------------------------------" << endl;
    cout << "Gram : " << (kilogram * 1000) << "g" <<endl;
    cout << "------------------------------------"<< endl;
}

void GramtoKilogram(double g2, double kg2)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "------------------------------------" << endl;
    cout << "Kilogram : " << (gram * 0.001) << "kg" <<endl;
    cout << "------------------------------------"<< endl;
}

void PoundtoOunce(double lbs, double oz)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "------------------------------------" << endl;
    cout << "Ounce : " << (pound * 16) <<"Oz" <<endl;
    cout << "------------------------------------"<< endl;
}

void OuncetoPound(double oz2, double lbs2)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "------------------------------------" << endl;
    cout << "Pound : " << (ounce * 0.0625) << "lbs" <<endl;
    cout << "------------------------------------"<< endl;
}