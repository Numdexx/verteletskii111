#include <iostream>
#include <cmath>
using namespace std;
int main() {
  
    double x, a, b, c, F;
    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;
    cout << "Введіть значення c: ";
    cin >> c;
  
    if (x < 5 && c != 0) {
        F = -a * pow(x, 2) - b;
    }
    else if (x > 5 && c == 0) {
        if (x == 0) {
            cout << "Помилка: ділення на нуль (знаменник x = 0)!" << endl;
            return 1;
        }
        F = (x - a) / x;
    }
    else {
        if (c == 0) {
            cout << "Помилка: ділення на нуль (знаменник c = 0)!" << endl;
            return 1;
        }
        F = -x / c;
    }

    cout << "Результат F = " << F << endl;

    return 0;
}# verteletskii111
