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

    vector<pair<ll,ll>> t;
    rep(i, n) {
        ll v; 
        cin >> v;
        t.push_back({v, i});
    };

    sort(t.begin(), t.end());

    rep(i, 3){
        if (i == 2) {
            cout << t[i].second + 1 << endl;
        }else{
            cout << t[i].second + 1 << " ";
        }
        
    }

    return 0;
}
