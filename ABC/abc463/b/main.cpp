#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n;
    char x;
    cin >> n >> x;

    vector<string> s(n);
    rep(i, n) {
        cin >> s[i];
    }

    rep(i, n) {
        if (s[i][x - 65] == 'o') {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
