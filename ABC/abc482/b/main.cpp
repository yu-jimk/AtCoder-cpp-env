#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n = 5;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    ll ans = 1e18;
    ll cnt = 0;

    rep(i, n) {
        cnt = count(s[i].begin(), s[i].end(), '.');
        ans = min(ans, cnt);
    }

    rep(i, n) {
        cnt = 0;
        rep(j, n) {
            if (s[j][i] == '.') {
                cnt++;
            }
        }
        ans = min(ans, cnt);
    }

    cnt = 0;
    rep(i, n) {
        if (s[i][i] == '.') {
            cnt++;
        }
    }
    ans = min(ans, cnt);

    cnt = 0;
    rep(i, n) {
        if (s[i][n - i - 1] == '.') {
            cnt++;
        }
    }
    ans = min(ans, cnt);

    cout << ans << endl;

    return 0;
}
