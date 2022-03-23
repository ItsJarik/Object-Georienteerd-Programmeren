#include <iostream>

using namespace std;

class Boek
{
public:
    void toon()
    {
        cout << "gewoon boek" << endl;
    }
};

class Studieboek : public Boek
{
public:
    Studieboek(int jaar)
    {
        leerjaar = jaar;
    }

    void toon()
    {
        cout << leerjaar << endl;
    }

protected:
    int leerjaar;
};

int main()
{

    Boek b1;
    Studieboek b2(2);
    Boek b3 = b1;
    Boek b4 = b2;
    Boek &b5 = b1;
    Studieboek b6(b2);
    Boek &b7 = b2;

    b7.toon();

    return 0;
};