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

    vector<pair<ll, ll>> x(n);
    rep(i, n) cin >> x[i].first >> x[i].second;
    sort(x.begin(), x.end());

    ll current_y = n + 1, ans = 0;

    for (auto [a, b] : x) {
        if (current_y > b) {
            current_y = b;
            ans++;
        }
        if (b == 1) {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
