#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{

int num = 3;
int value_produced = 2 * (--num);

cout << value_produced << endl;
cout << num << endl;

int num2 = 3;
int value_produced2 = 2 * (num--);

cout << value_produced2 << endl;
cout << num2 << endl;

  
}