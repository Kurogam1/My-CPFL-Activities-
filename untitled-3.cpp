//Name: Kyle Christian T. Novillos
//Activity: Postcard from Gizah
//Date: October 13, 2021

#include <iostream>
using namespace std;

int main()
{
    int Height, h, i, Space;

    cout << "Enter Height of Pyramid: ";
        cin >> Height;

    for(h = 1; h <= Height; h++)
    {
        for(Space = h; Space < Height; Space++)
            cout << " " ;

        for(i = 1; i <= (2 * Height - 1); i++)
        {
            if(h == Height || i == 1 || i == 2 * h - 1)
                cout << "*";
            else 
                cout << " ";
        }
        cout << endl;

    }
    for(h = 1; h <= Height; h++)
    {
        for(Space = h; Space < Height; Space++)
            cout << " " ;

        for(i = 1; i <= (2 * Height - 1); i++)
        {
            if(h == Height || i == 1 || i == 2 * h - 1)
                cout << "*";
            else 
                cout << " ";
        }
        cout << endl;

    } 
    for(h = 1; h <= Height; h++)
    {
        for(Space = h; Space < Height; Space++)
            cout << " " ;

        for(i = 1; i <= (2 * Height - 1); i++)
        {
            if(h == Height || i == 1 || i == 2 * h - 1)
                cout << "*";
            else 
                cout << " ";
        }
        cout << endl;

    }       
    return 0;
}