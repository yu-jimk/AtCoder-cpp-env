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

    ll ans = 0;
    while (n) {
        ll sum = 0;
        ll num = n;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum == k) {
            ans++;
        }
        n--;
    }

    cout << ans << endl;

    return 0;
}
