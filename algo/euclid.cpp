#include <bits/stdc++.h>
using namespace std;
int main() {
    auto modinv = [](long long a, long long m) -> long long {
        long long b = m, u = 1, v = 0;
        while (b) {
            long long t = a / b;
            a -= t * b;
            swap(a, b);
            u -= t * v;
            swap(u, v);
        }
        u %= m;
        if (u < 0) u += m;
        return u;
    };
    int N = 13;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        A[i] = i + 1;
    }
    vector<int> ans = {1, 7, 9, 10, 8, 11, 2, 5, 3, 4, 6, 12, 0};
    cout << "euclid inverse chk" << endl;
    for (int i = 0; i < N; i++) {
        long long a = modinv(A[i], 13);
        assert(ans[i] == a);
    }
    cout << "OK" << endl;
}
