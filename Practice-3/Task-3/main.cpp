#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rationals: ";
    cin >> n;
    auto* arr = new Rational[n];
    for (int i = 0; i < n; i++) {
        int a, b;
        cout << "Enter the numerator of the " << i + 1 << " rational: ";
        cin >> a;
        cout << "Enter the denominator of the " << i + 1 << " rational: ";
        cin >> b;
        arr[i].set(a, b);
    }
    cout << "Rationals: ";
    for (int i = 0; i < n; i++) {
        arr[i].show();
        cout << "\n";
    }

    Rational sum;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    cout << "Sum of rationals: ";
    sum.show();
    cout << "\n";

    Rational sub;
    for (int i = 0; i < n; i++) {
        sub = sub - arr[i];
    }
    cout << "Subtraction of rationals: ";
    sub.show();
    cout << "\n";

    delete[] arr;
    return 0;
}
