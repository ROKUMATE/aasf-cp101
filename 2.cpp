#include <iostream>
using namespace std;
int main() {
    int no;
    cout << "Enter any number" << endl;
    cin >> no;
    if (no % 2 == 0) {
        cout << "Even number" << endl;
    } else {
        cout << "Odd num" << endl;
    }

    return 0;
}
