#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll k;
    cin >> k;

    vector<ll> a(k);
    rep(i, k) cin >> a[i];
    auto it = std::find(a.begin(), a.end(), 9);
    if (it != a.end()) {
        sort(a.begin(), a.end());
        cout << a[0] << endl;
        return 0;
    }

    cout << -1 << endl;
    return 0;
}
