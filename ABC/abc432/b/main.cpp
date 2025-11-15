#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 0; i <= (ll)(n); i++)

int main() {

    string x;
    cin >> x; 
    vector<ll> num(x.size());

    rep(i, x.size()){
        num[i]=(ll)(x[i]-'0');
    }

    sort(num.begin(), num.end());

    rep(i, x.size()){
        if (num[i] != 0 && i > 0){
            swap(num[0], num[i]);
            break;
        }else if (num[i] != 0 && i == 0){
            break;
        }
    }

    rep(i, x.size()){
        cout << num[i];
    }

    cout << endl;
    return 0;
}
