#include <iostream>

using namespace std;

// Abstract
class Ontwerper
{
public:
    // Pure Virtual Function
    virtual void printSalaris() = 0;
};

class VasteKrachten : public Ontwerper
{
public:
    VasteKrachten(int mS);
    void printSalaris()
    {
        cout << "Salaris :" << maandSalaris << endl;
    }

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
    void printSalaris()
    {
        cout << "Salaris :" << gewerkteUren * uurtarief << endl;
    }

private:
    int gewerkteUren;
    int uurtarief;
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

    printSalaris(*V);
    printSalaris(*F);

    delete V;
    delete F;

    return 0;
}