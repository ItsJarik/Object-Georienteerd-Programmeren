#include <iostream>

using namespace std;

class Breuk
{
public:
    Breuk(int t, int n);
    void leesin();
    void drukaf();
    void verhoog(Breuk b1, Breuk b2);
    void vereenvoudig();

private:
    int teller;
    int noemer;
};

Breuk::Breuk(int t, int n)
{
    teller = t;
    noemer = n;
}

void Breuk::drukaf()
{
    cout << teller << "/" << noemer << endl;
}

void Breuk::verhoog(Breuk b1, Breuk b2)
{
    teller = (b1.teller * b2.noemer) + (b1.noemer * b2.teller);
    noemer = b1.noemer * b2.noemer;

    vereenvoudig();
}

void Breuk::vereenvoudig()
{
}

int main()
{
    Breuk b1(2, 4);
    Breuk b2(1, 3);
    Breuk b3(0,0);

    b3.verhoog(b1, b2);

    b3.drukaf();

    return 0;
}