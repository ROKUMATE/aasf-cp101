#include <iostream>
using namespace std;

int main() {
    int SIZE = 5;
    int arr[SIZE];

    // input
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Output
    cout << "The array elements are:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
