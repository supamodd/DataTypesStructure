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
	cout << "Введите t воздуха: ";
	cin >> temperature;
	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 20)
	{
		cout << "На улице тепло" << endl;
	}
	else if (temperature > 10)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Дубак" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -30)
	{
		cout << "Капец" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
#endif IF_ELSE

#ifdef WHILE_1
	int i = 0; //Счетчик цикла - это переменная, которая считает сколько раз выполнился, или будет выполнен цикл.
	int n;	   // Количество итераций. Итерация - это однократное выполнение тела цикла.
			   //Тело цикла - это код, который нужно зациклить.
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << "Hello" << endl;
		i++;
	}
#endif WHILE_1

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций:"; cin >> n;
	while (n)
	{
		cout << --n << "\t";
			//n--;
	}
	cout << endl;
#endif WHILE_2

#ifdef SHOOTER_1
	char key;
	cout << "Нажмите WASD, Space, Enter или Escape..." << endl;

	while (true) {
		key = _getch(); // чтобы не ждать enter при вводе кнопки

		switch (key) {
		case 'w':
		case 'W':
			cout << "Вперед" << endl;
			break;
		case 's':
		case 'S':
			cout << "Назад" << endl;
			break;
		case 'a':
		case 'A':
			cout << "Влево" << endl;
			break;
		case 'd':
		case 'D':
			cout << "Вправо" << endl;
			break;
		case ' ':
			cout << "Прыжок" << endl;
			break;
		case '\r': // код для enter
			cout << "Огонь" << endl;
			break;
		case '\x1b': // код для escape
			cout << "Выход" << endl;
			return 0; // закончить прогу
		default:
			cout << "Неизвестная клавиша" << endl;
			break;
		}
	}

	return 0; // Этого никогда не достигнет, цикл while(true)
#endif //SHOOTER_1

#ifdef CALC_2
	double a, b, c; // числа вводимые пользователем.
	char s; // Sing - знак операции.
	cout << "Введите простое арифметическое выражение: ";
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
	default: cout << "Не правильный оператор" << endl;
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
		default: cout << "Не правильный оператор" << endl << c;
		}
		{

		}
	}
#endif // CALC_2
}
double a, b, c; // числа вводимые пользователем.
char s; // Sing - знак операции.
#ifdef CALC_3
cout << "Введите простое арифметическое выражение: ";
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
	default: cout << "Не правильный оператор" << endl;
	}
	//cout << a << s << b << " = " << a << endl;
	cout << " = ";
	cout << a;
} while (true);
#endif // CALC_3



/*
Переменные типа bool и выражения типа bool интерпретируются как вопрос, на который однозначно
можно ответить - да или нет.










*/