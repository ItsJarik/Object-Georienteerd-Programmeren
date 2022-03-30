#include <iostream>

using namespace std;

// Abstract
class Ontwerper
{
public:
    // Pure Virtual Function
    virtual void printSalaris() = 0;
    virtual void berekenTotaleKosten() = 0;
    void totaleKosten(Ontwerper &freelancer)
    {
        cout << (freelancer.maandSalarisTotaal + maandSalarisTotaal) << endl;
    }

protected:
    int maandSalarisTotaal;

    int maandSalaris;

    int gewerkteUren;
    int uurtarief;
};

class VasteKrachten : public Ontwerper
{
public:
    VasteKrachten(int mS);
    void printSalaris()
    {
        cout << "Salaris :" << maandSalaris << endl;
    }
    void berekenTotaleKosten()
    {
        maandSalarisTotaal = maandSalaris;
    }
};

VasteKrachten::VasteKrachten(int mS)
{
    maandSalaris = mS;
}

class Freelancers : public Ontwerper
{
public:
    Freelancers(int gU, int u);
    void printSalaris()
    {
        cout << "Salaris :" << gewerkteUren * uurtarief << endl;
    }
    void berekenTotaleKosten()
    {
        maandSalarisTotaal = (gewerkteUren * uurtarief);
    }
};

Freelancers::Freelancers(int gU, int u)
{
    gewerkteUren = gU;
    uurtarief = u;
}

void printSalaris(Ontwerper &O)
{
    O.printSalaris();
}

int main()
{

    // Opdracht 2
    Ontwerper *V = new VasteKrachten(3000);
    Ontwerper *F = new Freelancers(150, 80);

    // Opdracht 3

    printSalaris(*V);
    printSalaris(*F);

    V->berekenTotaleKosten();
    F->berekenTotaleKosten();

    // Opdracht 4
    V->totaleKosten(*F);

    delete V;
    delete F;

    return 0;
}