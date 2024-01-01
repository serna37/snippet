#include <bits/stdc++.h>
using namespace std;
int main() {
    auto modpow = [](long long a, long long n, long long mod) -> long long {
        long long res = 1;
        while (n > 0) {
            if (n & 1) res = res * a % mod;
            a = a * a % mod;
            n >>= 1;
        }
        return res;
    };

    auto modinv = [&](long long a, long long mod) -> long long {
        return modpow(a, mod - 2, mod);
    };

    int N = 13;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        A[i] = i + 1;
    }
    vector<int> ans = {1, 7, 9, 10, 8, 11, 2, 5, 3, 4, 6, 12, 0};
    cout << "fermat inverse chk" << endl;
    for (int i = 0; i < N; i++) {
        long long a = modinv(A[i], 13);
        assert(ans[i] == a);
    }
    cout << "OK" << endl;
}
