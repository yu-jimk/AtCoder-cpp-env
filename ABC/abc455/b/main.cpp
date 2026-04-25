#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll h, w;
    cin >> h >> w;

    vector<string> a(h);
    for (ll i = 0; i < h; i++) {
        cin >> a[i];
    }

    ll ans = 0;
    rep(h1, h) {
        for (ll h2 = h1; h2 < h; h2++) {
            rep(w1, w) {
                for (ll w2 = w1; w2 < w; w2++) {
                    bool ok = true;

                    for (ll i = h1; i <= h2 && ok; i++) {
                        for (ll j = w1; j <= w2; j++) {
                            ll ni = h1 + h2 - i;
                            ll nj = w1 + w2 - j;
                            if (a[i][j] != a[ni][nj]) {
                                ok = false;
                                break;
                            }
                        }
                    }

                    if (ok) {
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}