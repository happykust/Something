#include <iostream>
#include "Circle.h"

using namespace std;

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