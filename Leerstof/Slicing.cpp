#include <iostream>

using namespace std;

class Base
{
public:
    void print()
    {
        cout << "Base \n";
    }
    virtual void showIets()
    {
        cout << "Leeftijd: " << leeftijd << endl;
    }

private:
    int leeftijd;
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived \n";
    }

    void showIets()
    {
        cout << "Geboortejaar: " << geboortejaar << endl;
    }

private:
    int geboortejaar;
};

int main()
{

    // Slicing;

    // Slicing Voorkomen:
    // Maak de Base Class Abstract, compiler voorkomt slicing

    Derived d;

    Base b1 = d;

    b1.showIets();

    Base b2;

    b2.showIets();

    return 0;
}