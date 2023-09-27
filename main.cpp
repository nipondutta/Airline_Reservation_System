#include <iostream>
#include <windows.h>
#include <cstdlib>
#include "mysource.cpp"
using namespace std;

void login();
void registr();
void forgot();
void login_menu();
void feedback();

int main()
{
        int ch,p;
        string pass;
        system("COLOR 30");
        system("CLS");
        load();
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb  ";
        cout << "\t\t\t\t                                             ";
        cout << "\n\t\t\t\t        WELCOME TO  FLY HIGH AIRLINE TICKET RESERVATION SYSTEM                      ";
        cout << "\t\t\t\t ";
        cout << "\n\t\t\t\t               NETAJI SUBHAS CHANDRA BOSE AIRPORT        ";
        cout << "\n\t\t\t\t ";
        cout << "\n\t\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc   ";
        gotoxy(140, 33);
        cout << "BY BOOLEAN BANDITS" << endl;
        cout << "PRESS 5 TO CONTINUE !";
        cin >> p;
        while (p != 5)
        {
                cout << "TRY AGAIN !!" << endl;
                cin >> p;
        }
        if (p == 5)
        {
	        system("CLS");

                do
                {
                        cout << "***********************************************************************\n\n";
                        cout << "                             LOGIN PAGE                                \n\n";
                        cout << "***********************************************************************\n\n";
                        cout << "\n   \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb \n ";
                        cout << "     \tLOGIN AS ADMIN    ------ [1]                                                                                                                                               \n";
                        cout << "     \tLOGIN AS USER     ------ [2]                                                                                                                                             \n";
                        cout << "     \tQUIT              ------ [3] 																																		      \n";
                        cout << "   \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n";
                        cout << "   OPTION : ";
                        cin >> ch;
                        switch (ch)
                        {
                        case 1:
                                system("CLS");
                                cout << "\nENTER PASSWORD : ";
                                cin >> pass;
                                while (pass != "4bandits")
                                {
                                        cout << "TRY AGAIN !!" << endl;
                                        cin >> pass;
                                }
	                        system("CLS");
                                admin_menu();
                                break;
                        case 2:
	                        system("CLS");
                                login_menu();
                                break;
                        case 3:
                                feedback();
                                break;
                        default:
                                cout << "INVALID INPUT !!! \n\n";
                                main();
                                break;
                        }
                } while (ch != 3);
        }
        return 0;
}
void feedback()
{
        int f;
        cout << "\n\nTHANK YOU VISIT AGAIN.  \n\n\n";
        cout << "\nHOW WAS YOUR EXPERIENCE (1 2 3 4 5)? \n\n";
        cin >> f;
        while (f > 5 || f == 0)
        {
                cout << "TRY AGAIN !!" << endl;
                cin >> f;
        }
        if (f <= 5)
        {
                system("CLS");
        }
        cout << "\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd" << endl;
        cout << "\t   THANKS FOR YOUR FEEDBACK. \n";
        cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"
             << endl;
}

void login_menu()
{
        int choice;
        do
        {
                cout << "***********************************************************************\n\n";
                cout << "                          LOGIN AS USER                                \n\n";
                cout << "***********************************************************************\n\n";
                cout << "----------------------------------" << endl;
                cout << "LOGIN                    ------1" << endl;
                cout << "REGISTER                 ------2" << endl;
                cout << "FORGOT PASSWORD/USERNAME ------3" << endl;
                cout << "EXIT                     ------4" << endl;
                cout << "----------------------------------" << endl;

                cout << "\nENTER YOUR CHOICE :";
                cin >> choice;
                cout << endl;
                switch (choice)
                {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
                        forgot();
                        break;
                case 4:
                        break;
                default:
                        system("cls");
                        cout << "OOPS!!WRONG CHOICE\nTRY AGAIN" << endl;
                        login_menu();
                }
                system("CLS");
        } while (choice != 4);
}

void login()
{
        int count = 0;
        string user, pass, u, p;
        system("cls");
        cout << "---------------------" << endl;
        cout << "      LOGIN PAGE     " << endl;
        cout << "---------------------" << endl;
        cout << "USERNAME :";
        cin >> user;
        cout << "PASSWORD :";
        cin >> pass;

        ifstream input("database.txt");
        while (input >> u >> p)
        {
                if (u == user && p == pass)

                {
                        count = 1;
                        system("cls");
                }
        }
        input.close();
        if (count == 1)
        {
                // system("Color 0A");
                cout << "\nHELLO " << user << "\n<LOGIN SUCCESSFUL>\nPRESS ENTER TO CONTINUE\n";
                cin.get();
                cin.get();
                menu();
                seat_fill();
        }
        else
        {
                // system("Color 04");
                cout << "\nLOGIN ERROR\nPlease check your username and password\n";
                login_menu();
        }
}

void registr()
{

        string reguser, regpass, ru, rp;
        system("cls");
        cout << "ENTER THE USERNAME :";
        cin >> reguser;
        cout << "\nENTER THE PASSWORD :";
        cin >> regpass;

        ofstream reg("database.txt", ios::app);
        reg << reguser << ' ' << regpass << endl;
        system("cls");
        cout << "\n-------REGISTRATION SUCCESSFUL-------\n";
        login_menu();
}

void forgot()
{
        int ch;
        system("cls");
        cout << "FORGOTTEN ? WE'RE HERE FOR HELP\n";
        cout << "1. SEARCH YOUR ID BY USERNAME" << endl;
        cout << "2. SEARCH YOUR ID BY PASSWORD" << endl;
        cout << "3. MAIN MENU" << endl;
        cout << "ENTER YOUR CHOICE:";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
                int count = 0;
                string searchuser, su, sp;
                cout << "\nENTER YOUR REMEMBERED USERNAME :";
                cin >> searchuser;

                ifstream searchu("database.txt");
                while (searchu >> su >> sp)
                {
                        if (su == searchuser)
                        {
                                count = 1;
                        }
                }
                searchu.close();
                if (count == 1)
                {
                        cout << "\n\nHURRAY!ACCOUNT FOUND\n";
                        cout << "\nYOUR PASSWORD IS " << sp;
                        cin.get();
                        cin.get();
                        system("cls");
                        login_menu();
                }
                else
                {
                        cout << "\nSORRY, YOUR USERID IS NOT FOUND IN OUR DATABASE\n";
                        cout << "\nPLEASE KINDLY CONTACT YOUR SYSTEM ADMINISTRATOR FOR MORE DETAILS \n";
                        cin.get();
                        cin.get();
                        login_menu();
                }
                break;
        }
        case 2:
        {
                int count = 0;
                string searchpass, su2, sp2;
                cout << "\nENTER THE REMEMBERED PASSWORD :";
                cin >> searchpass;

                ifstream searchp("database.txt");
                while (searchp >> su2 >> sp2)
                {
                        if (sp2 == searchpass)
                        {
                                count = 1;
                        }
                }
                searchp.close();
                if (count == 1)
                {
                        cout << "\nYOUR PASSWORD IS FOUND IN THE DATABASE \n";
                        cout << "\nYOUR ID IS : " << su2;
                        cin.get();
                        cin.get();
                        system("cls");
                        login_menu();
                }
                else
                {
                        cout << "SORRY, WE CANNOT FOUND YOUR PASSWORD IN OUR DATABASE \n";
                        cout << "\nKINDLY CONTACT YOUR ADMINISTRATOR FOR MORE INFORMATION\n";
                        cin.get();
                        cin.get();
                        login_menu();
                }

                break;
        }

        case 3:
        {
                cin.get();
                login_menu();
        }
        default:
                cout << "SORRY, YOU ENTERED WRONG CHOICE. KINDLY TRY AGAIN" << endl;
                forgot();
        }
}
