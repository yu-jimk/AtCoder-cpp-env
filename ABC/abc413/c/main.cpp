// abc413 C - Large Queue
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    ll q;
    cin >> q;
    deque<pair<ll, ll>> a;

    for (ll i = 0; i < q; i++) {
        ll n;
        cin >> n;
        if (n == 1) {
            ll c, x;
            cin >> c >> x;
            a.push_back({x, c});
        } else {
            ll sum = 0;
            ll k;
            cin >> k;
            while (k > 0) {
                auto [v, c] = a.front();
                a.pop_front();
                ll m;
                if (c > k) {
                    m = k;
                } else {
                    m = c;
                }
                sum += m * v;
                k -= m;
                if (c > m) {
                    a.push_front({v, c - m});
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
}
