#include <iostream>
using namespace std;
int main() {
    int num;
    int a;
    int b;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    if ((a > 0) && (b > 0)) {
        cout << "Both numbers are greater than 0" << endl;
    }
    (a > b) ? cout << "First number is greater than the second"
            : cout << "Second number is greater than the first";
    // assuming numbers cant be equal
    return 0;
}