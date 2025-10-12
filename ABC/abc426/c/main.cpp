// abc426 C - Upgrade Required
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)
using namespace std;
#define ll long long

int main() {

    ll n, q;
    cin >> n >> q;

    vector<ll> count(n + 1, 1);

    ll zero_index = 1;

    rep(i, q) {
        ll x, y;
        cin >> x >> y;
        ll total = 0;
        if (x >= zero_index) {
            for (int i = x; i >= zero_index; --i) {
                total += count[i];
                count[i] = 0;
            }
            count[y] += total;
        }
        cout << total << endl;
        zero_index = x + 1;
    }
    return 0;
}