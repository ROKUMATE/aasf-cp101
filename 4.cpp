#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter Number between 1 to 999: ";
    cin >> num;
    if (num < 10) {
        cout << num << " is a ONE digit Number ";
    } else if (num < 100) {
        cout << num << " is a TWO digit Number ";
    } else if (num < 100) {
        cout << num << " is a Three digit Number";
    } else {
        cout << num << " is a negative number or zero";
    }
    return 0;
}
