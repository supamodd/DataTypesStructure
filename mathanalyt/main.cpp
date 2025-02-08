#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	int n;
	int i;
	int j;
	cout << "¬ведите число: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
	true;
}