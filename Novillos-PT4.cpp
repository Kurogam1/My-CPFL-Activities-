//Name: Kyle Christian T. Novillos
//Activity Name: PT 4 CASE STUDY
//Description: Create a C++ program in which you must incorporate the following concepts: conditionals, looping statements, functions (void and with parameters), file stream, and array. Also, define and envision your program's title or specialization (i.e. grading system, game program, string manipulation, array manipulation etc.).
//Date Completed: December 10, 2021

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void promptandwait();
void PlayGame();
void Scores(int score);
void EraseData(int score);
int score = 0;

int main()
{

    int ch, wait = 0;
    
    do
    {

        system("cls");
        cout << " << Main Menu >>" << endl;
        cout << " [1] Start " << endl;
        cout << " [2] Show Scores" << endl;
        cout << " [3] Clear File Data" << endl;
        cout << " [0] Exit" << endl;
        cout << " Select an option : ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            {
                PlayGame();
                promptandwait();
                break;
            }
            case 2:
            {
                Scores(score);
                promptandwait();
                break;
            }
            case 3:
            {
                EraseData(score);
                promptandwait();
                break;
            }
            case 0:
            {
                cout << "Thank you for Playing!";
                return 0;
                break;
            }
            default:
            {
                cout << "invalid input.";
                promptandwait();
                break;
            }
        }

    }while(wait == 0);
}

void promptandwait()
{

    cin.ignore();
    cout << "\nPress Enter Continue...";
    cin.get();

}

void PlayGame()
{

    string name;
    cout << "enter Player name: ";
    cin >> name;

    string list[40]{"[A] Isaac Morallo ", "[B] Rey-an Baricanosa", "[C] Kobe BOIII", "[D] Alain ",
  "[A] Mark Zuckerberg ", "[B] Bill Gates", "[C] Elon Musk", "[D] Steve Jobs ",
  "[A] Steve Wozniak ", "[B] Jeff Bezos", "[C] Ada Lovelace", "[D] Charles Babbage",
  "[A] Logic error ", "[B] Run-time error", "[C] Syntax error", "[D] Operation error",
  "[A] Jeff Bezos ", "[B] Bernard Arnault","[C] Larry Page", "[D] Sergey Brin"};
   char ans;
   int score = 0;

   cout << "Who is the prof of CPFL? " << endl;
   cout << list[0] << endl;
   cout << list[1] << endl;
   cout << list[2] << endl;
   cout << list[3] << endl;
   cin >> ans;

   if(ans == 'A' || ans == 'a')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Incorrect Answer!!! " << endl;
   }

   cout << "Who is the prof of ITC? " << endl;
   cout << list[0] << endl;
   cout << list[1] << endl;
   cout << list[2] << endl;
   cout << list[3] << endl;
   cin >> ans;

   if(ans == 'B' || ans == 'b')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Incorrect Answer!!! " << endl;
   }

   cout << "Who is the creator of Facebook? " << endl;
   cout << list[4] << endl;
   cout << list[5] << endl;
   cout << list[6] << endl;
   cout << list[7] << endl;
   cin >> ans;

   if(ans == 'A' || ans == 'a')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Incorrect Answer!!! " << endl;
   }

   cout << "Who is the founder of Microsoft? " << endl;
   cout << list[4] << endl;
   cout << list[5] << endl;
   cout << list[6] << endl;
   cout << list[7] << endl;
   cin >> ans;

   if(ans == 'B' || ans == 'b')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Incorrect Answer!!! " << endl;
   }

   cout << "Who is the co-founder of Apple? " << endl;
   cout << list[8] << endl;
   cout << list[9] << endl;
   cout << list[6] << endl;
   cout << list[7] << endl;
   cin >> ans;

   if(ans == 'A' || ans == 'a')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Incorrect Answer!!! " << endl;
   }

   cout << "Who created the first programmable computer? " << endl;
   cout << list[0] << endl;
   cout << list[5] << endl;
   cout << list[10] << endl;
   cout << list[11] << endl;
   cin >> ans;

   if(ans == 'D' || ans == 'd')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Incorrect Answer!!! " << endl;
   }

   cout << "What is not a program error? " << endl;
   cout << list[12] << endl;
   cout << list[13] << endl;
   cout << list[14] << endl;
   cout << list[15] << endl;
   cin >> ans;

   if(ans == 'D' || ans == 'd')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Incorrect Answer!!! " << endl;
   }

   cout << "Who is the richest man in the world? " << endl;
   cout << list[16] << endl;
   cout << list[17] << endl;
   cout << list[6] << endl;
   cout << list[19] << endl;
   cin >> ans;

   if(ans == 'C' || ans == 'c')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Incorrect Answer!!! " << endl;
   }

   cout << "Who is the Founder of SpaceX? " << endl;
   cout << list[4] << endl;
   cout << list[5] << endl;
   cout << list[6] << endl;
   cout << list[19] << endl;
   cin >> ans;

   if(ans == 'C' || ans == 'c')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Incorrect Answer!!! " << endl;
   }

   cout << "Who is the co-founder of Google? " << endl;
   cout << list[4] << endl;
   cout << list[5] << endl;
   cout << list[18] << endl;
   cout << list[7] << endl;
   cin >> ans;

   if(ans == 'C' || ans == 'c')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Incorrect Answer!!! " << endl;
   }

    ofstream File;
    File.open("Scores.txt", ios:: app);
   
    File << name << " " << "Score: " <<score << endl;

    File.close();

}

void Scores(int score)
{
   
    string data;

    ifstream ReadFile("Scores.txt");

    while (getline (ReadFile, data)) 
    {
        cout << data << endl;
    }

    ReadFile.close(); 

}


void EraseData(int score)
{

    fstream Clear;

    Clear.open("Scores.txt", ios::out | ios::trunc); 
    cout << "Data has been Erased!" << endl;

}

