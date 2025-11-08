#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll h, b;
    cin >> h >> b;
    int ans = 0;

    if (h > b){
        ans = h - b;
    }
    
    cout << ans << endl;

    return 0;
}
