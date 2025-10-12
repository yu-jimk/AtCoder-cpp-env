// abc417 B - Search and Delete
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    multiset<int> a;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }

    for (int i = 0; i < m; ++i) {
        int b;
        cin >> b;
        auto it = a.find(b);
        if (it != a.end())
            a.erase(it);
    }

    for (auto i = a.begin(); i != a.end(); i++) {
        cout << *i << " ";
    }

    cout << endl;

    return 0;
}