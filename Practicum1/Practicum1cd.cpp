#include <iostream>

using namespace std;

class Tijd
{
public:
    Tijd(int u, int m);
    void displayTime();
    void displayMinute();
    void verhoog(int m);
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

void Tijd::verhoog(int m)
{
    tijd_in_minuten = minuten + (uren * 60) + m;
}

void Tijd::displayTime()
{
    cout << uren << " uur en " << minuten << " minuten." << endl;
}

void Tijd::displayMinute()
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
    Tijd T1(2, 10);
    Tijd T2(6, 30);

    T1.verhoog(2);
    T1.displayMinute();dfdfdf

    return 0;
}