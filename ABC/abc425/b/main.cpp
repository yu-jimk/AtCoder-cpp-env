// abc425 B - Find Permutation 2
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<bool> is_used(n + 1, false);
    rep(i, n) {
        if (a[i] != -1) {
            if (is_used[a[i]]) {
                cout << "No" << endl;
                return 0;
            }
            is_used[a[i]] = true;
        }
    }

    vector<int> rest_num;
    for (int x = 1; x <= n; x++) {
        if (!is_used[x])
            rest_num.push_back(x);
    }

    int index = 0;
    vector<int> p(n);
    rep(i, n) {
        if (a[i] == -1) {
            p[i] = rest_num[index];
            index++;
        } else {
            p[i] = a[i];
        }
    }

    cout << "Yes" << endl;
    bool first = true;
    rep(i, n) {
        if (!first)
            cout << " ";
        cout << p[i];
        first = false;
    }
    cout << endl;

    return 0;
}