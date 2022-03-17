#include <iostream>

using namespace std;

// MainClass Rechthoek
class Rechthoek
{
public:
    // Constructors
    Rechthoek();
    Rechthoek(int l, int b);

    Rechthoek omvattend(Rechthoek R)
    {
        Rechthoek newR;

        newR.lengte = lengte + R.lengte;
        newR.breedte = breedte + R.breedte;

        return newR;
    }

    int Viervoud();
    int Oppervlakte();
    void showValue();

protected:
    int lengte;
    int breedte;
};

// SubClass Vierkant
class Vierkant : public Rechthoek
{
public:
    Vierkant(int l, int b);
    void showValue();
};

Rechthoek::Rechthoek()
{
}

Rechthoek::Rechthoek(int l, int b)
{
    lengte = l;
    breedte = b;
}

Vierkant::Vierkant(int l, int b)
{
    lengte = l;
    breedte = b;
}

int Rechthoek::Oppervlakte()
{
    int oppervlakte;

    // Oppervlkate wordt berekend
    oppervlakte = lengte * breedte;

    // Er wordt een oppervlakte geretourneerd
    return oppervlakte;
}

int Rechthoek::Viervoud()
{
    int oppervlakte;

    // Verdubbeld de lengte en de breedte
    lengte = lengte * 2;
    breedte = breedte * 2;

    // Oppervlakte wordt berekend met de verdubbelde waardes
    oppervlakte = lengte * breedte;

    // Er wordt een oppervlakte geretouneerd die 4x zo groot is
    return oppervlakte;
}

void Rechthoek::showValue()
{
    cout << "Lengte: " << lengte << endl;
    cout << "Breedte: " << breedte << endl;
}

void Vierkant::showValue()
{
    cout << "Lengte: " << lengte << endl;
    cout << "Breedte: " << breedte << endl;
}

int main()
{
    // Opdracht 1

    /*
    // Wordt een object van de klasse vierkant aangemaakt
    Rechthoek R(2, 4);

    // Print alle waarde van de private attributes uit
    R.showValue();
    */

    // Opdracht 2

    /*
    Rechthoek R1(5, 6);

    int oppervlakte = R1.Oppervlakte();

    cout << "Oppervlakte: " << oppervlakte << endl;
    */

    // Opdracht 3

    /*
    Rechthoek R2(4, 3);

    int oppervlakte = R2.Oppervlakte();
    int oppervlakteViervoud = R2.Viervoud();

    cout << "Oppervlakte: " << oppervlakte << endl;
    cout << "Oppervlakte Verviervoudigd: " << oppervlakteViervoud << endl;
    */

    // Opdracht 4

    /*
    Rechthoek R3(6, 3);
    Rechthoek R4(6, 3);
    Rechthoek R5;

    R5 = R4.omvattend(R3);

    R5.showValue();
    */

    // Opdracht 5

    Vierkant R6(3, 3);

    R6.showValue();

    return 0;
}