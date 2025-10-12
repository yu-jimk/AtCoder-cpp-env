// abc427 C - Bipartize
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, m;
    cin >> n >> m;

    vector<ll> color(n + 1, 1);
    vector<ll> u(m + 1, 0);
    vector<ll> v(m + 1, 0);

    for (ll i = 1; i <= m; i++) {
        cin >> u[i] >> v[i];
    }
    ll min_count = m;

    for (ll j = 1; j <= n; j++) {
        for (ll i = 1; i <= m; i++) {

            if (u[i] == j) {
                color[v[i]] = 0;
            }
        }
        int count = 0;
        for (ll i = 1; i <= m; i++) {
            if ((color[u[i]] == 0 && color[v[i]] == 0) || (color[u[i]] == 1 && color[v[i]] == 1)) {
                count++;
            }
        }
        if (min_count > count) {
            min_count = count;
        }
    }

    cout << min_count << endl;

    return 0;
}