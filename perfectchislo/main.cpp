#include<iostream>
using namespace std;


void main() {

	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int i = 2; i < n; i++)
	{
		bool perfect = true;
		int sum = 0;
		for (int j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)sum += j;
		}
		if (i == sum) cout << i << "\t";
	}
		
}