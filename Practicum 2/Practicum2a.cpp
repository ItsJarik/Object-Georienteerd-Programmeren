#include <iostream>

using namespace std;

class Length
{
public:
    Length(int f, int i);
    Length(int i);
    void drukaf_imperial();
    void drukaf_metric();
    void drukaf_distance(Length d);

private:
    int feet;
    int inches;
};

Length::Length(int f, int i)
{
    feet = f;
    inches = i;
}

Length::Length(int i)
{
    feet = i / 12;
    inches = i % 12;
}

void Length::drukaf_imperial()
{
    cout << "Feet: " << feet << endl;
    cout << "Inches: " << inches << endl;
}

void Length::drukaf_metric()
{
    float meter = 0.304800;
    float centimeter = 2.54;

    cout << "Meter: " << feet * meter << endl;
    cout << "Centimeter: " << inches * centimeter << endl;
}

void Length::drukaf_distance(Length d)
{

    cout << "Verschil in afstand is: " << endl;
    cout << "Feet: " << feet << endl;
    cout << "Inches" << inches << endl;
}

int main()
{
    Length d1(1, 2);
    Length d2(68);

    d2.drukaf_imperial();
}