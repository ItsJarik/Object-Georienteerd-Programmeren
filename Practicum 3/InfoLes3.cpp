#include <iostream>

using namespace std;

class Getal
{
public:
    Getal(int a);
    void drukaf();

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

int main()
{
    Getal a(4);

    a.drukaf();

    return 0;
}