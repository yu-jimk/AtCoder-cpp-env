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

    vector<vector<ll>> b(h, vector<ll>(w));
    rep(i, h) {
        rep(j, w) {
            cin >> b[i][j];
        }
    }

    vector<ll> h_sum(h, 0), w_sum(w, 0);

    rep(i, h) {
        rep(j, w) {
            h_sum[i] += b[i][j];
            w_sum[j] += b[i][j];
        }
    }

    rep(i, h) {
        rep(j, w) {
            if (j) {
                cout << " ";
            }
            cout << h_sum[i] + w_sum[j] - b[i][j];
        }
        cout << endl;
    }

    return 0;
}
