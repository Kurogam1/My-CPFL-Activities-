//Name: Kyle Christian T. Novillos
//Activity: OE6
//Description: We are tasked to apply searching, ascending and descending elements in an array
//Date Completed: November 25, 2021
#include<iostream>

using namespace std;

//Function Declaration

void promptAndWait();
void Find(int count[], int num);
void sortAscending(int count[], int num);
void sortDescending(int count[], int num);

const int Size = 100;

int main ()
{

    int count[Size], num, ch;
    cout << "Enter number of Elements in Array\n";
    cin >> num;
     
    cout << "Enter " << num << " numbers \n";
      
    for(int i = 0; i < num; i++)
    {
        cin >> count[i];
    }

    do
    {
        system("cls");
        cout << " << Arrays Sorting Program >>" << endl;
        cout << " [1] Finding Array " << endl;
        cout << " [2] Sort Array Ascending " << endl;
        cout << " [3] Sort Array Descending " << endl;
        cout << " [0] Exit Program " << endl;
        cout << " Select an option : ";
        cin >> ch;

        switch (ch)
        {
            case 1:
            {
                
                Find(count, num);
                promptAndWait();
                break;
            }

            case 2:
            {
                
                sortAscending(count, num);
                promptAndWait();
                break;
            }

            case 3:
            {
                
                sortDescending(count, num);
                promptAndWait();
                break;
            }

            case 0:
            {
                
                cout << "Thank you for using the Program. " << endl;
                return 0;
            }                
            default:

                cout << "Invalid input. " << endl;
                break;
        }
    }while (true);
    
}

//Function Definition

void promptAndWait()
{

    cin.ignore();
    cout << "\nPress Enter or Return to Continue...";
    cin.get();
}

void Find(int count[], int num)
{

   for(int x = 0; x < num; x++)
    {
        cout << "Unsorted Array Elmement [" << x << "] "<< count[x] << endl;
    }
}

void sortAscending(int count[], int num)
{

    int j, y, temp;

    for(y=0; y<num; y++)
    {
        for(j=y+1; j<num; j++)
        {
            if(count[j] < count[y])
            {
                temp = count[y];
                count[y] = count[j];
                count[j] = temp;
            }
        }
    }

    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(y=0; y<num; y++)
    {
        cout<<count[y]<<endl;
    }
}

void sortDescending(int count[], int num)
{

    int j, y, temp;

    for (y = 0; y < num; ++y)   
    {
        for (j = y + 1; j < num; ++j)
        {
            if (count[y] < count[j])
            {
                temp = count[y];
                count[y] = count[j];
                count[j] = temp;
            }
        }
    }

    cout<<"\n numbers in Descending Order : \n";
    for (y = 0; y < num; ++y)
    {
        cout<<" ";
        cout<<count[y];
        cout<<"\n";
    }
}