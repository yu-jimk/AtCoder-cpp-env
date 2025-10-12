// abc409 B - Citation
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    int max_iterator = *max_element(a.begin(), a.end());
    vector<int> count(max_iterator);

    for (int i = 0; i <= max_iterator; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= a.at(j)) {
                count.at(i)++;
            }
        }
    }
    int index = distance(a.begin(), max_element(a.begin(), a.end()));

    cout << index << endl;
    return 0;
}
