#include <iostream>

using namespace std;

class Breuk
{
public:
    Breuk();
    Breuk(int t, int n);
    void verdubbel();
    void drukaf();

private:
    int teller;
    int noemer;
};

Breuk::Breuk()
{
}

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
    Breuk c(b); // Copy Constructor

    b.verdubbel();
    b.drukaf();

    return 0;
}