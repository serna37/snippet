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

    cout << "modpow chk" << endl;

    // 3^5 mod 12
    long long ans = modpow(3, 5, 12);
    assert(ans == 3);

    // 1000^7888 mod 51
    long long ans2 = modpow(23, 34, 51);
    assert(ans2 == 19);

    cout << "OK" << endl;
}
