#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 30;
    vector<int> ans = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

    vector<int> is_P(N + 1, true);
    is_P[0] = is_P[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (!is_P[i]) continue;
        for (int j = i * i; j <= N; j += i) is_P[j] = false;
    }

    cout << "eratosthenes_sieve chk" << endl;
    for (int i = 0; i < (int)ans.size(); i++) {
        assert(is_P[ans[i]]);
    }
    cout << "OK" << endl;
}
