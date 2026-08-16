#include <iostream>
#include <string>
#include <vector>
#include "sha256.h"

using namespace std;


// This function handles text hashing
void textHashing()
{
    while(true)
    {
        system("cls");

        cout<<"========================================\n";
        cout<<"              TEXT HASHING\n";
        cout<<"========================================\n";

        string text;

        cout<<"\nEnter text: ";
        getline(cin,text);


        // Convert text into bytes
        vector<uint8_t> data(
            text.begin(),
            text.end()
        );


        // Generate SHA-256 hash
        string hash=sha256(data);


        cout<<"\n----------------------------------------\n";

        cout<<"Original Text:\n";
        cout<<text;

        cout<<"\n\nSHA-256 Hash:\n";
        cout<<hash;

        cout<<"\n----------------------------------------\n";


        cout<<"\n1. Hash another text";
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