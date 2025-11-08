#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n , m, k;
    cin >> n >> m >> k;

    vector<ll> h(n);
    rep(i, n) cin >> h[i];
    sort(h.begin(), h.end());

    vector<ll> b(m);
    rep(i, m) cin >> b[i];
    sort(b.begin(), b.end());

    rep(i, k){
        if (h[i] > b[m-k+i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
