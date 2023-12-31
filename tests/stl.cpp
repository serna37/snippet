#include <bits/stdc++.h>
using namespace std;
int main() {
    string str = "ABCdEfG";
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    assert(str == "abcdefg");
    cout << "transform OK" << endl;

    int N = 10;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        A[i] = i * 2;
    }

    sort(A.begin(), A.end());
    for (int i = 0; i < N; i++) {
        assert(A[i] == i * 2);
    }
    cout << "sort Asc OK" << endl;

    sort(A.rbegin(), A.rend());
    for (int i = 0; i < N; i++) {
        cout << A[i] << endl;
    }
    cout << "sort Desc OK" << endl;

    A.push_back(2);
    A.push_back(2);
    A.push_back(2);
    A.push_back(2);

    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    for (int i = 0; i < N; i++) {
        cout << A[i] << endl;
    }
    cout << "unique" << endl;
}
