#include <iostream>
#include "stocks00.hpp"

void Stock::acquire(const std::string & co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Liczba udzialow nie moze byc ujemna; "
                    << "ustalam liczbe udzialo  " << company << "na 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

//buy actions
void Stock::buy(long num, double price)
{
    if (num < 0)
        std::cout << "Liczba nabywanych udzialo nie moze byc ujemna. "
                    << "Transakcja przerana.\n";
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
        cout << "Liczba sprzedawanych udzialo nie moze byc ujemna. "
                << "Transakcja przerana.\n";
    else if (num > shares)
        cout << "Nie mozesz sprzedawac wiecej udzialow niz posiadasz! "
                << "Transakcja przerwana.\n";
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Spolka: " << company
            << " Liczba udzialow: " << shares << "\n"
            << " Cena udzialu: " << share_val << "zl";
    cout.precision(2);
    cout << " Laczna wartosc udzialow: " << total_val << "zl\n";
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

inline void Stock::set_tot()
{
    total_val = shares * share_val;
}

Stock::Stock(const std::string & co, int n, double pr)
{
    company = co;
    std::cout << "Wywolano konstruktor z argumentem " << co << "\n";

    if (n < 0)
    {
        std::cerr << "Liczba udzialow nie moze byc ujemna;"
                    << "ustalam liczbe udzialow w " << company << " na 0.\n";
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::Stock()
{
    std::cout << "Wywolano konstruktor domyslny!\n";
    company = "bez nazwy";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::~Stock()
{
    std::cout << "Do widzenia, " << company << "!\n";
}

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}
