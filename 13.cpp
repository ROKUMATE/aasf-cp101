#include <iostream>
using namespace std;

int main() {
    int SIZE = 5;
    int arr[SIZE];
    int sum = 0;

    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Output
    cout << "The array elements are:" << endl;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}
