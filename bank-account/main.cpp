#include <iostream>
#include <cstdlib>

using namespace std;

class Rachunek
{
private:
    string imie_nazwisko;
    string numer_rachunku;
    float saldo;
public:
    Rachunek();
    Rachunek(string, string, float);
    void wyswietl_dane();
    void wplac(float);
    void wyplac(float);
};

Rachunek::Rachunek()
{
    imie_nazwisko = "Jan Kowalski";
    numer_rachunku = "000";
    saldo = 0.0;
}

Rachunek::Rachunek(string i_n, string n_r, float s)
{
    imie_nazwisko = i_n;
    numer_rachunku = n_r;
    saldo = s;
}

void Rachunek::wyswietl_dane()
{
    cout << "\nImie i nazwisko: " << imie_nazwisko << endl;
    cout << "Numer rachunku: " << numer_rachunku << endl;
    cout << "Saldo konta: " << saldo << endl;
}

void Rachunek::wplac(float x)
{
    saldo += x;
}

void Rachunek::wyplac(float x)
{
    saldo -= x;
}

int main()
{
    Rachunek rachunek;
    rachunek.wyswietl_dane();
    rachunek.wplac(500);
    rachunek.wyswietl_dane();
    rachunek.wyplac(300);
    rachunek.wyswietl_dane();
    return 0;
}
