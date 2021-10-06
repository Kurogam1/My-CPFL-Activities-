#include<iostream>
#include<iomanip>
using namespace std;

int main (){

    //Variables
    int n, range;
    


    cout << "Enter Range of Numbers : ";
    cin >> range;
    cout << "Enter " << range << " consecutive numbers : ";
    cin >> n;

    

    
    if (n %2 == 0){
        cout << n << " is Even\n ";
        }      

    else{
        cout << n << " is Odd\n ";
    }
    
    while(n != range)
    {
        cin >> n;

        if (n %2 == 0){
        cout << n <<" is even\n ";
        }      

        else{
        cout << n <<" is odd\n ";
        }

    }

    return 0;
}