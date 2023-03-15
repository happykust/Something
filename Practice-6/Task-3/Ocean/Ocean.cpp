#include "Ocean.h"
#include "sstream"

using namespace std;

Ocean::Ocean() {
    name = "";
    location = "";
    size = 0;
    depth = 0;
    surfaceArea = 0;
    temperature = 0;
    salinity = 0;
}

Ocean::Ocean(string n, string l, double s, double d, double sA, double t, double sal) {
    name = n;
    location = n;
    size = s;
    depth = d;
    surfaceArea = sA;
    temperature = t;
    salinity = sal;
}

void Ocean::setName(string n) {
    name=n;
}

void Ocean::setLocation(string l) {
    location=l;
}

void Ocean::setSize(double s) {
    size=s;
}

void Ocean::setDepth(double d) {
    depth=d;
}

void Ocean::setSurfaceArea(double sA) {
    surfaceArea=sA;
}

void Ocean::setTemperature(double t) {
    temperature=t;
}

void Ocean::setSalinity(double sal) {
    salinity=sal;
}

string Ocean::getName() const {
    return name;
}

string Ocean::getLocation() const {
    return location;
}

double Ocean::getSize() const {
    return size;
}

double Ocean::getDepth() const {
    return depth;
}

double Ocean::getSurfaceArea() const {
    return surfaceArea;
}

double Ocean::getTemperature() const {
    return temperature;
}

double Ocean::getSalinity() const {
    return salinity;
}

ostream &operator<<(ostream &stream, const Ocean &obj) {
    stream << "Name: " << obj.name << "\n";
    stream << "Location: " << obj.location << "\n";
    stream << "Size: " << obj.size << "\n";
    stream << "Depth: " << obj.depth << "\n";
    stream << "Surface area: " << obj.surfaceArea << "\n";
    stream << "Temperature: " << obj.temperature << "\n";
    stream << "Salinity: " << obj.salinity << "\n";
    return stream;
}

istream &operator>>(istream &stream, Ocean &obj) {
    stream >> obj.name;
    stream >> obj.location;
    stream >> obj.size;
    stream >> obj.depth;
    stream >> obj.surfaceArea;
    stream >> obj.temperature;
    stream >> obj.salinity;
    return stream;
}

