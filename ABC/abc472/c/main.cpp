#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, m, k;
    cin >> n >> m >> k;

    ll sum = 0;
    queue<ll> q;
    rep(i, m) {
        q.push(0);
    }

    rep(i, n) {
        ll a;
        cin >> a;

        if (k >= sum + a - q.front()) {
            sum += a;
            q.push(a);

            cout << "Yes" << endl;
        } else {
            q.push(0);

            cout << "No" << endl;
        }

        sum -= q.front();
        q.pop();
    }

    return 0;
}
