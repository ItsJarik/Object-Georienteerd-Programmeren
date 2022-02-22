#include <iostream>

using namespace std;

class Getal
{
public:
    Getal();
    Getal(int a);
    void drukaf();
    int operator+=(Getal G);

private:
    int waarde;
};

Getal::Getal()
{

} // Default constructor (Alleen zelf aanmaken als je een constructor maakt)

Getal::Getal(int a)
{
    waarde = a;
} // Constructor

void Getal::drukaf()
{
    cout << waarde << endl;
}

int Getal::operator+=(Getal G)
{
    waarde += G.waarde;

    return waarde;
} // Operator overloading (Hoef je niet te kennen voor toets).

int main()
{
    Getal a(4);
    Getal b(a); // Copy Constructor
    Getal c(6);
    Getal d = 6;

    a += b += c;

    a.drukaf();

    return 0;
}