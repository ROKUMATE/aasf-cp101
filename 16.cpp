#include <iostream>
using namespace std;

int main() {
    int SIZE = 5;
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i <= SIZE; i++) {
        sum += arr[i];
    }

    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}
