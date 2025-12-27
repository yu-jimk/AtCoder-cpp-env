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

    stack<pair<ll,ll>> v;

    vector<ll> a(n+1, -1);
    reps(i, n) cin >> a[i];

    reps(i, n) {
        if (v.empty() || a[i] != v.top().first){
            v.push({a[i],1});
        }else{
            v.top().second++;
        }
        if (v.top().second == 4){
            v.pop();
        }
    }

    ll ans = 0;
    while (!v.empty()) {
        ans += v.top().second;
        v.pop();
    }  

    cout << ans << endl;
    
    return 0;
}
