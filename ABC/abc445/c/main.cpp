#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n + 1);
    reps(i, n) cin >> a[i];

    reps(s, n) {
        ll count = 0;
        double max = pow(10.0, 100.0);
        ll prevIndex = 0, currectIndex = s;
        while (prevIndex != currectIndex || count == max) {
            prevIndex = currectIndex;
            currectIndex = a[currectIndex];
            count++;
            // cout << prevIndex << " " << currectIndex << endl;
        }
        if (s == n) {
            cout << a[currectIndex];

        } else {
            cout << a[currectIndex] << " ";
        }
    }
    cout << endl;

    return 0;
}
