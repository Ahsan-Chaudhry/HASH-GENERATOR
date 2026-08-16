#include <iostream>
#include <string>

using namespace std;


// Functions from other files
void textHashing();
void fileHashing();


// Clear screen
void clearScreen()
{
    system("cls");
}


// Main menu
void mainMenu()
{
    while(true)
    {
        clearScreen();

        cout<<"========================================\n";
        cout<<"          SHA-256 HASH GENERATOR\n";
        cout<<"========================================\n";

        cout<<"\nWelcome to my Hash Generator Project!";
        cout<<"\nThis project uses the SHA-256 algorithm.";

        cout<<"\n\n----------------------------------------\n";
        cout<<"                 MENU\n";
        cout<<"----------------------------------------\n";

        cout<<"\n1. Text Hashing";
        cout<<"\n2. File Hashing";
        cout<<"\n3. Clear Screen";
        cout<<"\n4. Exit";

        cout<<"\n\nEnter your choice: ";

        string choice;
        getline(cin,choice);


        if(choice=="1")
        {
            textHashing();
        }

        else if(choice=="2")
        {
            fileHashing();
        }

        else if(choice=="3")
        {
            clearScreen();

            cout<<"Screen cleared!";
            cout<<"\n\nPress Enter to continue...";
            cin.get();
        }

        else if(choice=="4")
        {
            clearScreen();

            cout<<"========================================\n";
            cout<<"       Thank you for using my project!\n";
            cout<<"========================================\n";

            break;
        }

        else
        {
            cout<<"\nInvalid choice!";
            cout<<"\nPlease enter 1, 2, 3 or 4.";

            cout<<"\n\nPress Enter to continue...";
            cin.get();
        }
    }
}


// ONLY main() in the entire project
int main()
{
    mainMenu();

    return 0;
}