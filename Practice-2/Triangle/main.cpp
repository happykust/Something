#include <iostream>
#include "Triangle.h"

using namespace std;

int main()
{
    Triangle mas[3];
    double a, b, c;

    for (int i = 0; i < 3; i++) {
        cout << "Enter a, b and c for triangle #" << i+1 << " through space: " << endl;
        cin >> a >> b >> c;
        mas[i].set (a, b, c);
        if (!(mas[i].exist_triangle())) {
            mas[i].show();
            cout << "Triangle with these sides doesn't exist, try again: " << endl;
            i--;
        }
    }

    for (auto & ma : mas) {
        ma.show();
        cout << "Triangle's perimeter: " << ma.perimeter() << endl;
        cout << "Triangle's square: " << ma.square() << endl;
    }

    return 0;
}