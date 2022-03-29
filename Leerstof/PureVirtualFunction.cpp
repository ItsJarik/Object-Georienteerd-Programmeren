#include <iostream>

using namespace std;

// Abstract
class Hond
{
public:
    // Pure Virtual Function
    virtual void Blaf() = 0;
};

class Herder : public Hond
{
public:
    void Blaf()
    {
        cout << "Woef woef \n";
    }
};

class Tekkel : public Hond
{
public:
    void Blaf()
    {
        cout << "Kef kef \n";
    }
};

int main()
{
    Herder H1;
    Tekkel T1;

    H1.Blaf();

    return 0;
}