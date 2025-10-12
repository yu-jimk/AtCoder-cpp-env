// abc427 B - Sum of Digits Sequence
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)
using namespace std;
#define ll long long

int digitSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    int A[101];
    A[0] = 1;

    rep(i, n) {
        int sum = 0;
        for (int j = 0; j < i; j++)
            sum += digitSum(A[j]);
        A[i] = sum;
    }

    cout << A[n] << endl;

    return 0;
}