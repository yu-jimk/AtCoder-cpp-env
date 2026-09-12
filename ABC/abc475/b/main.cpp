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

    ll cnt_o = 0, cnt_t = 0, cnt_h = 0;

    rep(i, n) {
        ll a;
        cin >> a;

        ll sub = (1000 - a % 1000) % 1000;

        cnt_o += sub % 10;
        cnt_t += sub / 10 % 10;
        cnt_h += sub / 100;
    }

    cout << cnt_o << " " << cnt_t << " " << cnt_h << "\n";

    return 0;
}