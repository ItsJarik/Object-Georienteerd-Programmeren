#include <iostream>

using namespace std;

// Base Class
class Vorm
{
public:
    int Oppervlakte();

private:
protected:
};

// 1e Derived Class
class Rechthoek : public Vorm
{
public:
private:
protected:
};

// 2e Derived Class
class Vierkant : public Vorm
{
public:
private:
protected:
};

int Vorm::Oppervlakte()
{
    return 10;
}

int main()
{
    // Opdracht 2

    /*
    Rechthoek r1;

    int value;

    value = r1.Oppervlakte();

    cout << "Value: " << value << endl;
    */

    // Opdracht 3

    

    return 0;
}