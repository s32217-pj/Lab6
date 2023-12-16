#pragma once
#include <iostream>

using namespace std;

struct Uczen
{
    string imie;
    int o_informatyka = 0, o_matematyka = 0, o_biologia = 0, o_jpolski = 0;
};


void zad2()
{
    const int ilosc_uczniow = 6;
    Uczen uczniowie[ilosc_uczniow];

    cout << "Wprowadz uczniow: \n";

    for (int x = 0; x < ilosc_uczniow; x++)
    {
        cout << "Uczen[" << x + 1 << "]\n"
            << "Imie: ";
        cin >> uczniowie[x].imie;

        cout << "Uczen[" << x + 1 << "]\n"
            << "Ocena z informatyki: ";
        cin >> uczniowie[x].o_informatyka;

        cout << "Uczen[" << x + 1 << "]\n"
            << "Ocena z matematyki: ";
        cin >> uczniowie[x].o_matematyka;

        cout << "Uczen[" << x + 1 << "]\n"
            << "Ocena z biologii: ";
        cin >> uczniowie[x].o_biologia;

        cout << "Uczen[" << x + 1 << "]\n"
            << "Ocena z jezyka polskiego: ";
        cin >> uczniowie[x].o_jpolski;
    }


    while (true)
    {
        int uczen = -1;
        int przedmiot = -1;

        cout << "Wybierz ucznia, ktorego oceny chcesz sprawdzic: ";
        cin >> uczen;

        if (uczen< 0 || uczen > ilosc_uczniow)
        {
            cout << "Taki uczen nie istnieje!\n\n";
            break;
        }

        cout << "Wpisz numer przedmiotu, z ktorego ocene chcesz poznac: \n"
            << "1. Informatyka\n"
            << "2. Matematyka\n"
            << "3. Biologia\n"
            << "4. Jezyk Polski\n";
        cin >> przedmiot;

        if (przedmiot < 0 || przedmiot >4)
        {
            cout << "Taki przedmiot nie istnieje!";
            break;
        }


        cout << "Imie: " << uczniowie[uczen].imie << "\n";

        switch (przedmiot)
        {
        case 1:
            cout << "Informatyka: " << uczniowie[uczen].o_informatyka;
            break;
        case 2:
            cout << "Matematyka: " << uczniowie[uczen].o_matematyka;
            break;
        case 3:
            cout << "Biologia: " << uczniowie[uczen].o_biologia;
            break;
        case 4:
            cout << "Jezyk Polski: " << uczniowie[uczen].o_jpolski;
            break;
        default:
            break;
        }

        cout << "\n\n";

    }

}
