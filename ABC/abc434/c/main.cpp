#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll T;
    cin >> T;

    rep(i, T) {
        ll n, h;
        cin >> n >> h;
        vector<ll> t(n+2, -1);
        vector<ll> l(n+2, -1);
        vector<ll> u(n+2, -1);
        reps(j,n) {
            cin >> t[j] >> l[j] >> u[j];
        }
        ll curr_time = 0;
        ll L = h, U = h;
        bool isSuccess = true;
        reps(j, n){
            ll dt = t[j] - curr_time;

            L -= dt;
            U += dt;
            L = max(L, l[j]);
            U = min(U, u[j]);

            if (L > U) {
                isSuccess = false;
                break;
            }   
            curr_time = t[j];
        }
        if (isSuccess){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    
    }

    return 0;
}
