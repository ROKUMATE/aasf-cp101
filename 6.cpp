#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number to check the grade of Student: ";
    cin >> n;
    switch (n) {
        case 20:
            cout << "Grade D\n";
            break;
        case 40:
            cout << "Grade C\n";
            break;
        case 60:
            cout << "Grade B\n";
            break;
        case 80:
            cout << "Grade A\n";
            break;
        default:
            cout << "Grade F: Student is Fail\n";
    }
    return 0;
}
