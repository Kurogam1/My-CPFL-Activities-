//create a program that evaluates a number if equal or greateer than 50. Display 'greater' and 'equal'
#include <iostream>
#include <string>

using namespace std;

int main()
{
 
    int sum, num;

    cout << "enter number: ";
    cin >> sum;

    cout << "enter number: ";
    cin >> num;
    if (sum > num)
    {
        cout << sum << " greater than " << num;
    }
    else if (sum = num)
    {
        cout << sum << " equal to " << num;
    }

}