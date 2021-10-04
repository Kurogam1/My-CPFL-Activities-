#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{

    string num,;
    int num1,;

    cout << "Enter set number(s): ";
  cin >> num;
  
  while("enter set of number(s)") 
  {
    cout << "Enter number(s): ";
    cin >> num1;
  }
  if ( num1 % 2 == 0)
  {
    cout << num << " is even.\n";
  }
  else if (num1 % 2 !=0)
  {
    cout << num << " is odd.\n";
  }


}
