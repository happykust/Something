#include "TruncatedCone.h"
#include "sstream"

using namespace std;

const double pi = 3.14159265;

TruncatedCone::TruncatedCone() {
    setCoordinate(0, 0, 0);
    setRadius(0);
    radius2 = 0;
    setHeight(0);
}

TruncatedCone::TruncatedCone(double r1, double r2, double h) {
    setCoordinate(0.0, 0.0, 0.0);
    setRadius(r1);
    radius2 = r2;
    setHeight(h);
}

TruncatedCone::TruncatedCone(double a, double b, double c, double r1, double r2, double h) {
    setCoordinate(a, b, c);
    setRadius(r1);
    radius2 = r2;
    setHeight(h);
}

double TruncatedCone::getRadius2() const {
    return radius2;
}

void TruncatedCone::setRadius2(double r2) {
    radius2 = r2;
}

double TruncatedCone::area() const {
    double l = sqrt(getHeight()*getHeight() + (getRadius()-radius2)*(getRadius()-radius2));
    double b = pi*(radius2*getRadius())*l;
    double g = pi*radius2*radius2;
    return b+g;
}

double TruncatedCone::volume() const {
    return (pi*getHeight()/3)*(getRadius()*getRadius() + getRadius()*radius2 + radius2*radius2);
}

ostream &operator<<(ostream &stream, TruncatedCone& obj) {
    stream << "(" << obj.getX() << "; ";
    stream << obj.getY() << "; ";
    stream << obj.getZ() << ") ";
    stream << "r=" << obj.getRadius() << " ";
    stream << "r2=" << obj.getRadius2() << " ";
    stream << "h=" << obj.getHeight();
    return stream;
}


istream &operator>>(istream &stream, TruncatedCone &obj) {
    double a, b, c, r, r2, h;
    stream >> a >> b >> c >> r >> r2 >> h;
    obj.setCoordinate(a, b, c);
    obj.setRadius(r);
    obj.setRadius2(r2);
    obj.setHeight(h);
    return stream;
}


bool TruncatedCone::operator==(const TruncatedCone &obj) const {
    return (getX() == obj.getX() && getY() == obj.getY() && getZ() == obj.getZ() && getRadius() == obj.getRadius() && getRadius2() == obj.getRadius2() && getHeight() == obj.getHeight());
}

bool TruncatedCone::operator!=(const TruncatedCone &obj) const {
    return !(*this == obj);
}

bool TruncatedCone::operator>(const TruncatedCone &obj) const {
    return (area() > obj.area());
}

bool TruncatedCone::operator<(const TruncatedCone &obj) const {
    return (area() < obj.area());
}

bool TruncatedCone::operator>=(const TruncatedCone &obj) const {
    return (area() >= obj.area());
}

bool TruncatedCone::operator<=(const TruncatedCone &obj) const {
    return (area() <= obj.area());
}

TruncatedCone::TruncatedCone(const Cone &obj, double r2) {
    setCoordinate(obj.getX(), obj.getY(), obj.getZ());
    setRadius(obj.getRadius());
    radius2 = r2;
    setHeight(obj.getHeight());
}
