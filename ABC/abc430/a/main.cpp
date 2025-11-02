#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    if (a <= c){
        if (b <= d){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
        return 0;
    }
    

    cout << "No" << endl;

    return 0;
}
