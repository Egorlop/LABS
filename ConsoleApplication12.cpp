// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int k = 0, n, j = 0, maxm = -10000; int max = -10000; int b;
	int *arr; int *brr; int *crr; int S = 0;
	cout << "Enter n: " << endl;
	cin >> n;
	arr = new int[n]; brr = new int[n]; crr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > maxm) {
			maxm = arr[i];
		}
		else if (-1 * arr[i] > maxm) {
			maxm = -1 * arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	if (max == maxm)
		cout << "Biggest| |: " << maxm << endl;
	else cout << -1 * maxm << endl;


	int j1 = -1, j2 = -1;
	for (int i = 0; i < n; i++) {
		if (j2 == -1 && arr[i] > 0) {
			if (j1 == -1)
				j1 = i;
			else {
				j2 = i; break;
			}
		}
	}
	for (; j1 < j2-1; j1++)
		S = S + arr[j1 + 1];
	cout << S << endl;

	for (int i = 0; i < n; i++)
		crr[i] = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			crr[j] = arr[i];
			j++;
		}
	}
	cout << "New Array: ";
	for (int i = 0; i < n; i++)
		cout << crr[i] << " ";

	cin.get();
	cin.get();
	return 0;
}
// 1 -6 -1 2
// 2 3 4 5
// 1 2 0 0