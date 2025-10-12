// abc424 B - Perfect
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> p(n, vector<int>(m, 0));
    queue<int> q;

    for (int i = 0; i < k; ++i) {
        int a, b;
        cin >> a >> b;
        p[a - 1][b - 1] = 1;
        int check = 0;
        for (int i = 0; i < m; ++i) {
            check += p[a - 1][i];
        }
        if (check == m)
            q.push(a);
    }

    bool first = true;
    while (!q.empty()) {
        if (!first)
            cout << " ";
        cout << q.front();
        q.pop();
        first = false;
    }

    cout << endl;

    return 0;
}