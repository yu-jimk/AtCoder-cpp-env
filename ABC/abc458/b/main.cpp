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

    vector<vector<ll>> a(h, vector<ll>(w, 0));

    rep(h1, h) {
        for (ll h2 = h1; h2 < h; h2++) {
            rep(w1, w) {
                for (ll w2 = w1; w2 < w; w2++) {
                    ll ans = abs(h1 - h2) + abs(w1 - w2);
                    if (ans == 1) {
                        a[h1][w1]++;
                        a[h2][w2]++;
                    }
                }
            }
        }
    }

    rep(i, h) {
        rep(j, w) {
            if (j == w - 1) {
                cout << a[i][j] << endl;
            } else {
                cout << a[i][j] << " ";
            }
        }
    }

    return 0;
}
