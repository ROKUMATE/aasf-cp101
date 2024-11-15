#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    cout << "Otiginal array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << *ptr << " ";
        ptr++;
    }
    cout << "\n";

    ptr = numbers;

    ptr += 2;
    *ptr += 5;

    ptr--;
    *ptr *= 2;

    std::cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    return 0;
}
