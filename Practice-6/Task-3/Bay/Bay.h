#include "../Sea/Sea.h"

class Bay : public Ocean
{
private:
    bool fromOcean;
    bool fromSea;
    Sea *parent;
    Ocean *ocean;
    string name;
public:
    Bay();
    Bay(const string& n, const string& l, double s, double d, double sA, double t, double sal);
    Bay(const Ocean& obj, string n);
    Bay(const Sea& obj, string n);

    void setName(const string& n);
    string getName() const override;

    friend ostream &operator<<(ostream &stream, Bay obj);
    friend istream &operator>>(istream &stream, Bay &obj);
};