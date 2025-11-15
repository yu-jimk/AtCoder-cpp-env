#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    
    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> num;
    num.push_back(a);
    num.push_back(b);
    num.push_back(c);
    sort(num.begin(), num.end());

    cout << num[2] << num[1] << num[0] << endl;

    return 0;
}
