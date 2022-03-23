#include <iostream>

using namespace std;

class Ontwerper
{
};

class VasteKrachten : public Ontwerper
{
public:
    VasteKrachten(int mS);

protected:
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

void drukAfSalarisVasteKrachten(VasteKrachten *V)
{
    cout << "Salaris: " << V->maandSalaris << endl;
}

void drukAfSalarisFreelancer(Freelancers *F)
{
    cout << "Salaris: " << F->gewerkteUren * F->uurtarief << endl;
}

int main()
{

    // Opdracht 2

    VasteKrachten *V1 = new VasteKrachten(3000);
    Freelancers *F1 = new Freelancers(150, 80);

    drukAfSalarisVasteKrachten(&V1);

    delete V1;
    delete F1;

    return 0;
}