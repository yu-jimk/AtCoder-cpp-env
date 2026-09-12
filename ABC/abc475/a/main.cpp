#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    string s;
    cin >> s;

    rep(i, s.length()) {
        if (i != 0) {
            cout << 'o';
        }
        cout << s[i];
    }

    cout << "\n";

    return 0;
}
