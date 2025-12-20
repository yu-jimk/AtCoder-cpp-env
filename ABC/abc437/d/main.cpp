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
    ll a_sum = 0, b_sum = 0;
    rep(i,n){
        ll a; cin>>a;
        a_sum += a;
    }
    rep(i,m){
        ll b; cin>>b;
        b_sum += b;
    }

    ll ans = a_sum*m - b_sum*n;
    
    cout << ans << endl;

    return 0;
}
