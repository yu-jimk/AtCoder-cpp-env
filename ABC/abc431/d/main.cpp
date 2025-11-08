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

    vector<tuple<ll, ll, ll>> elemnts;
    vector<pair<bool, ll>> using_elements;

    ll count = 0;
    ll total_b = 0;
    ll total_h = 0;

    rep(i, n) {
        ll w, h, b;
        cin >> w >> h >> b;
        elemnts.push_back(tuple(w,h,b));

        // using_elementsにwガン無視の最大値を格納
        if (h <= b){
            using_elements.push_back(pair(true, b-h));
            count+=b;
            total_b += w;
        }else{
            using_elements.push_back(pair(false, h-b));
            count+=h;
            total_h += w;
        }
    }
    
    // hとbで差分が小さいものをソート
    vector<ll> vals;
    for (auto &p : using_elements) {
        if (p.first) {
            vals.push_back(p.second);
        }
    }

    sort(vals.begin(), vals.end());

    // bの方がwが大きくなるように、hとbの差分が小さいものをbからhに変更する
    while (total_h <= total_b){
        total_h-=0;
        total_b+=0;
    }
    

    cout << n << endl;

    return 0;
}
