// abc411 B - Distance Table
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> d(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> d[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        int D = 0;
        for (int j = i; j < n - 1; ++j) {
            D += d[j];
            cout << D;
            if (j < n - 2)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}