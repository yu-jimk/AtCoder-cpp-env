#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

struct Point {
    ll x, y;
};

int main() {
    ll h, w, k;
    cin >> h >> w >> k;

    vector<string> s(h);
    rep(i, h) {
        cin >> s[i];
    }

    vector<bool> isBombH(h, false), isBombW(w, false);
    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == '#') {
                isBombH[i] = true;
                isBombW[j] = true;
            }
        }
    }

    vector<vector<int>> distances(h, vector<int>(w, -1));
    queue<Point> q;

    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == '.' && !isBombH[i] && !isBombW[j]) {
                distances[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    const int dx[] = {-1, 1, 0, 0};
    const int dy[] = {0, 0, -1, 1};

    ll ans = 0;

    while (!q.empty()) {
        Point currect = q.front();
        q.pop();

        if (distances[currect.x][currect.y] <= k) {
            ans++;
        }

        rep(d, 4) {
            ll nx = currect.x + dx[d];
            ll ny = currect.y + dy[d];

            if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
                continue;
            }
            if (s[nx][ny] == '#') {
                continue;
            }
            if (distances[nx][ny] != -1) {
                continue;
            }

            distances[nx][ny] = distances[currect.x][currect.y] + 1;
            q.push({nx, ny});
        }
    }

    cout << ans << endl;

    return 0;
}
