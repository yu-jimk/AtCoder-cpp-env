#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll prev = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end()), min = 0;
    bool first = true;

    while (min <= prev) {
        if (!first) {
            prev = min;
        }

        // 最小値のイテレータを取得
        auto iterator = min_element(a.begin(), a.end());
        // 最小値のインデックスを取得
        ll index = distance(a.begin(), iterator);
        // 最小値をk加算
        a[index] += k;
        // 最小値を更新
        min = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
        first = false;
    }

    cout << min << endl;

    return 0;
}
