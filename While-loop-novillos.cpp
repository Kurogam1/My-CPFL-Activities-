#include <iostream>
#include <stdio.h>

using namespace std;
int range, n=0, i=0;
int main()
{
    string num;

    cout << "Enter set of numbers: ";
    cin >> range;
    
    while (i != range)
   {
       cout << "Enter " << range << " number(s): ";
       cin >> num[i];
       i++;
   }
    while (n != range) 
    {
        if (num[n]%2== 1 + 0)
        {

            cout << n << " is Even\n";
        }
        else if (num[n]%2!= 1 + 0)
        {
            cout << n << " is Odd\n";
        }
        n++;
        
    }


}
