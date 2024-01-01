#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "bit all loop == start" << endl;
    int N = 5;
    for (int bit = 0; bit < 1 << N; bit++) {
        vector<int> tmp;
        for (int i = 0; i < N; i++)
            if (bit & (1 << i)) tmp.push_back(i);
        //
        for (int i = 0; i < (int)tmp.size(); i++) {
            cout << tmp[i];
        }
        cout << endl;
    }
    cout << "bit all loop == end" << endl;
}
