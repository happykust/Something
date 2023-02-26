#pragma once

class Triangle {
private:
    double a, b, c;
public:
    bool exist_triangle() const;
    void set(double a1, double b1, double c1);
    void show() const;
    double perimeter() const;
    double square() const;
};

int main();