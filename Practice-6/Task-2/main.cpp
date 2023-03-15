#include <iostream>
#include "TruncatedCone.h"

using namespace std;

int main() {
    TruncatedCone cone1(1, 2, 3, 4, 5, 6);
    TruncatedCone cone2(2, 3, 4, 5, 6, 7);
    TruncatedCone cone3(3, 4, 5, 6, 6, 8);

    cout << cone1 << endl;
    cout << "Area: " << cone1.area() << endl;
    cout << "Volume: " << cone1.volume() << endl << endl;

    cout << cone2 << endl;
    cout << "Area: " << cone2.area() << endl;
    cout << "Volume: " << cone2.volume() << endl << endl;

    cout << cone3 << endl;
    cout << "Area: " << cone3.area() << endl;
    cout << "Volume: " << cone3.volume() << endl << endl;

    Cone cone4(5, 6, 7, 8, 9);

    TruncatedCone cone5(cone4, 2);
    TruncatedCone cone6(cone5, 4);

    cout << cone5 << endl;
    cout << "Area: " << cone5.area() << endl;
    cout << "Volume: " << cone5.volume() << endl << endl;

    cout << cone6 << endl;
    cout << "Area: " << cone6.area() << endl;
    cout << "Volume: " << cone6.volume() << endl << endl;

    return 0;
}
