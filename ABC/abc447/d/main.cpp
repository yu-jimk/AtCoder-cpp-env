#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    string s;
    cin >> s;

    vector<ll> a, b, c;
    ll i = 0;
    for (char ch : s) {
        if (ch == 'A') {
            a.push_back(i);
        } else if (ch == 'B') {
            b.push_back(i);
        } else if (ch == 'C') {
            c.push_back(i);
        }
        i++;
    }

    ll count = 0;
    rep(j, a.size()) {
        ll a_index = a[j];
        // bの中でa_indexより大きいindexを探す
        auto b_iter = upper_bound(b.begin(), b.end(), a_index);
        if (b_iter == b.end()) {
            continue;
        }
        ll b_index = *b_iter;
        // cの中でb_indexより大きいindexを探す
        auto c_iter = upper_bound(c.begin(), c.end(), b_index);
        if (c_iter == c.end()) {
            continue;
        }
        ll c_index = *c_iter;
        count++;
    }

    cout << count << endl;

    return 0;
}