#pragma once
#include <iostream>

using namespace std;

void zad4()
{
	string s;
	int n = 0;
	cout << "Podaj stringa do konkateknacji: ";
	cin >> s;

	cout << "Ile razy ma nastapic konkateknacja?";
	cin >> n;

	if (n < 0)
	{
		cout << "Niepoprawna wartosc dla n!";
		return;
	}

	string out;

	for (int x = 0; x < n; x++)
		out += s;

	cout << "\nString po konkateknacji n razy: " << out;
}
