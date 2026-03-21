#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

void paint(ll x, ll y, vector<vector<char>> &a, ll h, ll w) {
    if (x < 0 || x >= w || y < 0 || y >= h)
        return;
    if (a[y][x] == '#')
        return;

    a[y][x] = '#';

    paint(x + 1, y, a, h, w);
    paint(x - 1, y, a, h, w);
    paint(x, y + 1, a, h, w);
    paint(x, y - 1, a, h, w);
}

int main() {
    ll h, w;
    cin >> h >> w;

    vector<vector<char>> a(h, vector<char>(w));
    rep(i, h) {
        rep(j, w) {
            cin >> a[i][j];
        }
    }

    ll count = 0;

    // 外周を塗る
    for (ll i = 0; i < w; i++) {
        paint(i, 0, a, h, w);
        paint(i, h - 1, a, h, w);
    }
    for (ll i = 0; i < h; i++) {
        paint(0, i, a, h, w);
        paint(w - 1, i, a, h, w);
    }

    // 内部の白を数える
    for (ll i = 1; i < h - 1; i++) {
        for (ll j = 1; j < w - 1; j++) {
            if (a[i][j] == '.') {
                paint(j, i, a, h, w);
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
