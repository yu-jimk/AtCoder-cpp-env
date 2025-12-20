#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll h,w,n;
    cin >> h >> w >> n;

    vector<vector<ll>> a(h, vector<ll>(w));
    rep(i, h){
        rep(j, w){
            ll A; cin>>A;
            a[i][j] = A;
        }
        
    }

    vector<ll> ans(n);

    rep(i, n){
        ll b; cin>>b;
        rep(i, h){
            rep(j, w){
                if (a[i][j] == b) {
                    ans[i]++;
                }
            }
        }
    }
    
    ll max = *max_element(begin(ans), end(ans));
    cout << max << endl;

    return 0;
}
