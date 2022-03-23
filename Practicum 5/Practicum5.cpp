#include <iostream>

using namespace std;

// Base Class
class Vorm
{
public:
    virtual int Oppervlakte() = 0; // Pure Virtual Function maakt klasse abstract

private:
protected:
    int lengte;
    int breedte;
};

int Vorm::Oppervlakte()
{
    // Return Oppervlakte
    return lengte * breedte;
}

// 1e Derived Class
class Rechthoek : public Vorm
{
public:
    Rechthoek();
    Rechthoek(const int l, const int b);
    int Oppervlakte() override;

private:
protected:
};

// Default Constructor
Rechthoek::Rechthoek()
{
}

// Customize Constructor
Rechthoek::Rechthoek(const int l, const int b)
{
    lengte = l;
    breedte = b;
}

// 2e Derived Class
class Vierkant : public Vorm
{
public:
private:
protected:
};

int Rechthoek::Oppervlakte()
{
    // Return Oppervlakte
    return lengte * breedte;
}

int main()
{

    // Opdracht 2

    Rechthoek r1(3, 2);

    int value;

    value = r1.Oppervlakte();

    cout << "Value: " << value << endl;

    // Opdracht 3

    // Refernce, geen copy constructor want er treedt slicing op
    Vorm *v1 = &r1;

    int value1;

    value1 = v1->Oppervlakte();

    cout << "Value1: " << value1 << endl;

    // Opdracht 4

    Rechthoek &r2 = r1;
    Vorm &v2 = r1;

    int value2;
    int value3;

    value2 = r2.Oppervlakte();
    value3 = v2.Oppervlakte();

    cout << "Value2: " << value2 << endl;
    cout << "Value3: " << value3 << endl;

    // Opdracht 5

    // Wordt hierboven aangepast voor Klasse rechthoek is een default en customize constructor aangemaakt en die wordt vervolgens gebruikt om de protected attributes in de Klasse vorm de pakken

    // Opdracht 6

    // Opdracht 7

    int value4;

    Vorm *vp = &r1;

    value4 = vp->Oppervlakte();

    cout << "Value4: " << value4 << endl;

    return 0;
}