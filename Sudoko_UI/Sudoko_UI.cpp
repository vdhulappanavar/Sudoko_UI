// Sudoko_UI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<windows.h>

void gotoxy(int x, int y);
void GotoXY(int x, int y);

int a;

struct pos
{
	int x;
	int y;
}b;
int _tmain(int argc, _TCHAR* argv[])
{
	printf("\n");
	GotoXY(10,10);
	printf("%c",179);
	GotoXY(10,10);
	printf("_");
	/*printf("%c",179);
	printf("\n");
	printf("%c",179);*/
	getch();
	return 0;
}

void gotoxy(int x, int y)
{

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
void GotoXY(int x, int y)
{
    HANDLE a;
    COORD b;
    fflush(stdout);
    b.X = x;
    b.Y = y;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a,b);
}

void Print1stPage()
{
	GotoXY(20, 10);
	printf("************************************\n");
	GotoXY(25, 11);
	printf("WELCOME TO THE SUDOKU GAME");
	GotoXY(20, 12);
	printf("************************************\n");

}
