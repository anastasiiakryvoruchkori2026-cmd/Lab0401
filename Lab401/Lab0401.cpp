// Lab0401.cpp
// Криворучко Анастасія
// Лабораторна робота №4.1
// Цикли
// Варіант 16

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N, j;
	double S;

	cout << "N = "; cin >> N;

	// While

	S = 0;
	j = 2;
	while (j <= N) {
		S += 1. * j * (N - j) / (j * j + pow((N - j), 2));
		j++;
	}
	cout << S << endl;

	// do.. while

	S = 0;
	j = 2;
	do {
		S += 1. * j * (N - j) / (j * j + (N - j) * (N - j));
		j++;
	} while (j <= N);
	cout << S << endl;

	//for i++
	S = 0;
	for (j = 2; j <= N; j++)
	{
		S += 1. * j * (N - j) / (j * j + (N - j) * (N - j));
	}
	cout << S << endl;



	// for i--
	S = 0;
	for (j = N; j >= 2; j--)
	{
		S += 1. * j * (N - j) / (j * j + (N - j) * (N - j));
	}
	cout << S << endl;

	return 0;


}