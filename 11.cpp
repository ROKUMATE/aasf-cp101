#include <iostream>
using namespace std;

int main() {
    int weeks = 3, days_in_week = 7;

    for (int i = 1; i <= weeks; ++i) {
        cout << "Week: " << i << endl;

        for (int j = 1; j <= days_in_week; ++j) {
            // break during the 2nd week
            if (i == 2) {
                break;
            }
            cout << "    Day:" << j << endl;
        }
    }
    return 0;
}
