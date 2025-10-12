// abc424 C - New Skill Acquired
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;

    vector<ll> skill(n + 1, 0);

    for (ll i = 1; i <= n; ++i) {
        ll a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) {
            skill[i] = 1;
        } else if (skill[a] == 1 || skill[b] == 1) {
            skill[i] = 1;
        }
    }

    int count = 0;
    for (ll i = 1; i <= n; ++i) {
        if (skill[i] == 1)
            count++;
    }

    cout << count << endl;
    return 0;
}