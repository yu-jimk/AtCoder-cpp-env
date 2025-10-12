// abc423 A - Scary Fee
#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, c;
    cin >> x >> c;

    double money = 1 + ((double)c / 1000);
    int h = x / money;
    int ans = (h / 1000) * 1000;

    cout << ans << endl;
    return 0;
}