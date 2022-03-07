#include <iostream>

using namespace std;

void wissel(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int &max(int &a, int &b)
{
    if (a > b)
        return a;
    else
        return b;
}

int kleinste(int &a, int &b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int x = 7;
    int y = 2;
    int z;
    int *p = &x;

    // wissel(x, y);

    *p = kleinste(x, y);

    cout << x << " " << y << endl;

    return 0;
}