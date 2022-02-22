#include <iostream>

using namespace std;

class Getal
{
public:
    Getal(int a);
    void drukaf();
    void operator+=(Getal G);

private:
    int waarde;
};

Getal::Getal(int a)
{
    waarde = a;
}

void Getal::drukaf()
{
    cout << waarde << endl;
}

void Getal::operator+=(Getal G)
{
    waarde += G.waarde;
} // Operator overloading (Hoef je niet te kennen voor toets).

int main()
{
    Getal a(4);
    Getal b(a); // Copy Constructor
    Getal c(6);

    a += b;

    a.drukaf();

    return 0;
}