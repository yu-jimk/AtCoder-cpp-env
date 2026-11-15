#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    ll first_diff = 0;

    rep(i, n) {
        if (a[i] != b[i] || first_diff) {
            if (!first_diff) {
                first_diff = a[i];
            }
            if (a[i + 1] != b[i]) {
                if (b[i] == first_diff) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    if (first_diff) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}
