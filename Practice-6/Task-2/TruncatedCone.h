#include "Cone/Cone.h"
#include <cmath>

using namespace std;

class TruncatedCone : public Cone {
    double radius2;
public:
    TruncatedCone();
    TruncatedCone(double r1, double r2, double h);
    TruncatedCone(double a, double b, double c, double r1, double r2, double h);
    TruncatedCone(const Cone& obj, double r2);

    double getRadius2() const;
    void setRadius2(double r2);

    double area() const override;
    double volume() const override;

    friend ostream &operator<<(ostream &stream, TruncatedCone& obj);
    friend istream &operator>>(istream &stream, TruncatedCone& obj);

    bool operator==(const TruncatedCone& obj) const;
    bool operator!=(const TruncatedCone& obj) const;
    bool operator>(const TruncatedCone& obj) const;
    bool operator<(const TruncatedCone& obj) const;
    bool operator>=(const TruncatedCone& obj) const;
    bool operator<=(const TruncatedCone& obj) const;
};