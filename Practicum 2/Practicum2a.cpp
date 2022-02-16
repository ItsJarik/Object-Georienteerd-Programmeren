#include <iostream>

using namespace std;

class Length
{
public:
    Length(int f, int i);
    Length(int i);
    void drukaf_imperial();
    void drukaf_metric();

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
    inches = i;
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

int main()
{
    Length d1(1, 2);

    d1.drukaf_imperial();
    d1.drukaf_metric();
}