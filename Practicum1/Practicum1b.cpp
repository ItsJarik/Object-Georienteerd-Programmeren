#include <iostream>
#include <string>

using namespace std;

struct Tijd
{
    int minuten;
    int uren;
} Tijd1, Tijd2;

bool statusCheck(Tijd T1, Tijd T2)
{
    bool status = true;

    if ((T2.minuten < T1.minuten) || (T2.uren < T1.uren))
    {
        cout << "Warning! Tijd 2 is groter dan Tijd 1." << endl;
        status = false;
    }
    else
    {
        cout << "No Warning!" << endl;
        status = true;
    }

    return status;
}

void calcDifferenceTime(Tijd T1, Tijd T2)
{
    if (statusCheck(Tijd1, Tijd2) == true)
    {
        int minuten = 0;
        int uren = 0;

        minuten = T2.minuten - T1.minuten;
        uren = T2.uren - T1.uren;

        cout << "Vershil in tijd is:" << endl;
        cout << uren << " uur en " << minuten << " minuten." << endl;
    }
    else
    {
        cout << "Sorry, can't calculate the time" << endl;
    }
}

int main()
{
    cout << "Geef aantal uren?" << endl;
    cin >> Tijd1.uren;

    cout << "Geef aantal minuten?" << endl;
    cin >> Tijd1.minuten;

    cout << endl;

    cout << "Geef aantal uren?" << endl;
    cin >> Tijd2.uren;

    cout << "Geef aantal minuten?" << endl;
    cin >> Tijd2.minuten;

    calcDifferenceTime(Tijd1, Tijd2);

    return 0;
};