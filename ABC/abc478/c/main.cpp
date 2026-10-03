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
    auto sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    ll l = 0, r = n - 1;
    while (l < n && a[l] == sorted_a[l]) {
        l++;
    }
    while (r >= 0 && a[r] == sorted_a[r]) {
        r--;
    }

    if (l >= r) {
        cout << "Yes"
             << "\n";
        return 0;
    }

    if (r - l + 1 <= k) {
        sort(a.begin() + l, a.begin() + r + 1);
    }

    if (a == sorted_a) {
        cout << "Yes"
             << "\n";
    } else {
        cout << "No"
             << "\n";
    }

    return 0;
}
