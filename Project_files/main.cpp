#include <bits/stdc++.h>
#include <windows.h>
#include <mmsystem.h>
#include "Project.h"
#include<bits/stdc++.h>

using namespace std;
int main()
{
    Project M;
    char c = 'y';
    char ch;
    int choice;
    while (c == 'y' || c=='Y')
    {
        c='n';
        cout<<endl<<endl;
        cout<<"*************************************  WELCOME TO MUSIC WORLD  ********************************"<<endl;
        cout<<endl<<endl;

        cout << "Enter S for learning Scales of piano" << endl;
        cout << "Enter C for learning Chords of piano" << endl;
        cout << "Enter A for learning Arpeggio Pattern of piano" << endl;
        cout<<endl;
        cout<<"Enter your choice: ";
        cin >> ch;
        getchar();
        switch (ch)
        {

        case 'S':
        {
            char p1='y';
            while (p1 == 'y' || p1=='Y')
            {
                p1='n';
                cout << "Enter 1 for major scale" << endl;
                cout << "Enter 2 for minor scale" << endl;
                cout<<endl;
                cout<<"Enter your choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    string root;
                    cout<<"Notes are: ";
                    M.Display_Notes();
                    cout<<endl;
                    cout << "Enter root note for major scale: ";
                    cin >> root;
                    if(M.Check_Root(root))
                    {
                    cout << "\nThe major scale for " << root << " is: ";
                    M.Generate_MajorScale(root);
                    cout << "\nPlaying the major scale for root " << root << endl;
                    M.Play_MajorScale(root);


                    }
                   else
                   {
                       cout<<endl;
                    cout<<"You have entered wrong root note. Please enter from: ";
                    M.Display_Notes();cout<<endl;
                   }
                   break;
                }
                case 2:
                {
                    string root;
                    cout<<"Notes are: ";
                    M.Display_Notes();
                    cout<<endl;
                    cout << "Enter root note for minor scale: ";
                    cin >> root;
                    if(M.Check_Root(root))
                       {
                    cout << "\nThe minor scale for " << root << " is: ";
                    M.Generate_MinorScale(root);
                    cout << "\nPlaying the minor scale for root " << root << endl;
                    M.Play_MinorScale(root);
                       }
                    else
                   {
                       cout<<endl;
                    cout<<"You have entered wrong root note. Please enter from: ";
                    M.Display_Notes();
                    cout<<endl;
                   }
                    break;
                }
                default:
                    cout << "Enter valid choice" << endl;
                }
                cout<<endl;
                cout << "Want to learn another scale? Enter y for yes and n for no: " ;
                cin >> p1;
                getchar();
                if (p1 == 'y' || p1=='Y')
                {

                    Sleep(1000);
                    system("cls");
                }
            }
           break;
        }

        case 'C':
        {
            char p2='y';
            while (p2 == 'y' || p2=='Y')
            {
                cout << "Enter 1 for major chord" << endl;
                cout << "Enter 2 for minor chord" << endl;
                cout<<"Enter your choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    string root;
                    cout<<"Notes are: ";
                    M.Display_Notes();
                    cout<<endl;
                    cout << "Enter root note for major chord: ";
                    cin >> root;
                    if(M.Check_Root(root))
                    {
                    cout << "\nThe major chord for " << root << " is: ";
                    M.Generate_MajorChord(root);
                    cout << "\nPlaying the major chord for root " << root << endl;
                    M.Play_MajorChord(root);
                    }
                    else
                    {
                        cout<<endl;
                    cout<<"You have entered wrong root note. Please enter from: ";
                    M.Display_Notes();

                    }

                    break;
                }
                case 2:
                {
                    string root;
                    cout<<"Notes are: ";
                    M.Display_Notes();
                    cout<<endl;
                    cout << "Enter root note for minor chord: ";
                    cin >> root;
                    if(M.Check_Root(root))
                    {

                    cout << "\nThe minor chord for " << root << " is: ";
                    M.Generate_MinorChord(root);
                    cout << "\nPlaying the minor chord for root " << root << endl;
                    M.Play_MinorChord(root);
                    }
                     else
                    {
                        cout<<endl;
                    cout<<"You have entered wrong root note. Please enter from: ";
                    M.Display_Notes();
                    cout<<endl;

                    }
                    break;
                }
                default:
                    cout << "Enter valid choice" << endl;
                }cout<<endl;
                cout << "Want to learn another chord? Enter y for yes and n for no: " ;
                cin >> p2;getchar();
                if (p2 == 'y' || p2=='Y')
                {
                    Sleep(1000);
                    system("cls");
                }
            }
            break;
        }
        case 'A':
        {
            char p3='y';

            while (p3 == 'y' || p3=='Y')
            {
                cout << "Enter 1 for major arpeggio pattern" << endl;
                cout << "Enter 2 for minor arpeggio pattern" << endl;
                cout<<"Enter your choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    string root;
                    cout<<"Notes are: ";
                    M.Display_Notes();
                    cout<<endl;
                    cout << "Enter root note for major arpeggio pattern: ";
                    cin >> root;
                    if(M.Check_Root(root))
                    {

                    cout << "\nThe major arpeggio pattern for " << root << " is: ";
                    M.Generate_MajorArpeggio(root);
                    cout << "\nPlaying the major arpeggio pattern for root " << root << endl;
                    M.Play_MajorArpeggio(root);
                    }
                     else
                    {
                        cout<<endl;
                    cout<<"You have entered wrong root note. Please enter from: ";
                    M.Display_Notes();
                    cout<<endl;

                    }
                    break;
                }
                case 2:
                {
                    string root;
                    cout<<"Notes are: ";
                    M.Display_Notes();cout<<endl;
                    cout << "Enter root note for minor arpeggio pattern: ";
                    cin >> root;
                    if(M.Check_Root(root))
                    {

                    cout << "\nThe minor arpeggio pattern for " << root << " is: ";
                    M.Generate_MinorArpeggio(root);
                    cout << "\nPlaying the minor arpeggio pattern for root " << root << endl;
                    M.Play_MinorArpeggio(root);
                    }
                     else
                    {
                        cout<<endl;
                    cout<<"You have entered wrong root note. Please enter from: ";
                    M.Display_Notes();cout<<endl;

                    }
                    break;
                }
                default:
                    cout << "Enter valid choice" << endl;
                }
                cout<<endl;
                cout << "Want to learn another arpeggio? Enter y for yes and n for no: ";
                cin >> p3;
                getchar();
                if (p3 == 'y' || p3=='Y')
                {

                    Sleep(1000);
                    system("cls");
                }
            }
            break;
        }
        default:
            cout << "Enter valid character" << endl;
        }
        cout<<endl;
        cout << "Want to learn another Scale/Chord/Arpeggio? Enter y for yes and n for no: " ;
        cin >> c;
        getchar();
        if (c == 'y' || c=='Y')
        {

            Sleep(1000);
            system("cls");
        }
    }

    return 0;
}
