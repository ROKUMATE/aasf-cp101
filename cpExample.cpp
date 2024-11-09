// #include <bits/stdc++.h>

// using namespace std;

// int main(void) {
//     int n = 5;
//     int arr[n];

//     // Sum of the array
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         cout << "Enter the element " << i + 1 << ": ";
//         cin >> arr[i];
//         sum = sum + arr[i];
//         cout << "Sum of the array till now is: " << sum << endl;
//     }
//     cout << "Sum of the array is: " << sum << endl;

//     // Reverse the array
//     // for(int i = 0; i < n/2; i++){
//     //     swap(arr[i], arr[n-i-1]);
//     // }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << arr[5];
    return 0;
}