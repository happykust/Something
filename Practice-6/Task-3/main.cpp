#include "iostream"
#include "Bay/Bay.h"

using namespace std;

int main() {
    Ocean o1("Pacific", "North America", 165250000, 4650, 64000000, 10, 35);
    Ocean o2("Atlantic", "South America", 106450000, 3640, 31000000, 15, 40);

    Sea s1("Mediterranean", "Europe", 303000, 1500, 250000, 20, 45);
    Sea s2("Arctic", "North America", 14056000, 4500, 5000000, 5, 30);

    Bay b1("Gulf of Mexico", "North America", 900000, 1000, 100000, 25, 50);
    Bay b2("Gulf of California", "North America", 100000, 500, 50000, 30, 55);

    /*
     * По факту это море наследуется от океана 1, которое имеет идентичное имя.
     * В файле Sea.cpp есть закомментированная строка 139 с вызовом exeception, но я ее закомментировал,
     * чтобы программа работала.
     * Можете расскомментировать и тогда всё упадёт в ошибку.
     */
    Sea s3(&o1, "Pacific");


    cout << "Ocean 1: " << o1 << endl;
    cout << "Ocean 2: " << o2 << endl << endl;

    cout << "Sea 1: " << s1 << endl;
    cout << "Sea 2: " << s2 << endl << endl;

    cout << "Bay 1: " << b1 << endl;
    cout << "Bay 2: " << b2<< endl << endl;

    cout << "Sea 3: " << s3 << endl;

    return 0;
}