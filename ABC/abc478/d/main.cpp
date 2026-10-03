#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, q;
    cin >> n >> q;

    vector<vector<pair<ll, ll>>> ranges(200001);

    while (q--) {
        ll l, r, x;
        cin >> l >> r >> x;
        ranges[x].push_back({l, r});
    }

    cout << n << endl;

    return 0;
}
