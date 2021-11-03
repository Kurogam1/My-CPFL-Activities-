//Name: Kyle Christian T. Novillos
//Activity:Outcomes Evaluation 5
//Description: 
//Date: November 2, 2021
#include <iostream>

using namespace std;
// Function Declaration
void promptAndWait();
void reversestr(string& str);
void reverseint(unsigned int& n);

int main(){
    string str;
    unsigned int n;
    int ch, wait = 0;

    do{
        system("cls");
        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl;
        cout << "[1] Reverse a String" << endl;
        cout << "[2] Reverse an Unsigned Integer" << endl;
        cout << "[3] Exit the Coversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch){
            case 1:{
                cout << "<< Reverse a String >>" << endl;
                cout << "Enter a word : ";
                cin.ignore();
                getline(cin, str);
                reversestr(str);
                promptAndWait();
                break;
            }

            case 2:{
                cout << "<< Reverse an Unsigned Integer >>" << endl;
                cout << "Enter a number [0-9] : ";
                cin >> n;
                cin.ignore();
                reverseint(n);
                promptAndWait();
                break;
            }

            case 3:{
                cout << "Thank you for using the app!!!" << endl;
                return 0;
            }
        }
    }
    while(wait == 0);
}

// Function Definition

void reversestr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++){
        swap(str[i], str[n - i - 1]);
    }

    cout << str  << endl;  

}

void reverseint(unsigned int& n)
{
    int reverse=0, rem;      
    while(n!=0)    
    {    
        rem=n%10;      
        reverse=reverse*10+rem;    
        n/=10;    
    }    

    cout << reverse << endl;
}

void promptAndWait()
{
    cout << "Press Enter or Return to continue...";
    cin.get();
}