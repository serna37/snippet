#include <bits/stdc++.h>
using namespace std;
int main() {
    // https://atcoder.jp/contests/abc326/tasks/abc326_c
    int N, M;
    // cin >> N >> M;
    N = 8;
    M = 6;
    // vector<int> A(N);
    vector<int> A = {2, 3, 5, 7, 11, 13, 17, 19};
    // for (int i = 0; i < N; i++) {
    // cin >> A[i];
    //}
    cout << "2point syakutori" << endl;
    int ans = 0, cur = 0;
    for (int i = 0; i < N; i++) {
        while (cur < N and A[cur] < A[i] + M) ++cur;
        ans = max(ans, cur - i);
    }
    assert(ans == 4);
    cout << "OK" << endl;
}
