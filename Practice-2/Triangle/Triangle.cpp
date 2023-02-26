#include <iostream>
#include <cmath>
#include "Triangle.h"

using namespace std;


bool Triangle::exist_triangle() const {
    return ((a + b > c) && (b + c > a) && (a + c > b));
}

void Triangle::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
}

void Triangle::show() const {
    cout << "1 side: " << a << endl;
    cout << "2 side: " << b << endl;
    cout << "3 side: " << c << endl;
}

double Triangle::perimeter() const {
    return a + b + c;
}

double Triangle::square() const {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
