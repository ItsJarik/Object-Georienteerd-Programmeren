#include <iostream>

using namespace std;

class Base {
    public:
    void print() {
        cout << "Base \n";
    }
};

int main() {

    Base B1;        // New Object
    Base B2;        // New Object
    Base &B3 = B2;  // Not New Object

    return 0;
}