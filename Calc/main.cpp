#include <iostream>
using namespace std;

//#define CALC_IF_ELSE
#define CALC_SWITCH

void main() 
{
	setlocale(LC_ALL, "");
	double a, b; // числа вводимые пользователем.
	char s;		 // Sing - знак операции.
	cout << "¬ведите простое арифметическое выражение:";
	cin >> a >> s >> b;
#ifdef CALC_IF_ELSE
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else
	{
		cout << "Error: No opreation" << endl;
	}
#endif // CALC_IF_ELSE
#ifdef CALC_SWITCH
	switch (s)
	{
	case '+': cout << a << "+" << b << "=" << a + b << endl; break;
	case '-': cout << a << "-" << b << "=" << a - b << endl; break;
	case '*': cout << a << "*" << b << "=" << a * b << endl; break;
	case '/': cout << a << "/" << b << "=" << a / b << endl; break;
	default: cout << "Error: no operation" << endl;
	}
#endif // CALC_SWITCH
}