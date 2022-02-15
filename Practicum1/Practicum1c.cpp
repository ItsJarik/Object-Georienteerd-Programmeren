#include <iostream>

using namespace std;

class Tijd
{
public:
    void displayTime();
    void getTime();
    void calcDifferenceTime(Tijd T);

private:
    int uren;
    int minuten;
};

void Tijd::displayTime()
{
    cout << uren << endl;
    cout << minuten << endl;
}

void Tijd::getTime()
{
    cout << "Geef aantal uren?" << endl;
    cin >> uren;

    cout << "Geef aantal minuten?" << endl;
    cin >> minuten;
}

void Tijd::calcDifferenceTime(Tijd T2)
{
    cout << T2.uren << endl;
    if ((T2.uren > uren) && (T2.minuten > minuten))
    {
        int minuten_local = 0;
        int uren_local = 0;

        minuten_local = T2.minuten - minuten;
        uren_local = T2.uren - uren;

        cout << "Vershil in tijd is:" << endl;
        cout << uren_local << " uur en " << minuten_local << " minuten." << endl;
    }
    else
    {
        cout << "Sorry, can't calculate the time" << endl;
    }
}

int main()
{
    Tijd Tijd1;
    Tijd Tijd2;

    Tijd1.getTime();
    Tijd2.getTime();

    Tijd1.calcDifferenceTime(Tijd2);

    return 0;
}