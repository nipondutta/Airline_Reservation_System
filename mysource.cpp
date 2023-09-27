
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <iomanip>
#include "myheader.h"

using namespace std;

int reserve = 999;
int seat[SIZE];
int seat_b[SIZEB];
void seat_fill() // FOR ECONOMICAL CLASS
{
	for (int i = 0; i < SIZE; i++)
	{
		seat[i] = 0;
	}
}
bool taken = false;
bool seat_no(int y)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (seat[i] == -1)
		{
			taken = true;
			cout << "THE SEAT IS TAKEN ALREADY. \n";
			cout << "PLEASE CHOOSE ANOTHER SEAT NUMBER FROM BELOW." << endl;
			int j = 1;
			while (j < SIZE + 1)
			{
				if (seat[j - 1] == -1)
				{
					j++;
				}
				else
				{
					cout << "|" << j << "|";
					if (j % 10 == 0)
						cout << endl;
					j++;
				}
			}
		}
	}
	return false;
}
void seat_b_fill() // FOR BUSINESS CLASS
{
	for (int i = 0; i < SIZEB; i++)
	{
		seat_b[i] = 0;
	}
}
bool taken_b = false;
bool seat_no_b(int y)
{
	for (int i = 0; i < SIZEB; i++)
	{
		if (seat_b[i] == -1)
		{
			taken_b = true;
			cout << "THE SEAT IS TAKEN ALREADY. \n";
			cout << "PLEASE CHOOSE ANOTHER SEAT NUMBER FROM BELOW." << endl;
			int j = 1;
			while (j < SIZEB + 1)
			{
				if (seat_b[j - 1] == -1)
				{
					j++;
				}
				else
				{
					cout << "|" << j << "|";
					if (j % 10 == 0)
						cout << endl;
					j++;
				}
			}
		}
	}
	return false;
}

// FOR USER MENU

void menu()
{
	char choice;
	do
	{
		cout << "\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MENU OPTIONS \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"
			 << endl;
		cout << "\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
		cout << "\t MAKE RESERVATION    ------ [1] \n";
		cout << "\t CANCEL RESERVATION  ------ [2] \n ";
		cout << "\t CHANGE RESERVATION  ------ [3] \n";
		cout << "\t PRINT TICKET        ------ [4] \n";
		cout << "\t QUIT                ------ [5] \n ";
		cout << "\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
		cout << "   OPTION : ";
		cin >> choice;
		choice = ((int)(choice)-48);
		switch (choice)
		{
		case 1:
			system("CLS");
			flyhigh.make_reservation();
			break;
		case 2:
			system("CLS");
			flyhigh.cancel_reservation();
			break;
		case 3:
			system("CLS");
			flyhigh.change_reservation();
			break;
		case 4:
			system("CLS");
			flyhigh.print_ticket();
			break;

		case 5:
			break;
		default:
			cout << "INVALID INPUT !!! \n\n";
			break;
			menu();
		} // Ending case loop.
		cout << "\n   PROCESS COMPLETED... PRESS ENTER TO CONTINUE\n\n";
		cin.get();
		if (cin.get() == '\n')
		{
			system("CLS");
		}
	} while (choice != 5);
}

airlines::airlines()
{
	start = NULL;
}
void airlines::check(int ch, string code)
{
	ifstream i;
	string codechk, line;
	switch (ch)
	{
	case 1:
		i.open("flights.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				while (i >> codechk)
				{
					if (codechk == code)

					{

						getline(i, line);
						cout << "   " << line << endl;
					}
				}
			}
			i.close();
		}
		break;
	case 2:
		i.open("flights_mumbai.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				while (i >> codechk)
				{
					if (codechk == code)

					{

						getline(i, line);
						cout << "   " << line << endl;
					}
				}
			}
			i.close();
		}
		break;
	case 3:
		i.open("flights_chen.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				while (i >> codechk)
				{
					if (codechk == code)

					{

						getline(i, line);
						cout << "   " << line << endl;
					}
				}
			}
			i.close();
		}
		break;
	case 4:
		i.open("flights_gau.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				while (i >> codechk)
				{
					if (codechk == code)

					{

						getline(i, line);
						cout << "   " << line << endl;
					}
				}
			}
			i.close();
		}
		break;
	default:
		break;
	}
}

// FOR USERS
int airlines::show_user()
{
	int ch;
	string line;
	ifstream i;
a:
	cout << "   ENTER YOUR DESTINATION:" << endl;
	cout << "   ------------------" << endl;
	cout << "   ENTER 1 FOR DELHI:" << endl;
	cout << "   ENTER 2 FOR MUMBAI:" << endl;
	cout << "   ENTER 3 FOR CHENNAI:" << endl;
	cout << "   ENTER 4 FOR GUWAHATI:" << endl
		 << "   ";
	cin >> ch;

	switch (ch)
	{
	case 1:
		i.open("flights.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		break;
	case 2:
		i.open("flights_mumbai.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		break;
	case 3:
		i.open("flights_chen.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		break;
	case 4:
		i.open("flights_gau.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		break;
	default:
		cout << "   WRONG DESTINATION CHOICE!!TRY AGAIN";
		goto a;
	}
	return ch;
}
void airlines::print_ticket()
{
	load();
	system("CLS");
	int r_no = 0;
	cout << "PLEASE ENTER YOUR RESERVATION NUMBER HERE: ";
	cin >> r_no;
	node *cur = start;
	while (cur != NULL)
	{
		if (cur->reserve_num == r_no)
		{
			cout << "\n\n \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n";
			cout << " \xba\t\tTICKET                          \xba" << endl;
			cout << " \xba\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xba\n";
			cout << " \xba\tNAME : " << cur->fname << " " << cur->lname << endl;
			cout << " \xba\tID : " << cur->ID << endl;
			cout << " \xba\tPHONE NUMBER : " << cur->phone_num << endl;
			cout << " \xba\tMENU : " << cur->menu << endl;
			cout << " \xba\tCLASS : " << cur->sitting_class << endl;
			cout << " \xba\tSEAT NUMBER : " << cur->seat_num << endl;
			cout << " \xba\tRESERVATION NO. : " << cur->reserve_num << endl;
			cout << " \xba\tTOTAL FARE : " << cur->fare << endl;
			cout << " \xba\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xba" << endl;
			cout << " \xba";
			flyhigh.check(cur->f_num, cur->f_code);
			cout << " \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc" << endl;
			return;
		}
		cur = cur->next;
	}
	cout << " SORRY!!! NOT FOUND \n\n";
}
void airlines::make_reservation()
{
	int flag, cost = 0;
	load();
	system("CLS");
	int meal_choice, x;
	temp = new node;
	cout << "\n\n   ENTER FIRST NAME OF PERSON: ";
	cin >> temp->fname;
	cout << endl
		 << "   ENTER LAST NAME OF PERSON: ";
	cin >> temp->lname;
	cout << endl
		 << "   ENTER LAST FOUR DIGIT OF AADHAR OF THE PERSON: ";
	cin >> temp->ID;
	cout << endl
		 << "   ENTER 10-DIGITS PHONE NUMBER OF PERSON: ";
	cin >> temp->phone_num;
	cout << endl
		 << "   ENTER 1 FOR BUSINESS CLASS AND 2 FOR ECONOMY CLASS  " << endl;
	cout << "   BUSINESS CLASS PRICE - Rs 3000 & ECONOMY CLASS PRICE - Rs 1500";
	cout << endl
		 << "   ENTER YOUR CHOICE : ";
	cin >> flag;
	while (flag > 3 || flag == 0)
	{
		cout << "TRY AGAIN";
		cin >> flag;
	}
	switch (flag)
	{
	case 1:
		temp->sitting_class = "BUSINESS";
		do
		{
			cout << endl
				 << "   PLEASE ENTER THE SEAT NUMBER FOR BUSINESS CLASS: ";
			cin >> x;
			while (x > SIZEB)
			{
				cout << "   TRY AGAIN:: ";
				cin >> x;
			}
			if ((seat_b[x - 1]) > -1)
				taken_b = false;
			else
				seat_no_b(x);
			seat_b[x - 1] = -1;
			temp->seat_num = x;
		} while (taken_b == true);
		cost = 3000;
		break;
	case 2:
		temp->sitting_class = "ECONOMY";
		do
		{
			cout << endl
				 << "   PLEASE ENTER THE SEAT NUMBER FOR ECONOMY CLASS: ";
			cin >> x;
			while (x > SIZE)
			{
				cout << "   TRY AGAIN:: ";
				cin >> x;
			}
			if ((seat[x - 1]) > -1)
				taken = false;
			else
				seat_no(x);
			seat[x - 1] = -1;
			temp->seat_num = x;
		} while (taken == true);
		cost = 1500;
		break;
	}

	cout << endl
		 << "   PLEASE ENTER YOUR MENU PREFERENCE FROM BELOW: \n\n";
	cout << "      VEG     ..... '1'(Rs 500)\n";
	cout << "      NON-VEG ..... '2'(Rs 1200)\n";
	cout << "      NO MEAL ..... '3'\n\n";
	cout << "   YOUR CHOICE :: ";
	cin >> meal_choice;
	while (meal_choice > 3 || meal_choice < 1)
	{
		cout << "   TRY AGAIN:: ";
		cin >> meal_choice;
	}
	if (meal_choice == 1)
	{
		temp->menu = "veg";
		cost += 500;
	}
	else if (meal_choice == 2)
	{
		temp->menu = "Non-Veg";
		cost += 1200;
	}
	else
	{
		temp->menu = "No meal";
	}

	temp->fare = cost;
	reserve++;
	temp->reserve_num = reserve;
	cout << endl
		 << "   YOUR RESERVATION NUMBER IS :: " << reserve << "\n";

	temp->f_num = flyhigh.show_user();

	string fcode;
	cout << endl
		 << "   ENTER FLIGHT CODE:";
	cin >> temp->f_code;

	cout << "\n\n \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n";
	cout << " \xba\t\tTICKET                          \xba" << endl;
	cout << " \xba\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xba\n";
	cout << " \xba\tNAME : " << temp->fname << " " << temp->lname << endl;
	cout << " \xba\tID : " << temp->ID << endl;
	cout << " \xba\tPHONE NUMBER : " << temp->phone_num << endl;
	cout << " \xba\tMENU : " << temp->menu << endl;
	cout << " \xba\tCLASS : " << temp->sitting_class << endl;
	cout << " \xba\tSEAT NUMBER : " << temp->seat_num << endl;
	cout << " \xba\tRESERVATION NO. : " << temp->reserve_num << endl;
	cout << " \xba\tTOTAL FARE : " << temp->fare << endl;
	cout << " \xba\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xba" << endl;
	cout << " \xba";
	flyhigh.check(temp->f_num, temp->f_code);
	cout << " \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc" << endl;

	temp->next = NULL;
	if (start == NULL)
		start = temp;
	else
	{
		temp2 = start;
		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
}
int cancel=0;
void airlines::cancel_reservation()
{
	load();
	system("CLS");
	int num;
	cout << "   PLEASE ENTER YOUR RESERVATION NUMBER HERE: ";
	cin >> num;
	node *cur = start;
	if (cur != NULL)
	{
		if (start->reserve_num == num)
		{
			node *del = start;
			start = start->next;
			delete del;
			seat[0] = 0;
			cancel++;
			return;
		}
		else
		{
			node *pre, *cur;
			pre = start;
			cur = start->next;
			while (cur != NULL)
			{
				if (cur->reserve_num == num)
					break;
				pre = cur;
				cur = cur->next;
			}
			seat[cur->seat_num - 1] = 0;
			if (cur != NULL)
				pre->next = cur->next;
		}
		cancel++;
	}
	else
	{
		cout << "   !!! *** NOTHING TO DELETE OR INVALID ENTRY *** !!! \n"
			 << endl;
	}
}
void airlines::change_reservation()
{
	load();
	int c=0;
	system("CLS");
	int option, next_seat;
	cout << "   PLEASE ENTER YOUR RESERVATION NUMBER: ";
	cin >> option;
	node *cur;
	cur = start;
	while (cur != NULL)
	{
		if (cur->reserve_num == option)
		{
			c++;
			cout << "   PLEASE CHOOSE ANOTHER SEAT NUMBER FROM BELOW.";
			if (cur->sitting_class == "ECONOMY")
			{
				w:
				int j = 1;
				while (j < SIZE + 1)
				{
					if (seat[j - 1] == -1)
						j++;
					else
					{
						cout << "| " << j << "|";
						if (j % 10 == 0)
							cout << endl;
						j++;
					}
				}
				cin >> next_seat;
				if(seat[next_seat-1]==0)
				{
					seat[cur->seat_num - 1] = 0;
					cur->seat_num = next_seat;
					seat[next_seat - 1] = -1;
				}
				else
				{
					cout<<endl<<"   THE SEAT IS ALREADY TAKEN.";
					cout <<endl<< "   PLEASE CHOOSE ANOTHER SEAT NUMBER FROM BELOW.";
					goto w;
				}
				
			}
			else
			{
				v:
				int j = 1;
				while (j < SIZEB + 1)
				{
					if (seat_b[j - 1] == -1)
						j++;
					else
					{
						cout << "| " << j << "|";
						if (j % 10 == 0)
							cout << endl;
						j++;
					}
				}
				cin >> next_seat;
				if(seat_b[next_seat-1]==0)
				{
					seat_b[cur->seat_num - 1] = 0;
					cur->seat_num = next_seat;
					seat_b[next_seat - 1] = -1;
				}
				else
				{
					cout<<endl<<"   THE SEAT IS ALREADY TAKEN.";
					cout <<endl<< "   PLEASE CHOOSE ANOTHER SEAT NUMBER FROM BELOW.";
					goto v;
				}
			}
		}
		cur = cur->next;
	}
	if (c==0)
	{
		cout << " SORRY!!! NOT FOUND \n\n";
	}
	
}

// F0R ADMIN
void admin_menu()
{
	load();
	system("CLS");
	int m;
	do
	{
		cout << "\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MENU OPTIONS \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"
			 << endl;
		cout << "\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
		cout << "\t DISPLAY FLIGHTS     ------ [1] \n";
		cout << "\t ADD FLIGHTS         ------ [2] \n ";
		cout << "\t DELETE FLIGHTS      ------ [3] \n ";
		cout << "\t UPDATE FLIGHTS      ------ [4] \n ";
		cout << "\t SEARCH PASSENGER    ------ [5] \n";
		cout << "\t PRINT A LIST        ------ [6] \n";
		cout << "\t QUIT                ------ [7] \n ";
		cout << "\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
		cout << "   OPTION : ";
		cin >> m;
		switch (m)
		{
		case 1:
			system("CLS");
			flyhigh.show();
			break;
		case 2:
			system("CLS");
			flyhigh.append();
			break;
		case 3:
			system("cls");
			flyhigh.del();
			break;
		case 4:
			system("CLS");
			flyhigh.update();
			break;
		case 5:
			system("CLS");
			flyhigh.search_passenger();
			break;
		case 6:
			system("CLS");
			flyhigh.print_list();
			break;
		case 7:
			break;
		default:
			cout << "INVALID INPUT !!! \n\n";
			break;
			system("CLS");
			admin_menu();
		} // Ending case loop.
		cout << "\n   PROCESS COMPLETED... PRESS ENTER TO CONTINUE\n\n";
		cin.get();
		if (cin.get() == '\n')
		{
			system("CLS");
		}
	} while (m != 7);
}
void airlines::append()
{
	load();
	system("CLS");
	int count = 0;
	int j, n, ch;
	ifstream i;
	ofstream fout;
	string code, line, departure, arrival, airline, avail;
a:
	cout << "   -----------------------------------------" << endl;
	cout << "   ------ENTER NEW RECORD IN FLIGHT LIST----" << endl;
	cout << "   -----------------------------------------" << endl
		 << endl;
	cout << "   ENTER YOUR CHOICE:" << endl;
	cout << "   ------------------" << endl;
	cout << "   ENTER 1 FOR DELHI:" << endl;
	cout << "   ENTER 2 FOR MUMBAI:" << endl;
	cout << "   ENTER 3 FOR CHENNAI:" << endl;
	cout << "   ENTER 4 FOR GUWAHATI:" << endl;
	cin >> ch;
	cout << "   HOW MANY RECORDS YOU WANT TO ENTER:";
	cin >> n;
	switch (ch)
	{
	case 1:
		i.open("flights.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		i.open("flights.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);

				count++;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		cout << "            FLIGHT CODE  DEPARTURE  ARRIVAL  AIRLINE  AVAILABILITY " << endl;
		fout.open("flights.txt", ios::app);
		for (j = 1; j <= n; j++)
		{
			cout << "   RECORD " << count + j << ":";
			cin >> code >> departure >> arrival >> airline >> avail;
			fout << code << ' ' << departure << ' ' << arrival << ' ' << airline << ' ' << avail;
			fout << endl;
			cout << "\n   FLIGHT LIST TO DELHI IS UPDATED";
		}
		fout.close();
		break;
	case 2:
		i.open("flights_mumbai.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		i.open("flights_mumbai.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);

				count++;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		cout << "            FLIGHT CODE  DEPARTURE  ARRIVAL  AIRLINE  AVAILABILITY " << endl;
		fout.open("flights_mumbai.txt", ios::app);
		for (j = 1; j <= n; j++)
		{
			cout << "   RECORD " << count + j << ":";
			cin >> code >> departure >> arrival >> airline >> avail;
			fout << code << ' ' << departure << ' ' << arrival << ' ' << airline << ' ' << avail;
			fout << endl;
			cout << "\n   FLIGHT LIST TO MUMBAI IS UPDATED";
		}
		fout.close();
		break;
	case 3:
		i.open("flights_chen.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}
		i.open("flights_chen.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);

				count++;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		cout << "            FLIGHT CODE  DEPARTURE  ARRIVAL  AIRLINE  AVAILABILITY " << endl;
		fout.open("flights_chen.txt", ios::app);
		for (j = 1; j <= n; j++)
		{
			cout << "   RECORD " << count + j << ":";
			cin >> code >> departure >> arrival >> airline >> avail;
			fout << code << ' ' << departure << ' ' << arrival << ' ' << airline << ' ' << avail;
			fout << endl;
			cout << "\n   FLIGHT LIST TO CHENNAI IS UPDATED";
		}
		fout.close();
		break;
	case 4:
		i.open("flights_gau.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}
		i.open("flights_gau.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);

				count++;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		cout << "            FLIGHT CODE  DEPARTURE  ARRIVAL  AIRLINE  AVAILABILITY " << endl;
		fout.open("flights_gau.txt", ios::app);
		for (j = 1; j <= n; j++)
		{
			cout << "   RECORD " << count + j << ":";
			cin >> code >> departure >> arrival >> airline >> avail;
			fout << code << ' ' << departure << ' ' << arrival << ' ' << airline << ' ' << avail;
			fout << endl;
			cout << "\n   FLIGHT LIST TO GUWAHATI IS UPDATED";
		}
		fout.close();
		break;
	default:
		cout << "   WRONG ENTRY!! TRY AGAIN";
		goto a;
	}
}
void airlines::del()
{
	load();
	system("CLS");
	string chkcode, code, line, departure, arrival, airline, avail;
	ifstream i;
	ofstream temp;
	int j, ch;
b:
	cout << "   -----------------------------------------" << endl;
	cout << "   -------DELETE RECORD IN FLIGHT LIST------" << endl;
	cout << "   -----------------------------------------" << endl
		 << endl;
	cout << "   ENTER YOUR CHOICE:" << endl;
	cout << "   ------------------" << endl;
	cout << "   ENTER 1 FOR DELHI:" << endl;
	cout << "   ENTER 2 FOR MUMBAI:" << endl;
	cout << "   ENTER 3 FOR CHENNAI:" << endl;
	cout << "   ENTER 4 FOR GUWAHATI:" << endl;
	cin >> ch;
	switch (ch)
	{
	case 1:
		i.open("flights.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}
		cout << "Enter flight code:";
		cin >> chkcode;

		i.open("flights.txt", ios::app | ios::in);
		temp.open("temp.txt", ios::out);

		i >> code >> departure >> arrival >> airline >> avail;
		while (!i.eof())
		{
			if (code == chkcode)
			{
				cout << "Records deleted successfully";
			}
			else
			{
				temp << code << " " << departure << " " << arrival << " " << airline << " " << avail << endl;
			}

			i >> code >> departure >> arrival >> airline >> avail;
		}

		i.close();
		temp.close();
		remove("flights.txt");
		rename("temp.txt", "flights.txt");
		break;
	case 2:
		i.open("flights_mumbai.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}
		cout << "Enter flight code:";
		cin >> chkcode;

		i.open("flights_mumbai.txt", ios::app | ios::in);
		temp.open("temp.txt", ios::out);

		i >> code >> departure >> arrival >> airline >> avail;
		while (!i.eof())
		{
			if (code == chkcode)
			{
				cout << "Records deleted successfully";
			}
			else
			{
				temp << code << " " << departure << " " << arrival << " " << airline << " " << avail << endl;
			}

			i >> code >> departure >> arrival >> airline >> avail;
		}

		i.close();
		temp.close();
		remove("flights_mumbai.txt");
		rename("temp.txt", "flights_mumbai.txt");
		break;
	case 3:
		i.open("flights_chen.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}
		cout << "Enter flight code:";
		cin >> chkcode;

		i.open("flights_chen.txt", ios::app | ios::in);
		temp.open("temp.txt", ios::out);

		i >> code >> departure >> arrival >> airline >> avail;
		while (!i.eof())
		{
			if (code == chkcode)
			{
				cout << "Records deleted successfully";
			}
			else
			{
				temp << code << " " << departure << " " << arrival << " " << airline << " " << avail << endl;
			}

			i >> code >> departure >> arrival >> airline >> avail;
		}

		i.close();
		temp.close();
		remove("flights_chen.txt");
		rename("temp.txt", "flights_chen.txt");
		break;
	case 4:
		i.open("flights_gau.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}
		cout << "Enter flight code:";
		cin >> chkcode;

		i.open("flights_gau.txt", ios::app | ios::in);
		temp.open("temp.txt", ios::out);

		i >> code >> departure >> arrival >> airline >> avail;
		while (!i.eof())
		{
			if (code == chkcode)
			{
				cout << "Records deleted successfully";
			}
			else
			{
				temp << code << " " << departure << " " << arrival << " " << airline << " " << avail << endl;
			}

			i >> code >> departure >> arrival >> airline >> avail;
		}

		i.close();
		temp.close();
		remove("flights_gau.txt");
		rename("temp.txt", "flights_gau.txt");
		break;
	default:
		cout << "   WRONG ENTRY!! TRY AGAIN";
		goto b;
	}
}
void airlines::update()
{
	load();
	system("CLS");
	string chkcode, code, code2, line, departure, arrival, airline, avail, departure2, arrival2, airline2, avail2;
	ifstream i;
	ofstream temp;
	int j, ch;
b:
	cout << "   -----------------------------------------" << endl;
	cout << "   -------UPDATE RECORD IN FLIGHT LIST------" << endl;
	cout << "   -----------------------------------------" << endl
		 << endl;
	cout << "   ENTER YOUR CHOICE:" << endl;
	cout << "   ------------------" << endl;
	cout << "   ENTER 1 FOR DELHI:" << endl;
	cout << "   ENTER 2 FOR MUMBAI:" << endl;
	cout << "   ENTER 3 FOR CHENNAI:" << endl;
	cout << "   ENTER 4 FOR GUWAHATI:" << endl;
	cin >> ch;
	switch (ch)
	{
	case 1:
		i.open("flights.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}
		cout << "Enter flight code:";
		cin >> chkcode;

		i.open("flights.txt", ios::app | ios::in);
		temp.open("temp2.txt", ios::out);

		i >> code >> departure >> arrival >> airline >> avail;
		while (!i.eof())
		{
			if (code == chkcode)
			{
				cout << "            FLIGHT CODE  DEPARTURE  ARRIVAL  AIRLINE  AVAILABILITY " << endl;
				cout << "            ";cin >> code2 >> departure2 >> arrival2 >> airline2 >> avail2;
				temp << code2 << " " << departure2 << " " << arrival2 << " " << airline2 << " " << avail2 << endl;
				cout << "   Record updated" << endl;
			}
			else
			{
				temp << code << " " << departure << " " << arrival << " " << airline << " " << avail << endl;
			}

			i >> code >> departure >> arrival >> airline >> avail;
		}

		i.close();
		temp.close();
		remove("flights.txt");
		rename("temp2.txt", "flights.txt");
		break;
	case 2:
		i.open("flights_mumbai.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}
		cout << "Enter flight code:";
		cin >> chkcode;

		i.open("flights_mumbai.txt", ios::app | ios::in);
		temp.open("temp2.txt", ios::out);

		i >> code >> departure >> arrival >> airline >> avail;
		while (!i.eof())
		{
			if (code == chkcode)
			{
				cout << "            FLIGHT CODE  DEPARTURE  ARRIVAL  AIRLINE  AVAILABILITY " << endl;
				cout << "            ";cin >> code2 >> departure2 >> arrival2 >> airline2 >> avail2;
				temp << code2 << " " << departure2 << " " << arrival2 << " " << airline2 << " " << avail2 << endl;
				cout << "   Record updated" << endl;
			}
			else
			{
				temp << code << " " << departure << " " << arrival << " " << airline << " " << avail << endl;
			}

			i >> code >> departure >> arrival >> airline >> avail;
		}

		i.close();
		temp.close();
		remove("flights_mumbai.txt");
		rename("temp2.txt", "flights_mumbai.txt");
		break;
	case 3:
		i.open("flights_chen.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}
		cout << "Enter flight code:";
		cin >> chkcode;

		i.open("flights_chen.txt", ios::app | ios::in);
		temp.open("temp2.txt", ios::out);

		i >> code >> departure >> arrival >> airline >> avail;
		while (!i.eof())
		{
			if (code == chkcode)
			{
				cout << "            FLIGHT CODE  DEPARTURE  ARRIVAL  AIRLINE  AVAILABILITY " << endl;
				cout << "            ";cin >> code2 >> departure2 >> arrival2 >> airline2 >> avail2;
				temp << code2 << " " << departure2 << " " << arrival2 << " " << airline2 << " " << avail2 << endl;
				cout << "   Record updated" << endl;
			}
			else
			{
				temp << code << " " << departure << " " << arrival << " " << airline << " " << avail << endl;
			}

			i >> code >> departure >> arrival >> airline >> avail;
		}

		i.close();
		temp.close();
		remove("flights_chen.txt");
		rename("temp2.txt", "flights_chen.txt");
		break;
	case 4:
		i.open("flights_gau.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}
		cout << "Enter flight code:";
		cin >> chkcode;

		i.open("flights_gau.txt", ios::app | ios::in);
		temp.open("temp2.txt", ios::out);

		i >> code >> departure >> arrival >> airline >> avail;
		while (!i.eof())
		{
			if (code == chkcode)
			{
				cout << "            FLIGHT CODE  DEPARTURE  ARRIVAL  AIRLINE  AVAILABILITY " << endl;
				cout << "            ";cin >> code2 >> departure2 >> arrival2 >> airline2 >> avail2;
				temp << code2 << " " << departure2 << " " << arrival2 << " " << airline2 << " " << avail2 << endl;
				cout << "   Record updated" << endl;
			}
			else
			{
				temp << code << " " << departure << " " << arrival << " " << airline << " " << avail << endl;
			}

			i >> code >> departure >> arrival >> airline >> avail;
		}

		i.close();
		temp.close();
		remove("flights_gau.txt");
		rename("temp2.txt", "flights_gau.txt");
		break;
	default:
		cout << "   WRONG ENTRY!! TRY AGAIN";
		goto b;
	}
}
int airlines::show()
{
	load();
	system("CLS");
	int ch;
	string line;
	ifstream i;
a:
	cout << "   ENTER YOUR CHOICE:" << endl;
	cout << "   ------------------" << endl;
	cout << "   ENTER 1 FOR DELHI:" << endl;
	cout << "   ENTER 2 FOR MUMBAI:" << endl;
	cout << "   ENTER 3 FOR CHENNAI:" << endl;
	cout << "   ENTER 4 FOR GUWAHATI:" << endl
		 << "   ";
	cin >> ch;

	switch (ch)
	{
	case 1:
		i.open("flights.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		break;
	case 2:
		i.open("flights_mumbai.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		break;
	case 3:
		i.open("flights_chen.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		break;
	case 4:
		i.open("flights_gau.txt", ios::in);
		if (i.is_open())
		{
			while (i.peek() != EOF)
			{
				getline(i, line);
				cout << "   " << line << endl;
			}
			i.close();
		}
		else
		{
			cout << "   Cant open the file" << endl;
		}

		break;
	default:
		cout << "   WRONG ENTRY!! TRY AGAIN";
		goto a;
	}
	return ch;
}
void airlines::search_passenger()
{
	load();
	system("CLS");
	int r_no;
	cout << "   PLEASE ENTER THE RESERVATION NUMBER HERE: ";
	cin >> r_no;
	node *cur = start;
	while (cur != NULL)
	{
		if (cur->reserve_num == r_no)
		{
			cout << " \tNAME : " << cur->fname << " " << cur->lname << endl;
			cout << " \tID : " << cur->ID << endl;
			cout << " \tPHONE NUMBER : " << cur->phone_num << endl;
			cout << " \tMENU : " << cur->menu << endl;
			cout << " \tCLASS : " << cur->sitting_class << endl;
			cout << " \tSEAT NUMBER : " << cur->seat_num << endl;
			cout << " \tRESERVATION NO. : " << cur->reserve_num << endl;
			cout << " \tTOTAL FARE : " << cur->fare << endl;
			flyhigh.check(cur->f_num, cur->f_code);
			return;
		}
		cur = cur->next;
	}
	cout << " SORRY!!! NOT FOUND \n\n";
}
void airlines::print_list()
{
	load();
	system("CLS");
	temp = start;
	if (temp == NULL)
		cout << "   End of lists" << endl;
	else
	{
		int cnt = 1;
		cout << "\tNUMBER\tNAME\t\tAADHAR\tPHONE NUMBER";
		cout << "\tCLASS\t\tSEAT NO.\tRESERVATION NO.\t FLIGHT CODE/NUM \t FARE \t MENU\n";
		while (temp != NULL)
		{
			cout << "\t" << cnt;
			cout << "\t" << temp->fname << " " << temp->lname;
			cout << "\t" << temp->ID;
			cout << "\t" << temp->phone_num;
			cout << "\t" << temp->sitting_class;
			cout << "\t" << temp->seat_num;
			cout << "\t\t" << temp->reserve_num;
			cout << "\t\t\t" << temp->f_code << " / " << temp->f_num;
			cout << "\t" << temp->fare;
			cout << "\t\t" << temp->menu << "\n";
			temp = temp->next;
			cnt++;
		}
		cout << "\n\n";
	}
}