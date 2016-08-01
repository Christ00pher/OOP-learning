#ifndef STOCKOO_H_
#define STOCKOO_H_

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot();
public:
    Stock();
    ~Stock();
    Stock(const std::string & co, int n = 0, double pr = 0.0);
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;
};
#endif // STOCKOO_H_
