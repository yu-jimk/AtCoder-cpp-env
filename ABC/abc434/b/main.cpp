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

    vector<ll> a_count(n+1, 0);
    vector<ll> b_sum(m+1, 0);
    reps(i, n) {
        ll a, b;
        cin >> a >> b;
        a_count[a]++;
        b_sum[a] += b;
    }

    reps(i, m){
        cout << fixed << setprecision(20) << (long double)b_sum[i]/a_count[i] << endl;
    }

    return 0;
}
