#include <iostream>

using namespace std;



class Ontwerper
{
private:
    Ontwerper* partner;
public:

    virtual int kosten() = 0;

    int totalekosten()
    {
        return kosten() + partner->kosten();
    }

    void parner(Ontwerper* o1)
    {

        partner=o1;

    }
};

class VasteKracht: public Ontwerper
{
private:

    int maandsalaris;

public:

    VasteKracht(int ms)

    {

        maandsalaris = ms;

    }

    int kosten()

    {

        return maandsalaris;

    }

};

 

class Freelancer: public Ontwerper

{

private:

    int uurtarief;

    int uren;

    int maandsalaris;

public:

    Freelancer(int t, int u)

    {

        uurtarief = t;

        uren = u;

    }

    int kosten()

    {

        return uren * uurtarief;

    }

};

 

int kosten(Ontwerper* o1)

{

    (*o1).kosten();

}

 

int main()

{

    int kv1,kf1;

    Freelancer* f1 = new Freelancer(80,150);

    VasteKracht* v1 = new VasteKracht(5000);

    kv1 = kosten(v1);

    kf1 = kosten(f1);

    cout << kf1 << " " << kv1 << endl;

    v1->parner(f1);

    cout << v1->totalekosten() << endl;

 

    return 0;

}