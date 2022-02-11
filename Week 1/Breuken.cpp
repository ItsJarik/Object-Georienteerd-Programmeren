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
    cout << "Geef een Teller?" << endl;
    cin >> teller;
    cout << "Geef een Noemer?" << endl;
    cin >> noemer;
}

void Breuk::verhoog(Breuk breuk)
{
    teller = (teller * breuk.noemer) + (noemer * breuk.teller);
    noemer = noemer * teller;
}

int main()
{
    Breuk b1;
    Breuk b2;

    b1.leesin();
    b2.leesin();

    b1.verhoog(b2);
    b1.drukaf();

    return 0;
}