#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n = 10;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << "Sum of the first 10 numbers is : " << sum;
    return 0;
}