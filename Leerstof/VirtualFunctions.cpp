#include <iostream>

using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base \n";
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived \n";
    }
};

int main()
{
    // By using virtual in the base class, the Derived class will override the Base class.

    // Pointer (Virtual Functions without Dynamic Memory)
    Derived D1;

    Base *B1 = &D1;

    B1->print();

    // Reference (Virtual Functions without Dynamic Memory)
    Derived D2;

    Base &B2 = D2;

    B2.print();

    // Pointer (Virtual Functions with Dynamic Memory)
    Base *B3 = new Derived();

    B3->print();

    delete B3;

    return 0;
}