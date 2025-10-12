// abc417 A - A Substring
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    string s1 = s.substr(a, n - a - b);

    cout << s1 << endl;

    return 0;
}