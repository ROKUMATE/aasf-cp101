#include <iostream>
using namespace std;

int main() {
    int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int target = 2;
    bool found = false;
    int index = -1;

    for (int i = 0; i <= SIZE; i++) {
        if (arr[i] == target) {
            found = true;
        }
        if (found) {
            index = 1;
        }
    }

    if (found) {
        cout << "Target " << target << " found at index: " << index << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
