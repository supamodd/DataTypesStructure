#include<iostream>
using namespace std;
<<<<<<< HEAD
using std::cin;
using std::cout;
using std::endl;
=======
>>>>>>> 756a719a4f4af8c8834d8f7ff4752e499d8720c1


//#define GEOM1
//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2
<<<<<<< HEAD
//#define TRIANGLE3
//#define TRIANGLE4
//#define ROMB1
//#define PLUSMINUS
//#define CHESS1
//#define CHESS2
//#define TRIANGLEV
#define PASCAL

=======
>>>>>>> 756a719a4f4af8c8834d8f7ff4752e499d8720c1


void main()
{
<<<<<<< HEAD
    setlocale(LC_ALL, "");
    //setlocale(0, "C"); //<<<------ ¬ Ћё„»“№ ƒЋя Ўј’ћј“Ќќ√ќ ѕќЋя CHESS1
#ifdef GEOM1
    int base, height;

=======
	setlocale(LC_ALL, "");
#ifdef GEOM1
    int base, height;
    
>>>>>>> 756a719a4f4af8c8834d8f7ff4752e499d8720c1

    cout << "¬ведите ширину: ";
    cin >> base;

    cout << "¬ведите высоту: ";
    cin >> height;


<<<<<<< HEAD

    if (base <= 0 || height <= 0)
=======
    
    if (base <= 0 || height <= 0) 
>>>>>>> 756a719a4f4af8c8834d8f7ff4752e499d8720c1
    {
        cout << "Ќекорректные значени€ ширины или высоты." << endl;
    }

<<<<<<< HEAD
    for (int i = 1; i <= height; ++i)
    {
        for (int j = 1; j <= (int)(i * (float)base / height); ++j)
        {
=======
    for (int i = 1; i <= height; ++i) 
    {
        for (int j = 1; j <= (int)(i * (float)base / height); ++j) 
        { 
>>>>>>> 756a719a4f4af8c8834d8f7ff4752e499d8720c1
            cout << "*";
        }
        cout << endl;
    }
#endif GEOM1

#ifdef SQUARE
    int n;
    cout << "¬ведите размер фигуры: "; cin >> n;
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
<<<<<<< HEAD

=======
>>>>>>> 756a719a4f4af8c8834d8f7ff4752e499d8720c1
#ifdef TRIANGLE1
    int n;
    cout << "¬ведите размер фигуры: "; cin >> n;
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

<<<<<<< HEAD
#ifdef TRIANGLE2
=======
 #ifdef TRIANGLE2
>>>>>>> 756a719a4f4af8c8834d8f7ff4752e499d8720c1
    int n;
    cout << "¬ведите размер фигуры: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
<<<<<<< HEAD
#endif TRIANGLE2

#ifdef TRIANGLE3
=======
 #endif TRIANGLE2

>>>>>>> 756a719a4f4af8c8834d8f7ff4752e499d8720c1
    int n;
    cout << "¬ведите размер фигуры: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)cout << "  ";
        for (int j = i; j < n; j++)cout << "* ";
        cout << endl;
    }
<<<<<<< HEAD
#endif TRIANGLE3

#ifdef TRIANGLE4
    int n;
    cout << "¬ведите размер фигуры: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)cout << "  ";
        for (int j = 0; j <= i; j++)cout << "* ";
        cout << endl;
    }
#endif TRIANGLE4

#ifdef ROMB1
    int i, n;
    cout << "¬ведите размер фигуры:  ";
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
    cout << "¬ведите размер фигуры: ";
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
                    cout << "**"; // —делал 2 звездочки, потому с одной зауженно выгл€дит визуально.
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
        cout << "¬ведите размер фигуры:  ";
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
        cout << "¬ведите размер треугольник: " << endl;
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
=======
>>>>>>> 756a719a4f4af8c8834d8f7ff4752e499d8720c1
}