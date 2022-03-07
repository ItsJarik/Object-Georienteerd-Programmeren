#include <iostream>

using namespace std;

void wissel(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int x = 7;
    int y = 10;

    wissel(&x, &y);

    cout << x << " " << y << endl;

    return 0;
}