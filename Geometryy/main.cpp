#include<iostream>
using namespace std;


//#define GEOM1
//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2


void main()
{
	setlocale(LC_ALL, "");
#ifdef GEOM1
    int base, height;
    

    cout << "¬ведите ширину: ";
    cin >> base;

    cout << "¬ведите высоту: ";
    cin >> height;


    
    if (base <= 0 || height <= 0) 
    {
        cout << "Ќекорректные значени€ ширины или высоты." << endl;
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

 #ifdef TRIANGLE2
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
 #endif TRIANGLE2

    int n;
    cout << "¬ведите размер фигуры: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)cout << "  ";
        for (int j = i; j < n; j++)cout << "* ";
        cout << endl;
    }
}