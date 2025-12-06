#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
using Graph = vector<vector<int>>;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define reps(i, n) for (ll i = 1; i <= (ll)(n); i++)

// 深さ優先探索
bool dfs(const Graph &G, int v, vector<bool> &seen, vector<bool> &isBlack) {
    seen[v] = true; // v を訪問済にする

    bool foundBlack = isBlack[v]; // vが黒かどうか

    // v から行ける各頂点 next_v について
    for (int nv : G[v]) {
        if (seen[nv]) continue; // next_v が探索済だったらスルー
        if (dfs(G, nv, seen, isBlack)) {
            foundBlack = true; // 再帰的に探索
        }
    }
    return foundBlack;
}

int main(){
    ll n, m;
    cin >> n >> m;

    Graph g(n);
    rep(i,m) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        g[x].push_back(y);
    }

    vector<bool> isBlack(n, false);

    ll q;
    cin >> q;

    while (q--) {
        int op, v;
        cin >> op >> v;
        v--; 

        if (op == 1) {
            isBlack[v] = !isBlack[v];

        } else {
            vector<bool> seen(n, false); // 全頂点を「未訪問」に初期化
            bool ok = dfs(g, v, seen, isBlack);

            cout << (ok ? "Yes" : "No") << endl;
        }
    }
}
