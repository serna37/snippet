#include <bits/stdc++.h>
using namespace std;
int main() {
    auto is_prime = [](int num) -> bool {
        if (num == 2) return true;
        if (num < 2 || num % 2 == 0) return false;
        double sqrtNum = sqrt(num);
        for (int i = 3; i <= sqrtNum; i += 2) {
            if (num % i == 0) return false;
        }
        return true;
    };

    int N = 30;
    vector<int> primes;
    vector<int> ans = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    for (int i = 0; i < N; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }

    cout << "is_prime chk" << endl;
    for (int i = 0; i < (int)primes.size(); i++) {
        assert(primes[i] == ans[i]);
    }
    cout << "OK" << endl;
}
