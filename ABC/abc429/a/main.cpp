#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)
#define Yes(b) ((b) ? "Yes" : "No")
#define YES(b) ((b) ? "YES" : "NO")

int main() {
    ll n, m;
    cin >> n >> m;

    rep(i, n) {
        if (m > i){
            cout << "OK" << endl;
        }else{
            cout << "Too Many Requests" << endl;
        }
    }
    
    return 0;
}
