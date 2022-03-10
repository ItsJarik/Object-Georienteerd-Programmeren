#include <iostream>

using namespace std;

class Length
{
public:
    Length();
    Length(int c);
    Length(int f, int i);
    void drukaf_imperial();
    void drukaf_metric();
    int smallest(int centi);
    float centimeters();
    void maak_gelijk(Length L);
    Length largest(Length L)
    {
        Length newLength;

        if ((L.feet > feet) && (L.inches > inches))
        {
            newLength.feet = L.feet;
            newLength.inches = L.inches;
        }
        else
        {
            newLength.feet = feet;
            newLength.inches = inches;
        }

        return newLength;
    }

    Length operator+(Length const &L)
    {
        Length newLength;
        newLength.feet = feet + L.feet;
        newLength.inches = inches + L.inches;
        return newLength;
    }

private:
    int feet;
    int inches;
    int centimeter;
};

Length::Length()
{

} // Default Constructor

Length::Length(int c)
{
    centimeter = c;
}

Length::Length(int f, int i)
{
    feet = f;
    inches = i;
}

int Length::smallest(int centi)
{
    if (centimeter < centi)
    {
        return centimeter;
    }
    else
    {
        return centi;
    }
}

float Length::centimeters()
{
    float lokaal_meter;
    float lokaal_centimeter;
    float centimeter;

    lokaal_meter = feet * 0.304800;
    lokaal_centimeter = inches * 2.54;

    centimeter = lokaal_centimeter + (lokaal_meter * 100);

    return centimeter;
}

void Length::maak_gelijk(Length L)
{
    if (feet > L.feet)
    {
        feet = L.feet;
        inches = L.inches;
    }
    else
    {
        L.feet = feet;
        L.inches = inches;
    }
} // De waardes van de grootste lengte worden verandert naar de waardes van de kleinste lengte

void Length::drukaf_imperial()
{
    cout << "Feet: " << feet << endl;
    cout << "Inches: " << inches << endl;
}

void Length::drukaf_metric()
{
    cout << "Meter: " << feet * 0.304800 << endl;
    cout << "Centimeter: " << inches * 2.54 << endl;
}

class Voorwerp
{
public:
    Voorwerp(Length *a);

private:
    Length *lengte;
    int nummer;
};

Voorwerp::Voorwerp(Length *a)
{
    lengte = a;
    nummer = -1;
}

int main()
{
    // Opdracht 1

    /*
    Length d1(1, 2);
    Length d2(2, 4);
    Length d3;

    d3 = d1.largest(d2);
    */

    // Opdracht 2

    /*
    Length C(10);
    int centimeter;

    centimeter = C.smallest(5);

    cout << centimeter << endl;
    */

    // Opdracht 3

    /*
    float centimeter;

    centimeter = d1.centimeters();
    cout << centimeter << endl;
    */

    // Opdracht 4

    /*
    Length length1(8, 6);
    Length length2(2, 4);

    length1.maak_gelijk(length2);
    length1.drukaf_imperial();
    length2.drukaf_imperial();
    */

    // Opdracht 5

    /*
    Length l1(1, 4);
    Length l2(2, 6);
    Length l3 = l1 + l2;

    l3.drukaf_imperial();
    */

    // Opdracht 6 & 7

    /*
    Voorwerp V(&d2);
    */
}