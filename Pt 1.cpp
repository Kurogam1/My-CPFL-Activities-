//Name: Kyle Christian T. Novillos
//Activity: Postcard from Gizah
//Date: October 13, 2021

#include <iostream>
using namespace std;

int main()
{
    int height;

    
    cout << "Enter the height of the triangle : "; 
    cin >> height;

    
    for (int h = 1; h <= height; h++)
    {
        
        for (int i = 1; i <= (height - h); i++)
        {
            cout << " ";
        }

        
        for (int j = 1; j <= h * 2 - 1; j++)
        {
            
            if (j == 1 || j == h * 2 - 1)
            {
                cout << "*";
            }
            else if (h == height)
            {
                
                cout << "*";
            }
            else
            {
                
                cout << " ";
            }

        }
        
         cout << " ";

        for (int i = 1; i <= (height - h); i++)
        {
            cout << "  ";
        }

        
        for (int j = 1; j <= h * 2 - 1; j++)
        {
            
            if (j == 1 || j == h * 2 - 1)
            {
                cout << "*";
            }
            else if (h == height)
            {
                
                cout << "*";
            }
            else
            {
                
                cout << " ";
            }

        }
        cout << " ";
        for (int i = 1; i <= (height - h); i++)
        {
            cout << "  ";
        }

       
        for (int j = 1; j <= h * 2 - 1; j++)
        {
           
            if (j == 1 || j == h * 2 - 1)
            {
                cout << "*";
            }
            else if (h == height)
            {
                
                cout << "*";
            }
            else
            {
             
                cout << " ";
            }

        }

        
        cout << endl;
    }
    return 0;
}
