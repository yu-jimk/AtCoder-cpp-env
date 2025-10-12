// abc420 B - Most Minority
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    for (int i = 0; i < n; ++i)
        cin >> s[i];

    vector<int> count(n, 0);

    for (int j = 0; j < m; ++j) {
        int x = 0, y = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i][j] == '0')
                x++;
            else
                y++;
        }

        if (x == 0 || y == 0) {
            for (int i = 0; i < n; ++i)
                count[i]++;
        } else if (x < y) {
            for (int i = 0; i < n; ++i)
                if (s[i][j] == '0')
                    count[i]++;
        } else {
            for (int i = 0; i < n; ++i)
                if (s[i][j] == '1')
                    count[i]++;
        }
    }

    int max = *max_element(count.begin(), count.end());
    for (int i = 0; i < n; i++) {
        if (count[i] == max) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}