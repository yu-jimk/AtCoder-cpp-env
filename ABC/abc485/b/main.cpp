#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, m;
    cin >> n >> m;

    vector<string> s(n);
    rep(i, n) cin >> s[i];

    rep(i, n) {
        ll cnt = 0;
        rep(j, m) {
            if (s[i][j] == 'x') {
                cnt++;
            }
        }
        if (cnt == m) {
            cout << "Faucet " << i + 1 << endl;
            return 0;
        }
    }

    rep(i, m) {
        ll cnt = 0;
        rep(j, n) {
            if (s[j][i] == 'x') {
                cnt++;
            }
        }
        if (cnt == n) {
            cout << "Drain " << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}
