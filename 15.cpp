#include <iostream>
using namespace std;

int main() {
    int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < SIZE / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[SIZE - 1 - i];
        arr[SIZE - 1 - i] = temp;
    }

    cout << "The reversed array is: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
