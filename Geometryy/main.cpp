#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;


//#define GEOM1
//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2
//#define TRIANGLE3
//#define TRIANGLE4
//#define ROMB1
//#define PLUSMINUS
//#define CHESS1
//#define CHESS2
//#define TRIANGLEV
#define PASCAL
  


void main()
{
    setlocale(LC_ALL, "");
    //setlocale(0, "C"); //<<<------ �������� ��� ���������� ���� CHESS1
#ifdef GEOM1
    int base, height;


    cout << "������� ������: ";
    cin >> base;

    cout << "������� ������: ";
    cin >> height;



    if (base <= 0 || height <= 0)
    {
        cout << "������������ �������� ������ ��� ������." << endl;
    }

    for (int i = 1; i <= height; ++i)
    {
        for (int j = 1; j <= (int)(i * (float)base / height); ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
#endif GEOM1

#ifdef SQUARE
    int n;
    cout << "������� ������ ������: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
#endif SQUARE

#ifdef TRIANGLE1
    int n;
    cout << "������� ������ ������: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
#endif TRIANGLE1

#ifdef TRIANGLE2
    int n;
    cout << "������� ������ ������: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
#endif TRIANGLE2

#ifdef TRIANGLE3
    int n;
    cout << "������� ������ ������: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)cout << "  ";
        for (int j = i; j < n; j++)cout << "* ";
        cout << endl;
    }
#endif TRIANGLE3

#ifdef TRIANGLE4
    int n;
    cout << "������� ������ ������: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)cout << "  ";
        for (int j = 0; j <= i; j++)cout << "* ";
        cout << endl;
    }
#endif TRIANGLE4

#ifdef ROMB1
    int i, n;
    cout << "������� ������ ������:  ";
    cin >> n;
    for (i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j) cout << " ";
        cout << "/";
        for (int j = 0; j < i * 2; ++j) cout << " ";
        cout << "\\" << endl;
    }
    for (--i; i >= 0; --i) {
        for (int j = 0; j < n - i - 1; ++j) cout << " ";
        cout << "\\";
        for (int j = 0; j < i * 2; ++j) cout << " ";
        cout << "/" << endl;
    }
#endif ROMB1

#ifdef PLUSMINUS
    int n;
    cout << "������� ������ ������: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "+";
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }
#endif PLUSMINUS

#ifdef CHESS1
    int n;

    cout << "chess field: ";
    cin >> n;

    cout << (char)218;
    for (int i = 0; i < n; ++i)
    {
        cout << (char)196;
        cout << (char)196;
    }
    cout << (char)191 << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << (char)179;
        for (int j = 0; j < n; ++j)
        {
            if ((i + j) % 2 == 0)
            {
                cout << (char)219;
                cout << (char)219;
            }
            else {
                cout << "  ";
            }
        }
        cout << (char)179 << endl;
    }


    cout << (char)192;
    for (int i = 0; i < n; ++i)
    {
        cout << (char)196;
        cout << (char)196;
    }
    cout << (char)217 << endl;
#endif CHESS1

#ifdef CHESS2

        int n;

        cout << "chess: ";
        cin >> n;

        for (int i = 0; i < 10 * n; ++i) 
        { 
            for (int j = 0; j < 8 * n; ++j) 
            {  
                bool WhiteSquare = ((i / n) % 2 == 0 && (j / n) % 2 == 0) ||
                    ((i / n) % 2 != 0 && (j / n) % 2 != 0);

                
                if (WhiteSquare) 
                {
                    cout << "**"; // ������ 2 ���������, ������ � ����� �������� �������� ���������.
                }
                else 
                {
                    cout << "  ";
                }
            }

            cout << endl; 
        }
#endif CHESS2

#ifdef TRIANGLEV
        int n;
        cout << "������� ������ ������:  ";
        cin >> n;
        for (int i = 0; i < n * 2; i++)
        {
            for (int j = 0; j < n * 2; j++)
            {
                if (i == (j + n) || j == (i + n))cout << "\\";
                else if (i == (n - j - 1) || (i - n == (n * 2 - j - 1)))cout << "/";
                //else if (i == (n - j -1) || i == (n * 3 - j - 1)) cout << "/";
                else cout << " ";
            }
            cout << endl;
        }
#endif TRIANGLEV 

#ifdef PASCAL
        int n, i, j, c, k, mesto;
        cout << "������� ������ �����������: " << endl;
        cin >> n;
        mesto = n;
        for (i = 0; i < n; i++) 
        {
            c = 1;
            for (k = mesto; k >= 0; k--) cout << " ";
            mesto--;
            for (j = 0; j <= i; j++) 
            {
                cout << c << " ";
                c = (c * (i - j) / (j + 1));
            }
            cout << "\n";
        }
#endif PASCAL
}