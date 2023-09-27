#include <iostream>
#define SIZE 100
#define SIZEB 50
#include <windows.h>
#include <cstdlib>

using namespace std;

void gotoxy(int x, int y)
{
	COORD d;
	d.X = x;
	d.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), d);
}
void load()
{
	char a = 219;
	gotoxy(36, 14);
	cout << "----------------LOADING---------------" << endl;
	gotoxy(30, 16);
	for (int r = 1; r <= 50; r++)
	{
		for (int q = 0; q <= 10000000; q++)
			;
		cout << a;
	}
}
class airlines
{
public:
	//FOR USER
	airlines();
	//void main_menu();
	void make_reservation();
	void cancel_reservation();
	void change_reservation();
	void print_ticket();
	void check_user(int,string);
	int show_user();
	//FOR ADMIN
	void search_passenger();
	void print_list();
	void update();
	void append();
	void del();
	void check(int,string);
	int show();

private:
	struct node
	{
		string fname, lname, ID, phone_num, menu,sitting_class,f_code;
		int reserve_num, seat_num,f_num,fare;
		node *next;
	};
	node *start;
	node *temp, *temp2;
} flyhigh;
