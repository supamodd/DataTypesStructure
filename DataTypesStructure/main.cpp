#include<iostream>
#include <conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define IF_ELSE
//#define WHILE_1
//#define WHILE_2
#define CALC_2
//#define CALC_3
//#define SHOOTER_1

int main()
{
	setlocale(LC_ALL, "Rus");

#ifdef IF_ELSE
	int temperature;
	cout << "������� t �������: ";
	cin >> temperature;
	if (temperature > 70)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 20)
	{
		cout << "�� ����� �����" << endl;
	}
	else if (temperature > 10)
	{
		cout << "���������" << endl;
	}
	else if (temperature > 0)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -30)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
#endif IF_ELSE

#ifdef WHILE_1
	int i = 0; //������� ����� - ��� ����������, ������� ������� ������� ��� ����������, ��� ����� �������� ����.
	int n;	   // ���������� ��������. �������� - ��� ����������� ���������� ���� �����.
			   //���� ����� - ��� ���, ������� ����� ���������.
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << "Hello" << endl;
		i++;
	}
#endif WHILE_1

#ifdef WHILE_2
	int n;
	cout << "������� ���������� ��������:"; cin >> n;
	while (n)
	{
		cout << --n << "\t";
			//n--;
	}
	cout << endl;
#endif WHILE_2

#ifdef SHOOTER_1
	char key;
	cout << "������� WASD, Space, Enter ��� Escape..." << endl;

	while (true) {
		key = _getch(); // ����� �� ����� enter ��� ����� ������

		switch (key) {
		case 'w':
		case 'W':
			cout << "������" << endl;
			break;
		case 's':
		case 'S':
			cout << "�����" << endl;
			break;
		case 'a':
		case 'A':
			cout << "�����" << endl;
			break;
		case 'd':
		case 'D':
			cout << "������" << endl;
			break;
		case ' ':
			cout << "������" << endl;
			break;
		case '\r': // ��� ��� enter
			cout << "�����" << endl;
			break;
		case '\x1b': // ��� ��� escape
			cout << "�����" << endl;
			return 0; // ��������� �����
		default:
			cout << "����������� �������" << endl;
			break;
		}
	}

	return 0; // ����� ������� �� ���������, ���� while(true)
#endif //SHOOTER_1

#ifdef CALC_2
	double a, b, c; // ����� �������� �������������.
	char s; // Sing - ���� ��������.
	cout << "������� ������� �������������� ���������: ";
	cin >> a >> s >> b;

	switch (s)
	{
	case '+': c = a + b;
		cout << c; break;
	case '-':c = a - b;
		cout << c; break;
	case '*':c = a * b;
		cout << c; break;
	case '/':c = a / b;
		cout << c; break;
	default: cout << "�� ���������� ��������" << endl;
	}
	while (true)
	{
		cin >> s >> b;
		switch (s) {

		case '+':c = c + b;
			cout << c; break;
		case '-':c = c - b;
			cout << c; break;
		case '*':c = c * b;
			cout << c; break;
		case '/':c = c / b;
			cout << c; break;
		default: cout << "�� ���������� ��������" << endl << c;
		}
		{

		}
	}
#endif // CALC_2
}
double a, b, c; // ����� �������� �������������.
char s; // Sing - ���� ��������.
#ifdef CALC_3
cout << "������� ������� �������������� ���������: ";
cin >> a;
do
{
	cin >> s >> b;
	switch (s)
	{
	case '+': a += b break;
	case '-': a -= b break;
	case '*': a *= b break;
	case '/': a /= b break;
	default: cout << "�� ���������� ��������" << endl;
	}
	//cout << a << s << b << " = " << a << endl;
	cout << " = ";
	cout << a;
} while (true);
#endif // CALC_3



/*
���������� ���� bool � ��������� ���� bool ���������������� ��� ������, �� ������� ����������
����� �������� - �� ��� ���.










*/