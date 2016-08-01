#include "stocks00.hpp"
#include <iostream>

using namespace std;

const int STKS = 4;
int main()
{
    //utworz tablice zainicjalizowanych obiektow
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("BurakPOL", 200, 2.0),
        Stock("GruzPOL", 130, 3.25),
        Stock("FutroPOL", 60, 6.5)
    };

    std::cout << "Portfel inwestycyjny:\n";
    int st;
    for (st = 0; st < STKS; st++)
        stocks[st].show();

    //ustawianie wskaznika na pierwszy element
    const Stock * top = &stocks[0];
    for (st = 0; st < STKS; st++)
        top = &top->topval(stocks[st]);

    //top wskazuje do najbardziej wartosciowych udzialow w portfelu
    std::cout << "\nNajbardziej wartosciowy pakiet:\n";
    top->show();
    return 0;
}



/*int main()
{
    {
    using std::cout;
    using std::ios_base;
    const Stock land = Stock("ARR");
    land.show(); // void show() const

    cout << "Tworzenie nowych obiektow przy uzyciu kontruktorow\n";
    Stock stock1("NanoSmart", 20, 12.50);
    stock1.show();
    Stock stock2 = Stock("BurakPOL", 2, 2.0);
    stock2.show();

    cout << "Przypisanie stock1 do stock2:\n";
    stock2 = stock1;
    cout << "Wypis ze stock1 i stock2:\n";
    stock1.show();
    stock2.show();

    cout << "Wyzerowanie obiektu kontruktorem\n";
    stock1 = Stock("FutroPOL", 10, 50.0);
    cout << "Nowa wersja stock1:\n";
    stock1.show();
    cout << "Gotowe\n";
    return 0;
    }
}*/
