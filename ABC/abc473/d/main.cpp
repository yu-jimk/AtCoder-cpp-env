// DFSで全探索を高速化するのが正解
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
    iota(a.begin(), a.end(), 1);

    ll ans = 0;
    do {
        ll sum = 0;

        rep(i, n) {
            sum += (i + 1) * a[i];
        }
        if (sum == k) {
            bool first = true;
            for (int x : a) {
                if (!first) {
                    cout << " ";
                }
                cout << x;
                first = false;
            }
            cout << "\n";
        }
    } while (next_permutation(a.begin(), a.end()));

    return 0;
}
