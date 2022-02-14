#include <iostream>

using namespace std;

class Tijd
{
public:
    void displayTime();
    void getTime();

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

int main()
{
    Tijd Tijd1;
    Tijd Tijd2;

    Tijd1.getTime();
    Tijd2.getTime();
    

    return 0;
}