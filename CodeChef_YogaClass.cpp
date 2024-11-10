// ----> Solution 1 <----
// #include <iostream>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N, X, Y;
//         cin >> N >> X >> Y;
//         int maxEarnings = 0;

//         for (int type2Sessions = 0; type2Sessions <= N / 2; ++type2Sessions)
//         {
//             int remainingHours = N - (type2Sessions * 2);
//             int currentEarnings = (type2Sessions * Y) + (remainingHours * X);
//             maxEarnings = max(maxEarnings, currentEarnings);
//         }

//         cout << maxEarnings << endl;
//     }

//     return 0;
// }

// ----> Solution 2 <----
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, x, y;
        cin >> n >> x >> y;
        int money = 0;

        if (y <= 2 * x) {
            money = n * x;
        } else {
            int type2_sessions = n / 2;
            money += type2_sessions * y;
            int remaining_hours = n % 2;
            money += remaining_hours * x;
        }
        // This Is Wrong !!! ---- we should not print the answer in this way in
        // CP. cout << "Answer is: ";  ----> we Should directly cout the Answer.
        // Check the Sample Input and output for understanding
        cout << money << endl;
    }

    return 0;
}
