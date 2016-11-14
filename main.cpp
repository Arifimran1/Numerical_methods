#include <iostream>
#include "bisection.h"
#include "gauss_seidel.h"
#include "secant.h"
#include "newton_polinomial.h"

#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>

using namespace std;


int e = 0, f = 0;

int wherex()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    COORD                      result;
    if (!GetConsoleScreenBufferInfo(
                GetStdHandle( STD_OUTPUT_HANDLE ),
                &csbi
            ))
        return -1;
    return result.X;
}

int wherey()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    COORD                      result;
    if (!GetConsoleScreenBufferInfo(
                GetStdHandle( STD_OUTPUT_HANDLE ),
                &csbi
            ))
        return -1;
    return result.Y;
}

void gotoXY()
{
    COORD coord;
    coord.X = e;
    coord.Y = f;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    f++;
}

void cls()
{
    system("cls");
}

void roots_of_equation()
{
    while (1)
    {
        cls();
        e = 20;
        f = 10;
        gotoXY();
        char ch;
        cout << "1. bisection method" << endl;
        gotoXY();
        cout << "2. secant method" << endl;
        gotoXY();
        cout << "0. back" << endl;
        gotoXY();
        cin >> ch;
        switch (ch)
        {
        case '0':

            return;
        case '1':
        {
            cls();
            bisection x ;
            x.work();
            cout << "press any key to continue..." << endl;
            getch();
            break;
        }
        case '2':
        {
            cls();
            secant x;
            x.work();
            cout << "press any key to continue..." << endl;
            getch();
            break;
        }
        default:
            gotoXY();
            cout << "Wrong entry!!" << endl;
            Sleep(500);

        }
    }
}
void solution_of_roots_of_eqution()
{

    while (1)
    {
        cls();
        e = 20;
        f = 10;
        gotoXY();
        char ch;
        cout << "1. gauss seidel method" << endl;
        gotoXY();
        cout << "0. back" << endl;
        gotoXY();
        cin >> ch;

        switch (ch)
        {
        case '0':
            return;
        case '1':
        {
            cls();
            gauss_seidel x;
            x.work();
            cout << "press any key to continue..." << endl;
            getch();
            break;
        }

        default:
            gotoXY();
            cout << "Wrong entry!!" << endl;
            Sleep(500);

        }
    }
}

void interpolation()
{
    while (1)
    {
        cls();
        e = 20;
        f = 10;
        gotoXY();
        char ch;
        cout << "1. newton's interpolating polynomial" << endl;
        gotoXY();
        cout << "0. back" << endl;
        gotoXY();
        cin >> ch;

        switch (ch)
        {
        case '0':
            return;
        case '1':
        {
            cls();
            newton_polinomial x;
            x.work();
            cout << "press any key to continue..." << endl;
            getch();
            break;
        }

        default:
            gotoXY();
            cout << "Wrong entry!!" << endl;
            Sleep(500);

        }
    }
}


int main()
{
    char ch;



    while(1)
    {
        cls();
        e = 20;
        f = 10;
        gotoXY();
        cout << "please enter the number: " << endl;
        gotoXY();
        cout << "1. Roots of equation" << endl;
        gotoXY();
        cout << "2. Solution of set of equation" << endl;
        gotoXY();
        cout << "3. Interpolation" << endl;
        gotoXY();
        cout << "0. Exit" << endl;
        gotoXY();

        cin >> ch;

        switch (ch)
        {
        case '0':
            cls();
            gotoXY();
            cout << "Thanks for using this software. . ." << endl;
            gotoXY();
            cout << "Creator: Imran Hossain Arif " << endl;
            gotoXY();
            cout << "Student ID: 140231" << endl;
            gotoXY();
            cout << "Under the supervision of: " << endl;
            gotoXY();
            cout <<  "Professor Dr. Rameswar Debnath" << endl;
            gotoXY();
            cout << "Press any key for terminate..." << endl;



            getch();
            return 0;
        case '1':
            cls();
            roots_of_equation();
            break;
        case '2':
            cls();
            solution_of_roots_of_eqution();
            break;
        case '3':
            cls();
            interpolation();
            break;



        default:

            gotoXY();
            cout << "Wrong entry!!" << endl;
            Sleep(500);


        }


    }





    return 0;
}
