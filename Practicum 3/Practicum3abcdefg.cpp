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
    int returnCentimeter();

    Length largest(Length L, Length L2)
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
    int centimeter1 = ((feet * 12) * 2.54) + (inches * 2.54);
    int centimeter2 = centi;

    if (centimeter1 < centimeter2)
    {
        return centimeter1;
    }
    else
    {
        return centimeter2;
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
    if (((feet * 12) + inches) > ((L.feet * 12) + L.inches))
    {
        cout << ((feet * 12) + inches) << endl;
        cout << ((L.feet * 12) + L.inches) << endl;

        feet = L.feet;
        inches = L.inches;
    }

    if (((L.feet * 12) + L.inches) > ((feet * 12) + inches))
    {
        cout << ((feet * 12) + inches) << endl;
        cout << ((L.feet * 12) + L.inches) << endl;

        L.feet = feet;
        L.inches = inches;
    }

} // De waardes van de grootste lengte worden verandert naar de waardes van de kleinste lengte

int Length::returnCentimeter()
{
    int centimeter;

    centimeter = ((feet * 12) * 2.54) + (inches * 2.54);

    return centimeter;
}

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
    Length d4(6,9);

    d3 = d2.largest(d1,d4);

    d3.drukaf_imperial();
    */

    // Opdracht 2

    /*
    Length C1(1, 3);
    Length C2(2, 5);

    int centimeter1;
    int centimeter2 = C2.returnCentimeter();
    int centimeterTotaal;

    centimeterTotaal = C1.smallest(centimeter2);

    cout << centimeterTotaal << endl;
    */

    // Opdracht 3

    /*
    float centimeter;

    centimeter = d1.centimeters();
    cout << centimeter << endl;
    */

    // Opdracht 4

    Length length1(8, 6);
    Length length2(12, 5);

    length1.maak_gelijk(length2);

    length1.drukaf_imperial();
    length2.drukaf_imperial();

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