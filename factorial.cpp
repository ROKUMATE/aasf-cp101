#include <iostream>
#include <vector>

using namespace std;

void multiply(vector<int> &result, int x) {
    int carry = 0;
    for (int i = 0; i < result.size(); i++) {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> result(1, 1);
    for (int x = 2; x <= n; x++) {
        multiply(result, x);
    }
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int number = 100;
    cout << "Factorial of " << number << " is: ";
    factorial(number);
    return 0;
}