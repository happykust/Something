#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    double a, b, c;

public:
    bool exist_triangle () const {
        return ((a + b > c) && (b + c > a) && (a + c > b));
    }
    void set (double a1, double b1, double c1) {
        a = a1;
        b = b1;
        c = c1;
    }
    void show () const {
        cout << "1 side: " << a << endl;
        cout << "2 side: " << b << endl;
        cout << "3 side: " << c << endl;
    }
    double perimeter() const {
        double p = a + b + c;
        return p;
    }
    double square() const {
        double p = (a+b+c)/2;
        double s = sqrt(p* (p - a) * (p - b) * (p - c));
        return s;
    }
};

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