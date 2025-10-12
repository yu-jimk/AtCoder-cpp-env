// abc412 C - Giant Domino
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> s(n);
        for (int j = 0; j < n; j++)
            cin >> s[j];

        int count = 1;

        for (int j = 0; j < n; j++) {
            for (int k = 1; k < n; k++) {
                if (2 * s[j] >= s[k]) {
                    count++;
                    break;
                }
            }
        }

        if (count == 1) {
            cout << -1 << endl;
        } else {
            cout << count << endl;
        }
    }

    return 0;
}