#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, v;
    cin >> n >> v;

    vector<ll> w(n);
    rep(i, n) cin >> w[i];

    ll max_glad = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (i + j + k + 3 <= v) {
                    max_glad = max(max_glad, w[i] + w[j] + w[k]);
                }
            }
        }
    }

    cout << max_glad << endl;

    return 0;
}
