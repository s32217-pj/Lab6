#pragma once
#include <iostream>

using namespace std;

void zad1()
{
    int n = 0;
    cout << "Podaj n: ";
    cin >> n;

    cout << "Liczb naturalnych mniejszych od " << n << " podzielnych przez 5, ale nie przez 3 jest: "
        << (n / 5) - (n / 15);
}
