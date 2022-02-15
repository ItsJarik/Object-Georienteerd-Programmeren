#include <iostream>

using namespace std;

class Tijd
{
public:
    Tijd(int u, int m);
    void displayTime();
    void getTime();
    void calcDifferenceTime(Tijd T1, Tijd T2);

private:
    int uren;
    int minuten;
};

Tijd::Tijd(int u, int m)
{
    uren = u;
    minuten = m;
}

void Tijd::displayTime()
{
    cout << uren << " uur en " << minuten << " minuten." << endl;
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
    Tijd T1(2, 12);
    Tijd T2(6, 30);
    Tijd T3(0, 0);

    T3.calcDifferenceTime(T1, T2);

    return 0;
}