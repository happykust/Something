#include "Bay.h"
#include "iostream"

using namespace std;

Bay::Bay(){
    fromOcean = false;
    fromSea = false;
    parent = nullptr;
    ocean = nullptr;
    setName("");
    setLocation("");
    setSize(0);
    setDepth(0);
    setSurfaceArea(0);
    setTemperature(0);
    setSalinity(0);
}

Bay::Bay(const string &n, const string &l, double s, double d, double sA, double t, double sal){
    fromOcean = false;
    fromSea = false;
    parent = nullptr;
    ocean = nullptr;
    setName(n);
    setLocation(l);
    setSize(s);
    setDepth(d);
    setSurfaceArea(sA);
    setTemperature(t);
    setSalinity(sal);
}

Bay::Bay(const Ocean &obj, string n){
    fromOcean = true;
    fromSea = false;
    parent = nullptr;
    ocean = (Ocean*)&obj;
    setName(n);
    setLocation(obj.getLocation());
    setSize(obj.getSize());
    setDepth(obj.getDepth());
    setSurfaceArea(obj.getSurfaceArea());
    setTemperature(obj.getTemperature());
    setSalinity(obj.getSalinity());
}

Bay::Bay(const Sea &obj, string n){
    fromOcean = false;
    fromSea = true;
    parent = (Sea*)&obj;
    ocean = nullptr;
    setName(n);
    setLocation(obj.getLocation());
    setSize(obj.getSize());
    setDepth(obj.getDepth());
    setSurfaceArea(obj.getSurfaceArea());
    setTemperature(obj.getTemperature());
    setSalinity(obj.getSalinity());
}

void Bay::setName(const string &n) {
    bool error = true;
    if (getName() != n) {
        error = false;
        if (fromOcean) {
            if (ocean->getName() == n) {
                error = true;
            }
        } else if (fromSea) {
            if (parent->getName() == n) {
                error = true;
            }
        }
    }

    if (error) {
        cout << "Bay must have an unique name in a hierarchical chain." << endl;
    } else {
        name = n;
    }
}

string Bay::getName() const {
    return name;
}

ostream &operator<<(ostream &stream, Bay obj) {
    stream << "Bay: " << obj.getName() << endl;
    stream << "Location: " << obj.getLocation() << endl;
    stream << "Size: " << obj.getSize() << endl;
    stream << "Depth: " << obj.getDepth() << endl;
    stream << "Surface area: " << obj.getSurfaceArea() << endl;
    stream << "Temperature: " << obj.getTemperature() << endl;
    stream << "Salinity: " << obj.getSalinity() << endl;
    return stream;
}

istream &operator>>(istream &stream, Bay &obj) {
    string name;
    string location;
    double size;
    double depth;
    double surfaceArea;
    double temperature;
    double salinity;

    cout << "Enter name: ";
    stream >> name;
    obj.setName(name);

    cout << "Enter location: ";
    stream >> location;
    obj.setLocation(location);

    cout << "Enter size: ";
    stream >> size;
    obj.setSize(size);

    cout << "Enter depth: ";
    stream >> depth;
    obj.setDepth(depth);

    cout << "Enter surface area: ";
    stream >> surfaceArea;
    obj.setSurfaceArea(surfaceArea);

    cout << "Enter temperature: ";
    stream >> temperature;
    obj.setTemperature(temperature);

    cout << "Enter salinity: ";
    stream >> salinity;
    obj.setSalinity(salinity);

    return stream;
}
