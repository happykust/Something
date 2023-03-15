#include "ostream"

using namespace std;

class Ocean {
    string name;
    string location;
    double size;
    double depth;
    double surfaceArea;
    double temperature;
    double salinity;
public:
    Ocean();
    Ocean(string n, string l, double s, double d, double sA, double t, double sal);

    void setName(string name);
    void setLocation(string location);
    void setSize(double size);
    void setDepth(double depth);
    void setSurfaceArea(double surfaceArea);
    void setTemperature(double temperature);
    void setSalinity(double salinity);

    virtual string getName() const;
    string getLocation() const;
    double getSize() const;
    double getDepth() const;
    double getSurfaceArea() const;
    double getTemperature() const;
    double getSalinity() const;

    friend ostream &operator<<(ostream &stream, const Ocean& obj);
    friend istream &operator>>(istream &stream, Ocean& obj);
};
