#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, x, y;
    cin >> n >> x >> y;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    // 総重量を決めうちで指定してしまっている
    auto min_iterator = min_element(a.begin(), a.end());
    ll min = *min_iterator*y;

    ll count = 0;
    ll diff = y-x;
    rep(i, n){
        ll d = (a[i]*y-min)/diff;
        if(d > a[i]){
            cout << -1 << endl;
            return 0;
        }else{
            count += a[i]-d;
        }
    }

    cout << count << endl;

    return 0;
}
