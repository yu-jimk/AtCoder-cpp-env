// abc417 C - Distance Indicators
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_multiset<int> aj;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int key = i - a[i];
        if (key > 1)
            count += aj.count(key);
        aj.insert(i + a[i]);
    }

    cout << count << endl;

    return 0;
}