#include <iostream>
#include <stdio.h>

using namespace std;
int range,i=0, n=0;
int main()
{
    cout << "Enter range of numbers: ";
    cin >> range;
    int num[range];
    while (i != range) 
    {
        cout << "Enter " << range << " number(s): ";
        cin >> num[i];
        i++;
    }
    while (n != range)
    {
        if (num[n]%2==0 + 1)
        {
          cout << n << "Even\n";
        }
          else if (num[n]%2!=0 + 1)
        {
          cout << n << "Odd\n";
        }
        n++;
    }
}