#pragma once

class Rational {
private:
    int a{}, b{};
public:
    explicit Rational(int a1 = 1, int b1 = 1);
    void set(int a1, int b1);
    void show() const;
    Rational operator+(const Rational& r) const;
    Rational operator-(const Rational& r) const;
    Rational operator==(const Rational& r) const;
    Rational operator++() const;
    Rational operator>(const Rational& r) const;
    Rational operator<(const Rational& r) const;
    Rational operator=(const Rational& r) const;
};
