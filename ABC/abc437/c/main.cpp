#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll t;
    cin >> t;

    rep(i,t){
        ll n; cin>>n;
        vector<tuple<ll,ll,ll>> v;
        ll w_sum = 0, p_sum = 0;
        
        rep(j,n){
            ll w,p; cin>>w>>p;
            v.push_back({w+p,w,p});
            w_sum += w;
        }

        sort(v.rbegin(), v.rend());

        ll idx = 0;
        while (idx < n && w_sum > p_sum) {
            auto [_, w, p] = v[idx];
            p_sum += p;
            w_sum -= w;
            idx++;
        }
        cout << n-idx << endl;
    }
    return 0;
}
