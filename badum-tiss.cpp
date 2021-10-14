#include <iostream>
using namespace std;

int main()

{
    int number, divisor, quotient, answer_2, mod;
    
    cout << " Enter a Number : ";
    cin >> number;

    if( number < 1)
    {
        cout << "Number needs to be greater than 1";
    }
    else if( number == 1)
    {
        cout << "1 is neither prime nor composite";
    }

    else if( number > 1 && number <= 500)
    {
        quotient = ( number / 2);
        answer_2 = ( quotient * 2);
        mod = ( answer_2 - number);

        if(mod != 0)
        {
            cout << number << " Is a prime number";
        }

        else
        {
            cout << number << " Is a composite number";
        }
    }

    else
    {
        cout << " Input a number between 1 to 500";
    }
    
    return 0;
}