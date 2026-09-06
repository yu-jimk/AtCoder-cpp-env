#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, q;
    cin >> n >> q;

    list<ll> p;
    vector<list<ll>::iterator> pos(n + 1);

    rep(i, n) {
        ll tmp;
        cin >> tmp;
        p.push_back(tmp);

        // 各要素のitrを事前に登録
        auto it = prev(p.end());
        pos[tmp] = it;
    }

    while (q--) {
        ll a;
        cin >> a;
        p.erase(pos[a]);
        p.push_back(a);

        // itrを更新
        pos[a] = prev(p.end());
    }

    for (ll x : p) {
        cout << x << " ";
    }
    cout << '\n';

    return 0;
}
