#include <bits/stdc++.h>

using namespace std;

bool lemonadeChange(vector<int>& bills) {
    // Assume :- int bills[]
    // int Size = bills.size();   ----> Extra Function to find the size of the
    // array / vector
    int fiv = 0, ten = 0, tw = 0;
    int n = bills.size();
    for (int i = 0; i < n; i++) {
        if (bills[i] == 5)
            fiv++;
        else if (bills[i] == 10) {
            if (!fiv)
                return false;
            else {
                fiv--;
                ten++;
            }
        } else {
            if (ten > 0 && fiv > 0) {
                ten--;
                fiv--;
                tw++;
            } else if (fiv >= 3) {
                fiv -= 3;
                tw++;
            } else
                return false;
        }
    }
    return true;
}

int main(void) {
    int size;
    cin >> size;
    vector<int> bills(size);
    for (int i = 0; i < size; i++) {
        cin >> bills[i];
    }
    cout << lemonadeChange(bills) << endl;
    return 0;
}
