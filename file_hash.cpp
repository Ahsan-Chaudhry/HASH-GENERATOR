#include <iostream>
#include <string>
#include "sha256.h"

using namespace std;


// This function handles file hashing
void fileHashing()
{
    while(true)
    {
        system("cls");

        cout<<"========================================\n";
        cout<<"              FILE HASHING\n";
        cout<<"========================================\n";

        string fileName;

        cout<<"\nEnter file name or path: ";
        getline(cin,fileName);


        // Generate SHA-256 hash of file
        string hash=sha256File(fileName);


        // Check if file opened correctly
        if(hash=="")
        {
            cout<<"\n----------------------------------------\n";
            cout<<"ERROR: File could not be opened.\n";
            cout<<"Please check the file name or path.\n";
            cout<<"----------------------------------------\n";
        }

        else
        {
            cout<<"\n----------------------------------------\n";

            cout<<"File Name:\n";
            cout<<fileName;

            cout<<"\n\nSHA-256 Hash:\n";
            cout<<hash;

            cout<<"\n----------------------------------------\n";
        }


        cout<<"\n1. Hash another file";
        cout<<"\n2. Back to main menu";
        cout<<"\n3. Clear screen";

        cout<<"\n\nEnter choice: ";

        string choice;
        getline(cin,choice);


        if(choice=="1")
        {
            continue;
        }

        else if(choice=="2")
        {
            return;
        }

        else if(choice=="3")
        {
            system("cls");
            continue;
        }

        else
        {
            cout<<"\nInvalid choice!";
            cout<<"\nPress Enter...";
            cin.get();
        }
    }
}