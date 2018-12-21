// 1lab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream> 
#include <cmath> 

using namespace std;

int main() {
	double a, x, y, z1, z2;
	cin >> a;
	z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
	z2 = 4 * cos(a / 2)*cos(5 * 0.5*a)*cos(4 * a);
	cout << "z1=cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a)=" << z1 << endl;
	cout << "z2=4*cos(a/2)*cos(5*0.5*a)*cos(4*a)=" << z2 << endl;
	if (z1 > z2)cout << "z1>z2";
	if (z2 > z1)cout << "z2>z1";
	if (z1 == z2)cout << "z1=z2";
	system("pause");
	return 0;
}
