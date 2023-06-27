#include"Nag³ówek.h"

int main()
{
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    klasa xyz(a), pqr(b), c;
    cout << endl;

    c = !xyz;
    cout << "Suma pierwszej liczby i 6: " << c << endl;
    cout << endl;

    c = operator&(xyz);
    cout << "Roznica pierwszej liczby i 6: " << c << endl;
    cout << endl;

    c = xyz + pqr;
    cout << "Suma pierwszej i drugiej liczby: " << c << endl;
    cout << endl;
    
    c = operator-(xyz, pqr);
    cout << "Roznica pierwszej i drugiej liczby: " << c << endl;
}

