#include <iostream>

using namespace std;

class Base
{
public:
    void toon()
    {
        cout << "Dit is Base." << endl;
    }
};

class Derived : public Base
{
public:
    void toon()
    {
        cout << "Dit is Derived." << endl;
    }
};

int main()
{

    return 0;
}