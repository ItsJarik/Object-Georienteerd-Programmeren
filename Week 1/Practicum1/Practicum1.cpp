#include <iostream>
#include <string>

using namespace std;

struct Tijd
{
    int minuten;
    int uren;
} Tijd1, Tijd2;

void giveTime(Tijd T)
{
    cout << "Geef aantal uren?" << endl;
    cin >> T.uren;

    cout << endl;

    cout << "Geef aantal minuten?" << endl;
    cin >> T.minuten;
}

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
    giveTime(Tijd1);
    giveTime(Tijd2);

    calcDifferenceTime(Tijd1, Tijd2);

    return 0;
};