#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{
   int i,num;
    cout<<"Enter the maximum number\n";
    cin>>num;
    cout<<"Even numbers are :";
    
    for(i=2; i<=num; i+=2){
        cout<<i<<" ";
    }
    cout<<"\nOdd numbers are :";
    
    for(i=1; i<=num; i+=2){
        cout<<i<<" ";
    }
    getch();

}
