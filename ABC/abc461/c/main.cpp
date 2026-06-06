#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

int main() {
    ll n, k, m;
    cin >> n >> k >> m;

    vector<vector<ll>> gems(n + 1);
    rep(i, n) {
        ll c, v;
        cin >> c >> v;
        gems[c].push_back(v);
    }

    priority_queue<ll> max_gems;
    priority_queue<ll> other_gems;
    reps(i, n) {
        sort(gems[i].begin(), gems[i].end(), greater<ll>());
        if (gems[i].size() == 0) {
            continue;
        }
        max_gems.push(gems[i][0]);
        for (size_t j = 1; j < gems[i].size(); j++) {
            other_gems.push(gems[i][j]);
        }
    }

    ll ans = 0;
    reps(i, m) {
        if (max_gems.empty()) {
            break;
        }
        ans += max_gems.top();
        max_gems.pop();
    }

    reps(i, k - m) {
        if (other_gems.empty() && max_gems.empty()) {
            break;
        }
        if (max_gems.empty()) {
            ans += other_gems.top();
            other_gems.pop();
        } else if (max_gems.top() > other_gems.top()) {
            ans += max_gems.top();
            max_gems.pop();
        } else {
            ans += other_gems.top();
            other_gems.pop();
        }
    }

    cout << ans << endl;
    return 0;
}
