#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)
#define Yes(b) ((b) ? "Yes" : "No")
#define YES(b) ((b) ? "YES" : "NO")

int main() {
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n){
        ll sum = 0;
        rep(j, n){
            if (i != j){
                sum += a[j];
            }
        }
        if (m == sum){
            cout << "Yes" << endl;
            return 0;
        }
        
    }

    cout << "No" << endl;

    return 0;
}
