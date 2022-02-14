#include <iostream>

using namespace std;

// Struct gedeelte
/*
typedef struct
{
    int teller;
    int noemer;
} Breuk;

void verdubbel(Breuk *p)
{
    if ((p->noemer % 2) == 0)
    {
        p->noemer /= 2;
    }
    else
    {
        p->teller *= 2;
    }
}

int main()
{
    Breuk b;

    b.teller = 3;
    b.noemer = 4;

    verdubbel(&b);

    cout << b.teller << "/" << b.noemer << endl;

    return 0;
}
*/

// Class Gedeelte

class Breuk
{
public:
    Breuk(int t, int n);
    void verdubbel();
    void drukaf();

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

void Breuk::verdubbel()
{
    if ((noemer % 2) == 0)
    {
        noemer /= 2;
    }
    else
    {
        teller *= 2;
    }
}

int main()
{
    Breuk b(3, 4);

    b.verdubbel();
    b.drukaf();

    return 0;
}