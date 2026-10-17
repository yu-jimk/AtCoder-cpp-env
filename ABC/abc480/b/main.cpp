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
    vector<ll> ans(n, 0);
    rep(i, n) cin >> s[i];

    while (m--) {
        string t;
        cin >> t;

        ll count = 0;
        vector<ll> diff(n, 0);

        rep(i, n) {
            if (t == s[i]) {
                ans[i]++;
                count = -1;
                break;
            }

            if (t.size() != s[i].size()) {
                continue;
            }

            rep(j, t.size()) {
                if (t[j] != s[i][j]) {
                    diff[i]++;
                }
            }
            if (diff[i] == 1) {
                count++;
            }
        }

        if (count == 1) {
            rep(i, n) {
                if (diff[i] == 1) {
                    ans[i]++;
                }
            }
        }
    }

    rep(i, n) {
        cout << ans[i] << endl;
    }

    return 0;
}
