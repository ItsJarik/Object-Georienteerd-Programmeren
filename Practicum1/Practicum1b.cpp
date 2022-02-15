#include <iostream>
#include <string>

using namespace std;

struct Tijd
{
    int minuten;
    int uren;
} Tijd1, Tijd2;

void giveTime(Tijd *p)
{
    cout << "Geef aantal uren?" << endl;
    cin >> p->uren;

    cout << "Geef aantal minuten?" << endl;
    cin >> p->minuten;
}

void calcDifferenceTime(Tijd *p1, Tijd *p2)
{
    if ((p2->minuten > p1->minuten) || (p2->uren > p2->uren))
    {
        int minuten = 0;
        int uren = 0;

        minuten = p2->minuten - p1->minuten;
        uren = p2->uren - p1->uren;

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
    giveTime(&Tijd1);
    giveTime(&Tijd2);

    calcDifferenceTime(&Tijd1, &Tijd2);

    return 0;
};