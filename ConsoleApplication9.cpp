// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream> 
#include<cmath> 
using namespace std;
float factorial(int n);

int main() {
	float dx, eps, f1 = 100, f = 0, A, B;
	int i = 0, k=1;
	cout << "enter A and B ";
	cin >> A >> B;
	cout << "enter dx"<<endl;
	cin >> dx;
	cout << "enter eps ";
	cin >> eps;
	cout << "+--------+---------------+-+" << endl;
	cout << "|" << "X"<< "\t |" << "f(x)"<< "\t " << "\t |N" << "|" << endl;
	cout << "+--------+---------------+-+" << endl;
	while (A <= (B+dx)) {
		while (f1 >= eps) {
				f1 = pow(A, (i)) / factorial(i);
				if (i % 3 == 0 && i%3==2) {
					f = f - f1;
				}
				else {
					f = f + f1;
				}
				i+=2;
				k++;
			}
		cout << "|" << A << "\t |" << f << "\t |" << k << "|" << endl;
		cout << "+--------+---------------+-+" << endl;
		i = 1;
		f = 0;
		A += dx;
		f1 = 1000;
	}
	system("pause");
	return 0;
}
float factorial(int n) {
	float res = 1;
	for (int i = 1; i <= n; i++) {
		res = res * i;
	}

	return res;
}
