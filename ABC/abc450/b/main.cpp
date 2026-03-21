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

    vector<vector<ll>> C(n, vector<ll>(n));

    for (ll i = 0; i < n - 1; i++) {
        for (ll j = i + 1; j < n; j++) {
            cin >> C[i][j];
        }
    }

    for (ll a = 0; a < n; a++) {
        for (ll b = a + 1; b < n; b++) {
            for (ll c = b + 1; c < n; c++) {
                if (C[a][b] + C[b][c] < C[a][c]) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
