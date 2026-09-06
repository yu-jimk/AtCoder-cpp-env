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

    vector<ll> p(n);
    rep(i, n) cin >> p[i];

    rep(i, n / 10) {
        auto first = p.begin() + i * 10;
        auto last = p.begin() + (i + 1) * 10;

        vector<ll> d(first, last);

        sort(d.begin(), d.end());

        rep(j, d.size()) {
            if (d[j] != i * 10 + j + 1) {
                cout << "No"
                     << "\n";
                return 0;
            }
        }
    }

    cout << "Yes"
         << "\n";

    return 0;
}
