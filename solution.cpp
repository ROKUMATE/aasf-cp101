#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, x, y, money = 0, temp = n;
        cin >> n >> x >> y;
        if (n < 2) {
            cout << n * x << endl;

        } else {
            while (y > 2 * x && temp > 1) {
                money += y;
                temp -= 2;
            }

            money += x;
            cout << money << endl;
        }
    }

    return 0;
}
