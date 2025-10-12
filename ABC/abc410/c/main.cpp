// abc410 C - Rotatable Array
#include <bits/stdc++.h>
using namespace std;

int main() {

    long n, q;
    cin >> n >> q;

    vector<vector<int>> query(q, vector<int>(3));
    for (int i = 0; i < q; i++) {
        cin >> query[i][0] >> query[i][1];
        if (query[i][0] != 2) {
            cin >> query[i][2];
        }
    }

    unordered_map<int, int> a;
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }

    int index_count = n;
    for (int i = 0; i < q; i++) {
        if (query[i][0] == 1) {
            a[query[i][1]] = query[i][2];
        } else if (query[i][0] == 2) {
            cout << a[query[i][1]] << endl;

        } else {
            for (int j = 0; j < query[i][1]; j++) {
                a[index_count] = index_count - n;
                a.erase(index_count - n);
                index_count++;
            }
        }
    }

    return 0;
}
