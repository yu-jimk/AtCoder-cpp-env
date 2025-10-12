// abc410 B - Reverse Proxy
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int n, q;
    cin >> n >> q;

    vector<int> x(q);
    for (int i = 0; i < q; i++) {
        cin >> x.at(i);
    }

    vector<int> box(n);
    vector<int> in(q);
    for (int i = 0; i < q; i++) {
        if (x[i] >= 1) {
            box[x[i] - 1]++;
            in[i] = x[i];
        } else {
            // 最小値のインデックスを取得
            int index = distance(box.begin(), min_element(box.begin(), box.end()));
            box[index]++;
            in[i] = index + 1;
        }
    }

    for (int i = 0; i < q; i++) {
        cout << in[i] << " ";
    }
    cout << endl;

    return 0;
}