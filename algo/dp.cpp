#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, W;
    vector<int> weight(N), value(N);
    N = 10, W = 20;
    weight = {1, 3, 2, 4, 5, 6, 1, 7, 3, 6};
    value = {4, 6, 5, 7, 6, 8, 5, 2, 9, 7};
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));
    for (int i = 0; i < N; i++) {
        int wi = weight[i];
        int vi = value[i];
        for (int w = 0; w <= W; ++w) {
            if (w < wi) {
                dp[i + 1][w] = dp[i][w];
            } else {
                dp[i + 1][w] = max(dp[i][w], dp[i][w - wi] + vi);
            }
        }
    };
    cout << "DP napsack chk" << endl;
    cout << dp[N][W] << endl;
    assert(dp[N][W] == 44);
    cout << "OK" << endl;
}
