#include <iostream>
using namespace std;
int main() {
    int num;
    int a;
    int b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    if ((a > 0) && (b > 0)) {
        cout << "Both numbers are greater than 0" << endl;
    }
    if (a > b) {
        cout << "First number is larger than the second" << endl;
    } else {
        cout << "Second number is larger than the first" << endl;
    }
    // assuming numbers cant be equal
    return 0;
}
