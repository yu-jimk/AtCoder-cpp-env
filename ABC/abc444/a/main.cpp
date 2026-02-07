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

    ll a = n / 100;
    ll b = (n / 10) % 10;
    ll c = n % 10;

    if (a == b && b == c) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}
