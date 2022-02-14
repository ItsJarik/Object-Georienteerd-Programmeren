#include <iostream>

using namespace std;

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
