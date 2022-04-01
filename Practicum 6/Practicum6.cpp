#include <iostream>

using namespace std;

// Abstract
class Ontwerper
{
public:
    // Pure Virtual Function
    virtual void printSalaris() = 0;
    virtual int berekenSalaris() = 0;
    void partners(Ontwerper *O1)
    {
        partner = O1;
    }
    void totaleKosten()
    {
        maandSalarisTotaal = berekenSalaris() + partner->berekenSalaris();
        cout << maandSalarisTotaal << endl;
    }

protected:
    // Partner Object
    Ontwerper *partner;

    // Salaris Vastekracht + Freelancer
    int maandSalarisTotaal;
};

class VasteKrachten : public Ontwerper
{
public:
    VasteKrachten(int mS);
    void printSalaris()
    {
        cout << "Salaris :" << maandSalarisVastekracht << endl;
    }
    int berekenSalaris()
    {
        return maandSalarisVastekracht;
    }

private:
    // Salaris Vastekracht
    int maandSalarisVastekracht;
};

// Customized Constructor
VasteKrachten::VasteKrachten(int mS)
{
    maandSalarisVastekracht = mS;
}

class Freelancers : public Ontwerper
{
public:
    Freelancers(int gU, int u);
    void printSalaris()
    {
        cout << "Salaris :" << gewerkteUren * uurtarief << endl;
    }
    int berekenSalaris()
    {
        return maandSalarisFreelancer;
    }

private:
    // Salaris Freelancer
    int gewerkteUren;
    int uurtarief;
    int maandSalarisFreelancer;
};

// Customized Constructor
Freelancers::Freelancers(int gU, int u)
{
    gewerkteUren = gU;
    uurtarief = u;
    maandSalarisFreelancer = gU * u;
}

void printSalaris(Ontwerper &O)
{
    O.printSalaris();
}

int main()
{

    // Opdracht 2
    VasteKrachten *V = new VasteKrachten(3000);
    Freelancers *F = new Freelancers(150, 80);

    // Opdracht 3

    printSalaris(*V);
    printSalaris(*F);

    // Opdracht 4
    V->berekenSalaris();
    F->berekenSalaris();

    V->partners(F);
    V->totaleKosten();

    delete V;
    delete F;

    return 0;
}