#include "Cone.h"
#include <cmath>

using namespace std;

const double pi = 3.14159265;

Cone::Cone() {
    x = y = z = radius = height = 0;
}

Cone::Cone(double r, double h) {
    x = y = z = 0.0;
    radius = r;
    height = h;
}

Cone::Cone(double a, double b, double c, double r, double h) {
    x = a;
    y = b;
    z = c;
    radius = r;
    height = h;
}

void Cone::setCoordinate(double a, double b, double c) {
    x = a;
    y = b;
    z = c;
}

void Cone::setRadius(double r) {
    radius = r;
}

void Cone::setHeight(double h) {
    height = h;
}

double Cone::getRadius() const {
    return radius;
}

double Cone::getHeight() const {
    return height;
}

double Cone::area() const {
    double l = sqrt(height*height + radius*radius);
    return pi*radius*(radius+l);
}

double Cone::volume() const {
    return pi*radius*radius*height/3;
}

double Cone::getX() const {
    return x;
}

double Cone::getY() const {
    return y;
}

double Cone::getZ() const {
    return z;
}

ostream &operator<<(ostream &stream, const Cone& obj) {
    stream << "(" << obj.getX() << "; ";
    stream << obj.getY() << "; ";
    stream << obj.getZ() << ") ";
    stream << "r=" << obj.getRadius() << " ";
    stream << "h=" << obj.getHeight() << "\n";
    return stream;
}
