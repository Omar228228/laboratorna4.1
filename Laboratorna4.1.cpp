// Lab_04_1.cpp
// Виконав студент Ткачишин Юрій
// Лабораторна робота № 4.1
// Цикли.
// Варіант 10.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double n;
	double k;
	double p;

	cout << "N = "; cin >> n;
	cout << "K = "; cin >> k;

	double i;

	//1)

	p = 1;
	i = n;
	while (i <= 16) {
		p *= ((i * n) / ((pow(i, 2) + pow(n, 2))));
		i++;
	}
	cout << "P.1: " << p << endl;

	//2)

	p = 1;
	i = n;
	do {
		p *= ((i * n) / ((pow(i, 2) + pow(n, 2))));
		i++;
	} while (i <= 16);
	cout << "P.2: " << p << endl;

	//3)

	p = 1;
	for (i = n; i <= 16; i++) {
		p *= ((i * n) / ((pow(i, 2) + pow(n, 2))));
	}
	cout << "P.3: " << p << endl;

	//4)

	p = 1;
	for (i = 16; i >= n; i--) {
		p *= ((i * n) / ((pow(i, 2) + pow(n, 2))));
	}
	cout << "P.4: " << p << endl;

	cin.get();
	return 0;
}