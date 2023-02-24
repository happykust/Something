#include <iostream>
#include <cmath>

using namespace std;

class Circle {

private:
    float radius, x_center, y_center;

public:
    void circle (float r, float x, float y) {}

    void set_circle (float r, float x, float y) {
        radius = r;
        x_center = x;
        y_center = y;
    }

    float square () const {
        return pow(radius, 2) * 3.14;
    }

    static bool triangle_around (float a, float b, float c) {
        return true;
    }

    static bool triangle_in (float a, float b, float c) {
        return true;
    }

    bool check_circle (float r, float x_cntr, float y_cntr) const {
        return ((sqrt((pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2))) < (r + radius)));
    }
};

int main() {
    Circle mas[3];
    float radius, x_center, y_center;
    for (int i = 0; i < 3; i++) {
        cout << "Enter radius, x_center and y_center for circle #" << i+1 << " through space: " << endl;
        cin >> radius >> x_center >> y_center;
        mas[i].set_circle(radius, x_center, y_center);
    }

    for (int i = 0; i < 3; i++) {
        cout << "Square for circle #" << i + 1 << ": " << mas[i].square() << endl;
        cout << "Ìîæíî ëè îïèñàòü òðåóãîëüíèê ó " << i + 1 << " îêðóæíîñòè? " << mas[i].triangle_around(radius, x_center, y_center) << endl;
        cout << "Ìîæíî ëè âïèñàòü òðåóãîëüíèê â " << i + 1 << " îêðóæíîñòü? " << mas[i].triangle_in(radius, x_center, y_center) << endl;

    }

    float r2, x2, y2;
    cout << "Íàïèøèòå ðàäèóñ, x è y öåíòðà îêðóæíîñòè êîòîðóþ õîòèòå ïðîâåðèòü íà ïåðåñå÷åíèå: " << endl;
    cin >> r2 >> x2 >> y2;
    for (auto & ma : mas) {
        cout << "Èìåþòñÿ ëè òî÷êè ïåðåñå÷åíèÿ? " << ma.check_circle(r2, x2, y2) << endl;
    }
}