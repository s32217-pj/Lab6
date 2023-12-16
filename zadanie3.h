#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Student
{
    string imie, nazwisko;
    long long indeks = 0;

    friend ostream& operator<<(ostream& os, const Student& s)
    {
        if (!os)
            return os;

        os << "Imie: " << s.imie << "\nNazwisko: " << s.nazwisko << "\nIndeks: " << s.indeks << "\n";

        return os;
    }
};

vector<Student> zad3_data =
{
    Student{"Jan", "Kowalenko", 12432423},
    Student{"John", "Nash", 666666666},
    Student{"Mariusz", "Pudzianowski", 2137234}
};

void zad3()
{
    cout << "wektor przed sortowaniem: \n";
    for (auto& s : zad3_data)
        cout << s;

    cout << "\nwektor po sortowaniu po indeksie: \n";
    sort(zad3_data.begin(), zad3_data.end(), [](const Student& s1, const Student& s2) {return s1.indeks > s2.indeks; });

    for (auto& s : zad3_data)
        cout << s;
}
