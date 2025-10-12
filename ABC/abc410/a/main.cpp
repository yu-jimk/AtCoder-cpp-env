// abc410 A - G1
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    int k;
    cin >> k;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (k <= a[i]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}