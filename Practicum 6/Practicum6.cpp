#include <iostream>

using namespace std;

class Ontwerper
{
};

class VasteKrachten : public Ontwerper
{
public:
    VasteKrachten(int mS);

private:
    int maandSalaris;
};

VasteKrachten::VasteKrachten(int mS)
{
    maandSalaris = mS;
}

class Freelancers : public Ontwerper
{
public:
    Freelancers(int gU, int u);

private:
    int gewerkteUren;
    int uurtarief;
};

Freelancers::Freelancers(int gU, int u)
{
    gewerkteUren = gU;
    uurtarief = u;
}

int main()
{

    VasteKrachten V1(3000);
    Freelancers F1(150, 80);

    return 0;
}