#include <iostream>

using namespace std;

class Tijd
{
public:
    Tijd(int u, int m);
    Tijd(int m);
    void verhoog(Tijd T);
    void displayTime();
    void display_totaal_minuten();
    void calcDifferenceTime(Tijd T1, Tijd T2);

private:
    int uren;
    int minuten;
    int tijd_in_minuten;
};

Tijd::Tijd(int u, int m)
{
    uren = u;
    minuten = m;
}

Tijd::Tijd(int m)
{
    uren = m / 60;
    minuten = m % 60;
}

void Tijd::verhoog(Tijd T)
{
    tijd_in_minuten = (minuten + (uren * 60)) + (T.minuten + (T.uren * 60));
}

void Tijd::displayTime()
{
    cout << uren << " uur en " << minuten << " minuten." << endl;
}

void Tijd::display_totaal_minuten()
{
    cout << tijd_in_minuten << " minuten" << endl;
}

void Tijd::calcDifferenceTime(Tijd T1, Tijd T2)
{
    if ((T2.uren > T1.uren) && (T2.minuten > T1.minuten))
    {
        minuten = T2.minuten - T1.minuten;
        uren = T2.uren - T1.uren;

        cout << "Verschil in tijd:" << endl;
        cout << uren << " uur en " << minuten << " minuten." << endl;
    }
    else
    {
        cout << "Sorry, can't calculate the time" << endl;
    }
}

int main()
{
    Tijd T1(2, 5);
    Tijd T2(2, 5);

    T1.verhoog(T2);

    T1.display_totaal_minuten();

    return 0;
}