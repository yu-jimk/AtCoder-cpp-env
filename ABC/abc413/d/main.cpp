// abc413 D - Make Geometric Sequence
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        double r = a[1] / a[0];

        for (int j = 2; j < n; ++j) {
            if (a[j] / a[j - 1] != r) {
                cout << "No" << endl;
                break;
            }
        }

        // cout << "Yes" << endl;
    }

    cout << "No" << endl;

    return 0;
}