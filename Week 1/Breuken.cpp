#include <iostream>

using namespace std;

class Breuk
{
public:
    void leesin();
    void drukaf();
    void verhoog(Breuk Breuk);

private:
    int teller;
    int noemer;
};

void Breuk::drukaf()
{
    cout << teller << "/" << noemer << endl;
}

void Breuk::leesin()
{
    cin >> teller;
    cin >> noemer;
}

void Breuk::verhoog(Breuk breuk)
{
    teller = teller * breuk.noemer + noemer * breuk.teller;
    noemer = noemer * teller;
}

main()
{
    Breuk b;
    b.leesin();
    Breuk b2;
    b2.leesin();
    b.verhoog(b2);
    b.drukaf();
    return 0;
}