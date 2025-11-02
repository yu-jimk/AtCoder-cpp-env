#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 0; i <= (ll)(n); i++)

vector<string> split(string str, char del) {
    vector<string> result;
    int n = str.size();
    int i = 0;

    while (i < n) {
        if (str[i] == del) {
            int j = i;
            while (j < n && str[j] == del) j++;
            result.push_back(str.substr(i, j - i));
            i = j;
        } else {
            int j = i;
            while (j < n && str[j] != del) j++;
            result.push_back(str.substr(i, j - i));
            i = j;
        }
    }

    return result;
}

int main() {
    ll n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    char del = 'b';
    vector<string> s_split = split(s, del);
    rep(i,s_split.size()){
        ll a_count = 0, b_count = 0;

    }
    
    return 0;
}
